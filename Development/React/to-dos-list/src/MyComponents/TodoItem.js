// import React from "react";

// export default function TodoItem({ todo }) {
//   return (
//     <div>
//       <h4>{todo.title}</h4>
//       <p>{todo.disc}</p>
//     </div>
//   );
// }

import React from "react";

export const TodoItem = ({ todo, onDelete }) => {
  return (
    <div>
      <h4>{todo.title}</h4>
      <p>{todo.desc}</p>
      {/* <button className="btn btn-sm btn-danger" onClick={onDelete(todo)}> */}
      <button className="btn btn-sm btn-danger" onClick={ ()=>{onDelete(todo)}}>
        Delete
      </button>
    </div>
  );
};
