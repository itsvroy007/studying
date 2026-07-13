import { playGame,updateScore,autoPlay } from "./GameFunctions.js"

// import {Rock} from "../src/assets/rock.png"

export default function Game() {
  return (
    <>
      <h1>Rock Paper Scissors</h1>
    <button onClick={() => playGame('rock')}>
      <img
        className="rock-img"
        //src="./assets/rock.png"
        src="../src/assets/rock.png"
        />
    </button>
    <button onClick={() => playGame('paper')}>
      <img
        className="paper-img"
        src="../src/assets/paper.png"/>
    </button>
    <button onClick={() => playGame('scissors')}>
      <img
        className="scissors-img"
        src="../src/assets/scissors.png"/>
    </button>
    <p className="js-result"></p>
    <p className="js-moves"></p>
    <p className="js-score"></p>
    <button
      className="reset-button"
      onClick={ () => {
        score.wins = 0,
        score.losses = 0,
        score.ties = 0,
        localStorage.removeItem('score'),
        updateScore()
        }
      }
    >
      Reset Score
    </button>
    <button className="auto-play" onClick={autoPlay}>Auto Play</button>
    </>
  )
}
