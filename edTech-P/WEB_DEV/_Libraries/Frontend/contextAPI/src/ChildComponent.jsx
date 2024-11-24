import React, { useContext } from 'react';
import MyContext from './Context';

const ChildComponent = () => {
  const { state, setState } = useContext(MyContext);

  return (
    <div>
      <h1>{state}</h1>
      <button onClick={() => setState("Updated State")}>Update State</button>
    </div>
  );
};

export default ChildComponent;
