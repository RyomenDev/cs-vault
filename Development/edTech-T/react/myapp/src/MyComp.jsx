//<-------- Simple Class Component With State Starts Here --->

import React, { Component } from "react";

class MyComp extends Component {
  constructor(props) {
    super(props);
  }
  state = {
    name: "Tom",
    city: "Miami",
  };
  render() {
    return (
      <div>
        <h1>Hello From Class Component</h1>
        <h2>My name is {this.state.name}</h2>
        <h3>I Am from {this.state.city}</h3>
      </div>
    );
  }
}

export default MyComp;

// <----Simple Class Component With State Starts Here --->

// <-------Simple function with useState Hooks Starts Here------->

// import React, { Component ,useState} from "react";

// function MyComp(){
//     const [name,setname]=useState("Hummingbird")
//     const [city,setcity]=useState("Miami")

//     return (
//       <div>
//         <h1>this is Hello From function React Comp</h1>
//         <h2>My name is {name}</h2>
//         <h3>I Am from {city}</h3>
//       </div>
//     );
//   }


// export default MyComp;

// <-------Simple function with useState Hooks ENDS Here------->