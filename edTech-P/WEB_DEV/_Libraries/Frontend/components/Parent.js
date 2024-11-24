// Parent Component

/*
@ Props:
^ Props (short for properties) are read-only inputs to a React component. They are passed down from parent components to child components and are used to pass data and event handlers.
*/
import React from 'react';
import Greeting from './Greeting';

const App = () => {
  return <Greeting name="John" />;
};

export default App;
