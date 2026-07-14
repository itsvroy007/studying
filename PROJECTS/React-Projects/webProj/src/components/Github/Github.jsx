import React, { useState } from 'react'
import { useEffect } from 'react'

export default function Github() {
  
  const [data , setData] = useState([])
  useEffect(() => {
    fetch('https://api.github.com/users/hiteshchoudhary')
    .then(response => response.json())
    .then(data => {
      setData(data)
    })
  }, [])
  
  return (
    <> 
    <div className='github-page'>
      <h1 className='github-fllw'>GitHub Followers: {data.followers}</h1>
      <img className='github-pic' src={data.avatar_url} alt="Git picture" />
    </div>
    <div>
      <img src="../src/assets/meme2.webp"  />
    </div>
  </>
  )
}
