import { Route,Routes } from 'react-router'
import Header from './components/Header/Header.jsx'
import HomePage from './components/Home/HomePage.jsx'
import Footer from './components/Footer/Footer.jsx'
import Contact from './components/Contact/Contact.jsx'
import Github from './components/Github/Github.jsx'
import About from './components/About/About.jsx'
import './App.css'
import User from './components/User/User.jsx'
import Layout from './Layout.jsx'

function App() {
  return (
    <>
      
      <h1>Dummy web site</h1>
      <Routes>
        <Route path='/' element={<Layout />} >
          <Route path='' element={<HomePage />}></Route>
          <Route path='/about' element={<About  />}></Route>
          <Route path='/contact' element={<Contact  />}></Route>
          <Route path='/github' element={<Github />}></Route>
          <Route path='/user/:userid' element={<User />}></Route>
        </Route>
      </Routes>
      
    </>
  )
}

export default App
