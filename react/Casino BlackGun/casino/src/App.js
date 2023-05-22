import React from 'react';
import Welcome from './Welcome';
import { Route, Routes } from 'react-router-dom';
import SignIn from './SignIN';
import LogIn from './LogIN';
import Play from './Play'
import Balance from './Balance'
 
function App() {
    return(
      <Routes>
        <Route path='/' element={<Welcome />}/>
        <Route path='/sign-in' element={<SignIn />}/>
        <Route path='/log-in' element={<LogIn />}/>
        <Route path='/play' element={<Play />}/>
        <Route path='/play/balance' element={<Balance />}/>
      </Routes>
    )
}

export default App;