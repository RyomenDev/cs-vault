import React, { useState } from 'react';
import axios from 'axios';

const PostDataComponent = () => {
  const [name, setName] = useState('');
  const [response, setResponse] = useState(null);

  const handleSubmit = (event) => {
    event.preventDefault();
    axios.post('https://api.example.com/data', { name })
      .then(response => {
        setResponse(response.data);
      })
      .catch(error => {
        console.error('There was an error!', error);
      });
  };

  return (
    <div>
      <form onSubmit={handleSubmit}>
        <input
          type="text"
          value={name}
          onChange={(e) => setName(e.target.value)}
          placeholder="Enter name"
        />
        <button type="submit">Submit</button>
      </form>
      {response && <p>Response: {response.message}</p>}
    </div>
  );
};

export default PostDataComponent;
