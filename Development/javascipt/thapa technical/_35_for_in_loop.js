

// forin loop used on enumarting objects -- lookout properties
// --> one by one check =  object


const biodata={
    name:"Vinod",
    age:26,
    deg:"MBA"
}

for (const prop in biodata) {
    console.log(prop, biodata[prop]);
}
