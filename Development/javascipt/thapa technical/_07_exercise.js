
console.log("i am a "+ job); //i am a undefined
var job ="web developer"
console.log("i am a "+job); // i am a web developer

function whoAmI() {
    console.log("i am a "+ job); 
    var job ="Full Stack"
    console.log("i am a "+job);
}

whoAmI();
//i am a undefined
//i am a Full Stack