import {
  deleteLast,
  press,
  squareRoot,
  square,
  reciprocal,
  sin,
  cos,
  tan,
  log10,
  ln,
  calculate,
  clearAll,
  derivative,
  toggleMode
} from "./Functions";
import "./WebInterface.css";

export default function Calc_Buttons() {
  return (
    <>
      <div className="panel">
        <div id="display" className="display">
            0
          </div>
          <div className="mode">
            <button id="modeBtn" onClick={toggleMode}>
              DEG
            </button>
            <button onClick={derivative}>d/dx</button>
          </div>
        <div className="buttons">
          <button className="clear" onClick={clearAll}>
            C
          </button>
          <button onClick={deleteLast}>DEL</button>
          <button onClick={() => press("(")}>(</button>
          <button onClick={() => press(")")}>)</button>
          <button className="operator" onClick={() => press("/")}>
            ÷
          </button>

          <button onClick={() => press("7")}>7</button>
          <button onClick={() => press("8")}>8</button>
          <button onClick={() => press("9")}>9</button>
          <button className="operator" onClick={() => press("*")}>
            ×
          </button>
          <button onClick={squareRoot}>√</button>

          <button onClick={() => press("4")}>4</button>
          <button onClick={() => press("5")}>5</button>
          <button onClick={() => press("6")}>6</button>
          <button className="operator" onClick={() => press("-")}>
            −
          </button>
          <button onClick={square}>x²</button>

          <button onClick={() => press("1")}>1</button>
          <button onClick={() => press("2")}>2</button>
          <button onClick={() => press("3")}>3</button>
          <button className="operator" onClick={() => press("+")}>
            +
          </button>
          <button onClick={reciprocal}>1/x</button>

          <button onClick={() => press("0")}>0</button>
          <button onClick={() => press(".")}>.</button>
          <button onClick={sin}>sin</button>
          <button onClick={cos}>cos</button>
          <button onClick={tan}>tan</button>

          <button onClick={log10}>log</button>
          <button onClick={ln}>ln</button>
          <button className="equal" onClick={calculate}>
            =
          </button>

        </div>
        <div className="panel"> 
          <div className="display">
            <div id="history-list" className="history"></div>
          </div>
        </div>
      </div>
    </>
  );
}
