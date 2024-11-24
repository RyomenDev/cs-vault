// App.js
import React, { useContext } from 'react';
import { ApiProvider, ApiContext } from './ApiContext';

const DataDisplay = () => {
  const { data, loading, error } = useContext(ApiContext);

  if (loading) return <p>Loading...</p>;
  if (error) return <p>Error: {error.message}</p>;

  return (
    <ul>
      {data.map(item => (
        <li key={item.id}>{item.name}</li>
      ))}
    </ul>
  );
};

const App = () => (
  <ApiProvider>
    <DataDisplay />
  </ApiProvider>
);

export default App;
