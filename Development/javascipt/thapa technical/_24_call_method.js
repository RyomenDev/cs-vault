
const yt1={
    name:'ben1',
    work:'cartoon1',
    feature:function () {
        console.log(`very good ${this.name} in ${this.work}.`);
    }
}
const yt2={
    name:'ben2',
    work:'cartoon2',
}

// yt1.feature();
// yt1.feature.call(yt2);


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

yt3.feature('ohk','okay');
yt3.feature.call(yt4,'thanku','thank you');
