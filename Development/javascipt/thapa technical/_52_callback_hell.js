/*
API 
1: 2s student roll no
2: 2s name and age
3: 2s gender 
*/

const getRollNo=()=>{
    setTimeout(() => {
        console.log('getRollNo called');
        let roll_no=[1,2,3,4,5]
        console.log(roll_no);

        setTimeout((roll_No) => {
            const bioData={
                name:'ben',
                age:10
            }
            console.log(`roll no is ${roll_No}.name is ${bioData.name}. and age is ${bioData.age},`);

            setTimeout((name) => {
                bioData.gender='male';
                console.log(`roll no is ${roll_No}.name is ${bioData.name}. and age is ${bioData.age}, and is ${bioData.gender}`);
            }, 2000,bioData.name);
        }, 2000,roll_no[1]);
    }, 2000);
}

getRollNo();