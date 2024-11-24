
// forof loop used on iterable objects 
// --> one by one check =  arrays. strings

const myFavProg=['js','php','java','c','python','c++'];


for (const items of myFavProg) {
 console.log(items);   
}
for (const items of "myFavProg") {
 console.log(items);   
}