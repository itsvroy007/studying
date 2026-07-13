import {determinant ,inverseMatrix,multiplyMatrix } from './Functions'
import './WebInterface.css'

export default function Matrix_Solver() {
  return (
    <>
      <div className="panel">
        <h3>Matrix Solver</h3>

        <textarea
          id="matrixA"
          placeholder="Matrix A:
1 2
3 4"
        ></textarea>

        <textarea
          id="matrixB"
          placeholder="Matrix B:
5 6
7 8"
        ></textarea>

        <button onClick={determinant}>Determinant</button>
        <button onClick={inverseMatrix}>Inverse</button>
        <button onClick={multiplyMatrix}>Multiply A x B</button>
      </div>
    </>
  );
}
