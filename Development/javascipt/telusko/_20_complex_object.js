

let alien={
    name: 'ben',
    tech:'JS',
    laptop:{ // object 
        cpu:'i7',
        ram:8,
        brand:'Asus'
    }
}

console.log(alien);
console.log(alien.tech);
console.log(alien.laptop);
console.log(alien.laptop.brand);
console.log(alien.laptop.brand.length);
console.log(alien.laptop.brand1); //undefined
console.log(alien.laptop?.brand1?.length); //only print legth if available , without? -error

delete alien.laptop
console.log(alien);