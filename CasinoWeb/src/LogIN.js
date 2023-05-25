import React from 'react';
import { useNavigate } from 'react-router-dom';

function LogIn(){ 
    const navigate = useNavigate();
    return(
        <div className='log__in'>
            <h1 className='log__in__title'>Welcome Back.</h1>

            <form className='log__in__form'>
                <input className='log__in__form_email' placeholder='Email' />
                <input type='password' className='log__in__form_password' placeholder='Password' />
                <button onClick={() => {navigate('/play')}} className='log__in__form_button'>Log in</button>
            </form>
        </div>
    )
}

export default LogIn;