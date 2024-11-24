var a = 10;
let b = 20;
const c = 30;

// function scope
function af() {
  var a1 = 40;
  let b1 = 50;
  const c1 = 60;
  document.write("the value are ", a1, " ", a, "b= ", c); // a,b,c,a1,b1,c1 accessible

  // block scope
  if (3 < 5) {
    var a2 = 70;
    let b2 = 100;
    const c2 = 101;
    document.write("<br> value of a2 = ", a2, " a1= ", a1);
  }
  document.write("<br>the value are ", a1, " ", a, " <br> ", a2, " b2="); // a,b,c ,a2 accessible // b2,c2  not accessible
}

// document.write("<br> value : ",c," ",a1," ","<br>")  -- a1 not accessible
document.write("<br> value : ", c, " ", a, " ", "<br>");
af();
