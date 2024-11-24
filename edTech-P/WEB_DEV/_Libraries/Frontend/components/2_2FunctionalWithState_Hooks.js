// Functional Component with State using Hooks

/*
@ State:

^ State is a built-in object that allows components to create and manage their own local state. State is mutable and can change over time, usually in response to user actions or network responses.
*/

import React, { useState } from 'react';

const Counter = () => {
  const [count, setCount] = useState(0);

  return (
    <div>
      <p>Count: {count}</p>
      <button onClick={() => setCount(count + 1)}>Increment</button>
    </div>
  );
};

export default Counter;
