// <---- Simple Function Starts Here --->
// function () {  // ffc
//   return (  );
// }

// export default ;
// <---- Simple Function Ends Here --->

// <--- Class Component starts here--->
import React, { Component } from 'react';

// component == class
class Myclass extends Component {
  constructor(props) {
    super(props);
  }
  state = { 
    Name:"Jerry",
    Batch:2023,
    Course:"Web D"
   }
  render() { 
    return ( 
      <div>
        <h1>My Name is {this.state.name}</h1>
      </div>
     );
  }  
}
 
export default Myclass;
// <--- Simple Class Ends Here ---->


// class App extends component {
//   constructor(props) {
//     super(props);
//   }

//   state = {};
//   render() {
//     return (
//       <div>
//         <h1>Simple Class Component</h1>
//       </div>
//     );
//   }
// }

// <------------------------------------->

// import React, { Component } from "react"; // imrc

// function App() {
//   // ffc function component
//   return (
//     <div>
//       <h1> Hello AND Welcome ALL.</h1>
//       <h2>The sum of two values are {56 + 45.21}</h2>
//       <div></div>
//     </div>
//   );
// }

// export default App;


// <------------------------------------------>
// import logo from './logo.svg';
// import './App.css';

// function App() {
//   return (
//     <div className="App">
//       <header className="App-header">
//         <img src={logo} className="App-logo" alt="logo" />
//         <p>
//           Edit <code>src/App.js</code> and save to reload.
//         </p>
//         <a
//           className="App-link"
//           href="https://reactjs.org"
//           target="_blank"
//           rel="noopener noreferrer"
//         >
//           Learn React
//         </a>
//       </header>
//     </div>
//   );
// }

// export default App;
