class Students {
  constructor(name, age, Class) {
    this.myname = name;
    this.myage = age;
    this.myClass = Class;
  }
  //instance method
  biodata() {
    console.log(`hii I am ${this.myname}.`);
    console.log(`my age is ${this.myage}.`);
    console.log(`my class is ${this.myClass}.`);
  }
}

class Player extends Students {
  constructor(name, age, Class, player) {
    super(name, age, Class);
    this.game = player;
  }
  // biodata() {
//     console.log(`hii I am ${this.myname}.`);
//     console.log(`my age is ${this.myage}.`);
//     console.log(`my class is ${this.myClass}.`);
//     console.log(`I am the Player of ${this.game}`);
//   }
play_biodata() {
    // console.log(`${super.biodata()}`);
    console.log(`I am the Player of ${this.game}`);
    return `${super.biodata()}`;
  }
}

// console.log(Students.biodata);
let obj1 = new Students("vinod", 13, "8A");
let obj2 = new Player("ben", 13, "9A", "tennis");

// obj1.biodata();
// obj2.biodata();
obj2.play_biodata();

