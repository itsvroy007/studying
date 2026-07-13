import './Footer.css'
import {React} from 'react'
import { Link } from 'react-router'
2
export default function Footer(){
  return(
    <>
      <footer className='footer'>
        <div>
          <Link to='/'>
            <img className='logoimg' src="./src/assets/logoImage.png" />
          </Link>
        </div>
      <div>
        <div className='options'>
          <span>RESOURCES</span>
          <span>FOLLOW US</span>
          <span>LEGAL</span>
        </div>
        <div>
          <Link to='/'><span>Home</span></Link>
          <Link to='/github'><span>Github</span></Link>
          <span>Privacy Policy</span>
          <Link to='/about'><span>About</span></Link>
          <Link to='/discord'><span>Discord</span></Link>
          <span>Terms&Conditions</span>
        </div>
      </div>
      </footer>
    </>
  )
}