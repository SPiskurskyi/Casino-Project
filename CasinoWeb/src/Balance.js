import React from "react";
import { useNavigate } from 'react-router-dom';

function Balance(){
    const navigate = useNavigate();

    return(
        <div className="exchange__block">
            <button onClick={() => {navigate('/play')}} className='exchange__back_button'>Back</button>
            <div className="exchange">
                <h1 className="exchange__title">Exchange.</h1>
                <div className="exchange__item">
                    <div className="exchange__item__cash__tokens">
                        <h4 className="cash__tokens_title">Cash to tokens</h4>
                        <input placeholder="Enter" />
                    </div>
                    <div className="exchange__item__tokens__cash">
                        <h4 className="tokens__cash_title">Tokens to cash</h4>
                        <input placeholder="Enter" />
                    </div>
                </div>
                <div className="exchange__change">
                        <button>Change</button>
                </div>
            </div>
            <div className="cash">
                <h1 className="cash__number">90</h1>
                <p className="cash__text">Your cash</p>
            </div>
            <div className="tokens">
                <h1 className="tokens__text">Your tokens</h1>
                <span className="tokens__number">25</span>
            </div>
        </div>
    )
}

export default Balance;