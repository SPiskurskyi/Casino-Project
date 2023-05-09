import React from 'react';
import Welcome from './Welcome';
import { Route, Routes } from 'react-router-dom';
import SignIn from './SignIN';
import LogIn from './LogIN';

function App() {
    return(
      <Routes>
        <Route path='/' element={<Welcome />}/>
        <Route path='/sign-in' element={<SignIn />}/>
        <Route path='/log-in' element={<LogIn />}/>

      </Routes>
    )
}

export default App;