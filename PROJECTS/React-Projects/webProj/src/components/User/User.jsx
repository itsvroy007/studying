import React from 'react'
import { useParams } from 'react-router'
import './User.css'

export default function User() {
  const {userid} = useParams()
  return (
    <div className='userid'>User :{userid}</div>
  )
}
