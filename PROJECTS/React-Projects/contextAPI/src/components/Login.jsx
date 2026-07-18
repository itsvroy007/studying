import React, { useState,useContext } from "react";
import UserContext from "../context/UserContext";

export default function Login() {
  const [username, setUsername] = useState("");
  const [password, setPassword] = useState("");
  
  const {setUser} = useContext(UserContext)

  const handleSubmit = (event) => {
    event.preventDefault()
    setUser({username,password})
    
  };

  return (
    <>
      <div>
        <h2>Login</h2>
        <input 
        type="text" 
        placeholder="UserName" 
        value={username}
        onChange={(event) => {setUsername(event.target.value)}}
        />
        <br />
        <input 
        type="password" 
        placeholder="Password" 
        value={password}
        onChange={(event) => {setPassword(event.target.value)}}
        
        />
        <button onClick={handleSubmit}>Submit</button>
      </div>
    </>
  );
}
