import React from 'react';
import { useNavigate } from 'react-router-dom';
 
function SignIn(){
    const navigate = useNavigate();
    return(
        <div className='sign__in'>
            <h1 className='sign__in__title'>Create a new account.</h1>
            <form className='sign__in__form'>
                <div className='sign__in__form_bio'>
                    <input className='sign__in__form_bio_firstname' placeholder='First name' />
                    <input className='sign__in__form_bio_lastname' placeholder='Last name' />
                </div>
                <div className='sign__in__form_userData'>
                    <input className='sign__in__form_userData_username' placeholder='Username' />
                    <input type='password' className='sign__in__form_userData_password' placeholder='Password' />
                </div>
                <button onClick={() => {navigate('/play')}} className='sign__in__form_button'>Sign in</button>
            </form>
        </div>
    )
}

export default SignIn;