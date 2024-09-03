import React from 'react'

const Footer = () => {
  return (
    <div className='flex flex-col gap-12 md:flex-row md:justify-between '>
      <ul className='flex gap-6 font-lato text-white '>
        
        
        <li className=' bg-gradient-to-t from-orange-400 to-red-400 hover:from-orange-600 hover:to-red-600  px-4 py-2 rounded-2xl'>
        <button>
          <a href='https://www.google.com'>facebook</a>
          </button>
        </li>
        
        <li className='  bg-gradient-to-r from-orange-400 to-red-400 hover:from-orange-600 hover:to-red-600  px-4 py-2 rounded-2xl'>
          <a href='#'>instagram</a>
        </li>
        <li className='bg-gradient-to-r from-orange-400 to-red-400 hover:from-orange-600 hover:to-red-600  px-4 py-2  rounded-2xl'>
          <a href='#'>twitter</a>
        </li>

      </ul>
      <div className='flex gap-2'>
        <img src="./assets/Help-Avatar.png" alt="avatar"  />
        <p className='font-playfair font-thin content-center items-center'>Have any quations?</p>
        <a href='#' className='font-lato font-medium content-center items-center'>Talk to a specialist</a>
    </div>
    </div>
  )
}

export default Footer