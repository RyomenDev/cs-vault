
function Alien(name,lang){
    this.name=name;
    this.lang=lang;
    // return this
    this.work=function(){
        console.log('solving bugs');
    }
}

let alien1=new Alien('ben','python')
let alien2=new Alien('ten','java')

alien1.lang='blockchain'

console.log(alien1);
console.log(alien2);

alien1.work()