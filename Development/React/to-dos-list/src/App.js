import "./App.css";
import Header from "./MyComponents/Header";
import { Todos } from "./MyComponents/Todos";
import Footer from "./MyComponents/Footer";
// import {TodoItem} from "./MyComponents/TodoItem";
import React, { useState } from "react"; //imrs

function App() {
  const onDelete = (todo) => {
    // const onDelete = () => {
    console.log("delete of todo", { todo });

    setTodos(
      todos.filter((e) => {
        return e !== todo;
      })
    );
  };
  // let todos = [
  const [todos, setTodos] = useState([
    {
      sernum: 1,
      title: "go to the market",
      desc: "you need to go to market to get this job done1.",
    },
    {
      sernum: 2,
      title: "go to the mall",
      desc: "you need to go to mall to get this job done2.",
    },
    {
      sernum: 3,
      title: "go to the ghat",
      desc: "you need to go to ghat to get this job done3.",
    },
  ]);
  return (
    <div>
      {/* <h3>My App</h3>
      <p>My app Works.</p> */}
      <Header title="MyTodosList" searchBar={false} />
      <Todos todos={todos} onDelete={onDelete} />
      <Footer />
    </div>
  );
}

export default App;

// 1:18:00
