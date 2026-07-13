import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import './index.css'
import App from './App.jsx'
import { BrowserRouter } from 'react-router'


/*
const router = createBrowserRouter([
  {
    path:'/',
    element:<Layout />,
    children=[
      {
        path:'home',
        element:<HomePage />
      },
      {
        path:'about',
        element:< About />
      },
      {path:'github',
        element: <Github />
      },
      {
        path:'contact',
        element: <Contact />
      }
    ]
  }
])
*/
createRoot(document.getElementById('root')).render(
  <StrictMode>
    <BrowserRouter>
      <App />
    </BrowserRouter>
  </StrictMode>,
)
