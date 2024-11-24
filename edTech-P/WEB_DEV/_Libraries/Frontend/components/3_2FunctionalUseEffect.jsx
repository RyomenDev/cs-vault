// Using useEffect in Functional Component

// ! In functional components, similar behavior to Lifecycle Methods can be achieved using hooks like useEffect.

import React, { useEffect } from 'react';

const LifecycleDemo = () => {
  useEffect(() => {
    // ComponentDidMount logic
    return () => {
      // ComponentWillUnmount logic
    };
  }, []); // Empty dependency array means it runs once on mount and unmount

  return <div>Lifecycle Methods</div>;
};
