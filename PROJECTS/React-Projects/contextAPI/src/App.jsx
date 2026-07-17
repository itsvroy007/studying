import UserContextProvider from './context/UserContextProvider'
import './App.css'

function App() {

  return (
    <>
    <UserContextProvider>
        <h1>
          React with Chai aur Code 
        </h1>
    </UserContextProvider>
    </>
  )
}

export default App
