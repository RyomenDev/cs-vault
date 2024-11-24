const score = document.querySelector(".score");
const startScreen = document.querySelector(".startScreen");
const gameArea = document.querySelector(".gameArea");

console.log(gameArea);

startScreen.addEventListener("click", start);
let player = { speed: 5 };

let keys = {
  ArrowDown: false,
  ArrowUp: false,
  ArrowLeft: false,
  ArrowRight: false,
};

document.addEventListener("keydown", keyDown);
document.addEventListener("keyup", keyUp);

function keyDown(e) {
  e.preventDefault();
  keys[e.key] = true;
  //   console.log(e.key);
  // console.log(keys);
}
function keyUp(e) {
  e.preventDefault();
  keys[e.key] = false;
  //   console.log(e.key);
  // console.log(keys);
}

function movelines() {
  let lines = document.querySelectorAll(".lines");

  lines.forEach(function (item) {
    if (item.y >= 800) {
      item.y -= 820;
    }

    item.y += player.speed;
    item.style.top = item.y + "px";
  });
}

function gamePlay() {
  console.log("hey Game Started.");

  let car = document.querySelector(".car");
  // show h,w,top,left,etc
  let road = gameArea.getBoundingClientRect();
  // console.log(road);

  if (player.start) {
    movelines();

    if (keys.ArrowUp && player.y > road.top + 70) player.y -= player.speed;
    if (keys.ArrowDown && player.y < road.bottom - 70) player.y += player.speed;
    if (keys.ArrowLeft && player.x > 0) player.x -= player.speed;
    if (keys.ArrowRight && player.x < road.width - 50) player.x += player.speed;

    car.style.top = player.y + "px";
    car.style.left = player.x + "px";

    window.requestAnimationFrame(gamePlay);
  }
}

function start() {
  gameArea.classList.remove("hide");
  startScreen.classList.add("hide");
  player.start = true;
  window.requestAnimationFrame(gamePlay);

  //  adding class lines to gameArea
  for (x = 0; x < 8; x++) {
    let roadLine = document.createElement("div");
    roadLine.setAttribute("class", "lines");
    roadLine.y = 5 + x * 100;
    roadLine.style.top = roadLine.y + "px";
    gameArea.appendChild(roadLine);
  }

  // Adding div
  let car = document.createElement("div");
  car.setAttribute("class", "car");
  //   car.innerText = "hey I am ur CAR.";
  gameArea.appendChild(car);

  player.x = car.offsetTop;
  player.y = car.offsetLeft;

  // console.log("top: " + car.offsetTop);
  // console.log("left: " + player.y);

  //  adding class lines to gameArea
  for (x = 0; x < 3; x++) {
    let enemyCar = document.createElement("div");
    enemyCar.setAttribute("class", "enemy");
    enemyCar.y = 5 + x * 100;
    enemyCar.style.top = enemyCar.y + "px";
    gameArea.appendChild(enemyCar);
  }
}

// console.log(score);
