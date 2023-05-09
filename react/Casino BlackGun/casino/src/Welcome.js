import React from 'react';
import { Link } from 'react-router-dom';

function Welcome(){
    return(
        <div className='welcome'>
            <h4 className='welcome__title'>Casino</h4>
            <h1 className='welcome__casino_name'>Black Gun</h1>

            <form className='welcome__registration_form'>
                <Link to='log-in' className='form__log_in form__input'>Log in</Link>
                <Link to='sign-in' className='form__sign_in form__input'>Sign in</Link>
            </form>
        </div>
    )
}

export default Welcome;