import { solveSystem } from "./Functions"; 
import './WebInterface.css'

export default function Equ_Solving() {
  return (
    <>
      <div className="panel">
        <h3>System of Equations Solver</h3>

        <input id="e1" placeholder="2x + 3y + z = 1" />
        <input id="e2" placeholder="4x - y + 2z = 5" />
        <input id="e3" placeholder="x + 2y + 3z = 6 (optional)" />

        <button onClick={solveSystem}>Solve</button>
      </div>
    </>
  );
}


