import React from 'react';
import { Link } from 'react-router-dom'; 

function Play(){

    function GetBlack(){
        console.log('Black');
    }
    function GetRed(){
        console.log('Red');
    }
    function GetGreen(){
        console.log('Green');
    }
    return(
        <div className='play'>
            <Link to='balance' className='play__balance'>My balance</Link>
            <h1 className='play__title'>Play.</h1>
            <form className='play__bets'>
                <h2 className='play__bets_title'>Choose the color you want to bet on:</h2>
                <div className='play__bets__items'>
                    <label onClick={GetBlack} className='bets__items__black'>
                        <input className='bets__items_checkbox' type='checkbox'/>Black<br/>(2x)
                    </label>
                    <label onClick={GetRed} className='bets__items__red'>
                        <input className='bets__items_checkbox' type='checkbox'/>Red<br/>(2x)
                    </label>
                    <label onClick={GetGreen} className='bets__items__green'>
                        <input className='bets__items_checkbox' type='checkbox'/>Green<br/>(32x)
                    </label>
                </div>
            </form>
            <form className='play__enter__bid'>
                <h2 className='play__enter__bid_title'>Enter your bid:</h2>
                <input className='play__enter__bid_input' placeholder='Enter' />
            </form>
            <div className='play__bet'>
                <button>Bet</button>
            </div>
        </div>
    )
}

export default Play;