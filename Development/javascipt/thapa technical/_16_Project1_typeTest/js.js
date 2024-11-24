
const setOfWords=["This webpage requires data that you entered earlier in order to be properly displayed. You can send this data again, but by doing so you will repeat any action this page previously performed.",
"Your large intestine contains a large number of bacteria and some fungi and viruses that make up the gut microbiome the microbes in your digestive tract that help with digestion.",
"Bacteria in the large intestine help break down carbohydrates and create gas in the process.",
"A gas is a substance that is in a gaseous, or vaporous, state of matter.",
"The term gas is also used in reference to the state itself when applied to matter that has the properties of a gaseous substance.",
"Gas is one of four natural states of matter, along with liquid, solid and plasma. A gas has no fixed shape or volume.",
"Those elements that exist in a gaseous state under 1 atmospheric pressure are called gases.",
"Those 11 gases are Helium, Argon, Neon, Krypton, Radon, Xenon, Nitrogen, Hydrogen, Chlorine, Fluorine, and Oxygen."]

const msg = document.getElementById('msg');
const typeWords = document.getElementById('mywords');
const btn = document.getElementById('btn');

let startTime, endTime; 

const playGame = () =>{
    let randomNumber = Math.floor(Math.random()*setOfWords.length);
    msg.innerText = setOfWords[randomNumber];
    // console.log(randomNumber);
    let date=new Date();
    startTime=date.getTime();
    console.log("startTime",startTime);
    btn.innerText="Done";
}

const wordCounter=(str)=>{
    let response = str.split(" ").length;
    console.log(response);
    return response;
}

const compareWords=(str1,str2)=>{
    let words1=str1.split(" ");
    let words2=str2.split(" ");
    let cnt=0;
    
    // foreach--> take whole function with value and index no. of that array.
    words1.forEach(function(item,index) {
        if (item==words2[index]) {
            cnt++;
        }
    });
    // console.log("correct world",cnt);
    let errorWords=(words1.length-cnt);
    return(cnt+" correct out of "+words1.length+" words and the total number of error are "+errorWords+".");
}

const finale=(totalTime)=>{
    let totalStr = typeWords.value;
    let wordCount = wordCounter(totalStr);
    let speed= Math.round((wordCount/totalTime)*60);

    let finalMsg="You typed total "+speed+" words per minutes ";

    finalMsg += compareWords(msg.innerText,totalStr);

    msg.innerText = finalMsg;
}

const endPlay = () =>{
    let date=new Date();
    endTime=date.getTime();
    console.log("endTime",endTime);
    let totalTime=((endTime-startTime)/1000)
    console.log("totalTime",totalTime);
    btn.innerText="Start";

    // let totalStr = typeWords.value;
    // let wordCount = wordCounter(totalStr);
    // let speed= Math.round((wordCount/totalTime)*60);

    // let finalMsg="You typed total "+speed+" words per minutes ";

    // finalMsg += compareWords(msg.innerText,totalStr);

    // msg.innerText = finalMsg;
    finale(totalTime);
}


btn.addEventListener('click',function(){
    // console.log(this);
    if(this.innerText=='Start'){
        typeWords.disabled=false;
        playGame();
    }
    else if(this.innerText="Done"){
        typeWords.disabled=true;
        // btn.innerText="Start";
        endPlay();
    }
})