
const yt3={
    name:'ben3',
    work:'cartoon3',
    feature:function (key1,key2) {
        console.log(`very good ${this.name} in ${this.work} with ${key1} and ${key2}`);
    }
}
const yt4={
    name:'ben4',
    work:'cartoon4',
}

// yt3.feature('ohk','okay');

yt3.feature.call(yt4,'thanku','thank you');

yt3.feature.call(yt4,['thanku','thank you','hi'],['why','ok','yes']);
yt3.feature.apply(yt4,['thanku','thank you']);

let max1=Math.max(1,2,6,3);
console.log(max1);

let max2=Math.max.apply(null,[1,4,5,2,8,5]);
console.log(max2);

