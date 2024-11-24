 
// map -- key and value pair

let map = new Map();

map.set(1,"abc");
map.set("ben","ten");
map.set("when",10);
map.set("when",12); // value of key updated

console.log(map.keys());

console.log(map.has(10));
console.log(map.has(1));
console.log(map.get(1));

for(let [k,v] of map){
    console.log(k," : ",v);
}

// map.forEach((k,v)=>{  // value,key
map.forEach((v,k)=>{  // key , value
    console.log(k," : ",v);
})