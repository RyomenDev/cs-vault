
// function getfast(laptop1,laptop2){
//  if(laptop1.cpu>laptop2.cpu)
//     console.log(laptop1);
// else
//     console.log(laptop2);
// }

let laptop1 ={
    cpu:'i7',
    ram:8,
    brand:'ASUS',

    compare:function(other){
        if(this.cpu > other.cpu)
            console.log(this);
        else
            console.log(other);
    },

    getConfig: function () {
        console.log(this.cpu); // this-current object
    }
}
let laptop2 ={
    cpu:'i9',
    ram:16,
    brand:'MSI',

    getConfig: function () {
        console.log(this.cpu);
    }
}


// getfast(laptop1,laptop2)
laptop2.compare(laptop1)//error as only defing in laptop1
laptop1.compare(laptop2) 


