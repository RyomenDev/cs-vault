
const yt1={
    name:'ben1',
    content:'cartoon1',
    feature:function () {
        console.log(`very good ${this.name} in ${this.content}.`);
    }
}
// yt1.feature();

let ytfun1=yt1.feature;
// ytfun1();

// bind() method takes as an object as an first argument and creates a new function.
let ytfun2=yt1.feature.bind(yt1);
// ytfun2();

const yt2={
    name:'ben2',
    content:'cartoon2',
}    
const yt3={
    name:'ben3',
    content:'cartoon3',
}    
const yt4={
    name:'ben4',
    content:'cartoon4',
}    

function feature_(rate) {
    console.log(`very good ${this.name} in ${this.content} with ${rate}.`);
}

feature_();
let cfun2=feature_.bind(yt2);
cfun2('4');
let cfun3=feature_.bind(yt3);
cfun3(3);