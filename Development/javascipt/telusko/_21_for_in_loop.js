let alien={
    name: 'ben',
    tech:'JS',
    laptop:{ // object 
        cpu:'i7',
        ram:8,
        brand:'Asus'
    }
}

for(let key in alien){
    console.log(key,alien[key]);
}