import './Header.css'
// import React from 'react'
import { Link } from 'react-router'

export default function Header(){
  return(
  <>
    <div className='header'>
      <div>
        <img className='LogoImage' src='/src/assets/logoImage.png'></img>
      </div>
      <div className='headerOptions'>
        <Link to='/'><span className='home'>Home</span></Link>
        <Link to='/about'><span className='about'>About</span> </Link>
        <Link to='/contact'>
          <span className='contact'>Contact</span>
        </Link>
        <Link to='github'>
          <span className='github'>GitHub</span>
        </Link>
      </div>

      <div className='buttons'>
        <button className='button-login'>
          Log In
        </button>
        <button className='button-getstarted'>
          Get started
        </button>
      </div>
      
    </div>
  </>
  )
}

