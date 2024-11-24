import React from "react";
import { TodoItem } from "./TodoItem";

export const Todos = (props) => {
  return (
    <div className="container">
      <h3 className="text-center my-3">Todos List</h3>
      {props.todos.length===0?"No Todos to Display":(
      {/* <TodoItem todo={props.todos[0]} />; */}
      {props.todos.map((todo) => {
        return( 
        <>
        {/* <h3>yes</h3> */}
        <TodoItem todo={todo} key={todo.sernum} onDelete={props.onDelete}/>
        </>)
      })})}
    </div>
  );
};

// export default Todos
