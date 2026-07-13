import "./App.css";
import Calc_Buttons from "./components/Calc_Buttons";
import Equ_Solving from "./components/Equ_Solving";
import Matrix_Solver from "./components/Matrix_Solver";
import './components/WebInterface.css'
function App() {
  return (
    <>
      <div className="container">
      <Calc_Buttons />
      <Equ_Solving />
      <Matrix_Solver />
      </div>
    </>
  );
}

export default App;
