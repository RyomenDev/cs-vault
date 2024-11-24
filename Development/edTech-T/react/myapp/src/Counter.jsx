// created file


import React,{useState} from 'react';

function Counter() {
    // Declare a state variable called "count" and initialize it to 0
    const [count,setCount]=useState(0);

    // Event handler for incrementing the count
    const handleIncrement=()=>{
        setCount(count+1);
    };

    // Event handler for decrementing the count
    const handleDecrement=()=>{
        setCount(count-1);
    };

    return (
        <div>

        </div>
    )
}