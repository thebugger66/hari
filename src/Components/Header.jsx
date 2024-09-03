import React from 'react'
import { FaBars } from "react-icons/fa";

const Header = () => {
  return (
    <div className='flex justify-between'>
      <div className='flex items-center justify-center gap-2'>
<img src="./assets/logo.svg.png" alt="Logo"  />

<br></br>
<button className='bg-gradient-to-r  from-orange-400  to-red-400 text-xs text-white px-2.5 py-1.5 rounded-2xl' >Hotstar is hiring</button>
<br></br>


      </div>
      <ul className=' hidden lg:flex justify-between items-center font-lato text-white  gap-6 '>
        <li className=' px-7 py-2 rounded-2xl bg-gradient-to-r from-orange-400 to-red-400 hover:from-orange-600 hover:to-red-600'>
          <a href='#'> Why hotstar</a>
        </li>
        <li className=' px-7 py-2 rounded-2xl bg-gradient-to-r from-orange-400 to-red-400 hover:from-orange-600 hover:to-red-600'>
          <a href='#'>plains</a>
        </li>
        <li className=' px-7 py-2 rounded-2xl bg-gradient-to-r from-orange-400 to-red-400 hover:from-orange-600 hover:to-red-600'>
          
          <a href='#'>Domain</a>
        </li>

      </ul>
      
    </div>
  )
}

export default Header