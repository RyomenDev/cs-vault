
console.log(" welcome to spotify ");

// initialize the variables
let songIndex = 1;
let check;

// if(typeof Audio != "undefined") {
//    console.log('media/Pirates_Song.mp3');
//   }
// console.log(typeof Audio);

// let audioElement = new Audio('media/songs/Pirates_Song.mp3');
let audioElement = new Audio('media/songs/1.mp3');

// console.log(typeof audioElement);
console.log(document);
let masterPlay = document.getElementById("masterPlay");
let myProgressBar = document.getElementById('myProgressBar');
let gif = document.getElementById('gif');
// console.log(document.querySelectorAll("i"));
// console.log(masterPlay);
// console.log(myProgressBar);
let songItems = Array.from(document.getElementsByClassName('songItem'));
let masterSongName = document.getElementById('masterSongName')

let songs = [
    {songName : "Pirates Song", filePath:"media/songs/Pirates_Song.mp3", coverPath: "media/cover/cover1.jpg"},
    {songName : "Everything At Once", filePath:"media/songs/Everything At Once.mp3", coverPath: "media/cover/cover1.jpg"},
    {songName : "Game of Thrones", filePath:"media/songs/Game of Thrones.mp3", coverPath: "media/cover/cover1.jpg"},
    {songName : "Harry Potter - The Ultimate Indian Theme", filePath:"media/songs/Harry Potter - The Ultimate Indian Theme.mp3", coverPath: "media/cover/cover1.jpg"},
]

songItems.forEach((element,i) => {
    // console.log(element,i);
    element.getElementsByTagName('img')[0].src=songs[i].coverPath;
    element.getElementsByClassName('songName')[0].innerText=songs[i].filePath;
});


// audioElement.play();

// Handle play/pause click

// masterPlay.addEventListener("click",event1(e){
masterPlay.addEventListener("click",()=>{
    if(audioElement.paused || audioElement.currentTime <= 0){
        audioElement.play();
        masterPlay.classList.remove("fa-play-circle");
        masterPlay.classList.add("fa-pause-circle");
        gif.style.opacity = 1;
    }
    else if(!audioElement.paused){
        audioElement.pause();
        masterPlay.classList.remove("fa-pause-circle");
        masterPlay.classList.add("fa-play-circle");
        makeAllPlays();
        gif.style.opacity = 0;
    }
    masterSongName.innerText=songs[songIndex-1].songName;

    console.log(songIndex);
    console.log(songs[songIndex-1].songName);
})

// LISTEN TO EVENTS
audioElement.addEventListener('timeupdate',()=>{
    // console.log('timeupdate');
    // update seekbar
    progress = parseInt((audioElement.currentTime/audioElement.duration)*100)
    // console.log(progress);
    myProgressBar.value=progress;
})

myProgressBar.addEventListener('change',()=>{
    audioElement.currentTime = myProgressBar.value*audioElement.duration/100;
})

const makeAllPlays=()=>{
    Array.from(document.getElementsByClassName('songItemPlay')).forEach((element)=>{ 
        element.classList.remove("fa-pause-circle");
        element.classList.add("fa-play-circle"); 
     }) 
}

Array.from(document.getElementsByClassName('songItemPlay')).forEach((element)=>{
    element.addEventListener('click',(e)=>{
        // console.log(e.target);
        // index=parseInt(e.target.id);
        songIndex=parseInt(e.target.id);

        console.log("start",songIndex);
        console.log("start",audioElement.paused);

        makeAllPlays();
        // event1(e);

            // e.target.classList.remove("fa-play-circle");
            // e.target.classList.add("fa-pause-circle");

            // audioElement.src ='media/songs/Everything At Once.mp3';
            audioElement.src =`media/songs/${songIndex}.mp3`;
            // console.log(songIndex);

            masterSongName.innerText=songs[songIndex-1].songName;
            // console.log(audioElement.src);
            audioElement.currentTime=0;

            console.log("mid",audioElement);
            console.log("mid",audioElement.paused);

            if(audioElement.paused ){
                audioElement.play();
                e.target.classList.remove("fa-play-circle");
                e.target.classList.add("fa-pause-circle");
               masterPlay.classList.remove("fa-play-circle");
                masterPlay.classList.add("fa-pause-circle"); 
                gif.style.opacity = 1;
                check=0;
                console.log("1",check);
            }
            else {
            // if(!audioElement.paused){
                audioElement.pause();
                e.target.classList.remove("fa-pause-circle");
                e.target.classList.add("fa-play-circle");
                masterPlay.classList.remove("fa-pause-circle");
                masterPlay.classList.add("fa-play-circle");
                gif.style.opacity = 0;
                check=1;
                console.log("2",check);
            }

            // audioElement.play();
            // gif.style.opacity = 1;

            // makeAllPlays(check);


            // masterPlay.classList.remove("fa-play-circle");
            // masterPlay.classList.add("fa-pause-circle");
            // makeAllPlays(e);
        
        console.log("end",audioElement.paused);


    })
})

document.getElementById('previous').addEventListener('click',()=>{
    if (songIndex<=1) {
        songIndex=4;
    }
    else
     songIndex=songIndex-1;

    audioElement.src =`media/songs/${songIndex}.mp3`;
    masterSongName.innerText=songs[songIndex-1].songName;

    console.log(songIndex);
    console.log(songs[songIndex-1].songName);

    audioElement.currentTime=0;
    audioElement.play();
    gif.style.opacity = 1;
    masterPlay.classList.remove("fa-play-circle");
    masterPlay.classList.add("fa-pause-circle");
})
document.getElementById('next').addEventListener('click',()=>{
    if (songIndex>=4) {
        songIndex=1;
    }
    else{
     songIndex=songIndex+1;
    }
    audioElement.src =`media/songs/${songIndex}.mp3`;
    masterSongName.innerText=songs[songIndex-1].songName;

    console.log(songIndex);
    console.log(songs[songIndex-1].songName);

    audioElement.currentTime=0;
    audioElement.play();
    gif.style.opacity = 1;
    masterPlay.classList.remove("fa-play-circle");
    masterPlay.classList.add("fa-pause-circle");
})

console.log(" good bye ");

