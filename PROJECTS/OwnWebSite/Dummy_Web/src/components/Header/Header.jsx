import React from "react";
import { Link }from 'react-router'
export default function Header() {
  return (
    <>
      <div>
        <div>
          <img className="logo-image" src="../src/assets/header-img.png" />
        </div>
        <div>Header</div>
        <img src="https://www.springboard.com/blog/wp-content/uploads/2022/09/programmng-language.jpg" />
        <div className="headerOptions">
          <Link to="/">
            <span className="home">Home</span>
          </Link>
          <Link to="/about">
            <span className="about">About</span>{" "}
          </Link>
          <Link to="/contact">
            <span className="contact">Contact</span>
          </Link>
          <Link to="github">
            <span className="github">GitHub</span>
          </Link>
        </div>

        <div className="buttons">
          <button className="button-login">Log In</button>
          <button className="button-getstarted">Get started</button>
        </div>
      </div>
    </>
  );
}
