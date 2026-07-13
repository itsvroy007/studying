let board = Array(9).fill("");
let currentPlayer = "X";
let history = [];
let timer = 5;
let interval;
let gameActive = true;

let scores = JSON.parse(localStorage.getItem("scores")) || { X: 0, O: 0 };

const boardEl = document.getElementById("board");
const statusEl = document.getElementById("status");
statusEl.innerText = `Turn: ${currentPlayer}`;

updateScore();
createBoard();
startTimer();


function createBoard() {
  boardEl.innerHTML = "";
  board.forEach((val, i) => {
    let cell = document.createElement("div");
    cell.className = "cell";
    cell.innerText = val;
    cell.onclick = () => makeMove(i);
    boardEl.appendChild(cell);
  });
}

function makeMove(i) {
  if (board[i] || !gameActive) return;
  
  history.push([...board]);
  board[i] = currentPlayer;
  
  if (checkWinner()) return;
  
  currentPlayer = currentPlayer === "X" ? "O" : "X";
  createBoard();
  resetTimer();

  if (getMode() === "cpu" && currentPlayer === "O") {
    setTimeout(cpuMove, 400);
  }
}

function cpuMove() {
  let diff = document.getElementById("difficulty").value;

  if (diff === "easy") return randomMove();
  if (diff === "medium") {
    return Math.random() < 0.5 ? randomMove() : bestMove();
  }
  if (diff === "hard") return bestMove();
}

function randomMove() {
  let empty = board.map((v,i)=>v===""?i:null).filter(v=>v!==null);
  makeMove(empty[Math.floor(Math.random()*empty.length)]);
}

function bestMove() {
  let bestScore = -Infinity;
  let move;

  for (let i=0;i<9;i++) {
    if (board[i] === "") {
      board[i] = "O";
      let score = minimax(board, 0, false);
      board[i] = "";
      if (score > bestScore) {
        bestScore = score;
        move = i;
      }
    }
  }
  makeMove(move);
}

function minimax(b, depth, isMax) {
  let winner = evaluateWinner();
  if (winner !== null) return winner;

  if (isMax) {
    let best = -Infinity;
    for (let i=0;i<9;i++) {
      if (b[i] === "") {
        b[i] = "O";
        best = Math.max(best, minimax(b, depth+1, false));
        b[i] = "";
      }
    }
    return best;
  } else {
    let best = Infinity;
    for (let i=0;i<9;i++) {
      if (b[i] === "") {
        b[i] = "X";
        best = Math.min(best, minimax(b, depth+1, true));
        b[i] = "";
      }
    }
    return best;
  }
}

function evaluateWinner() {
  const win = [
    [0,1,2],[3,4,5],[6,7,8],
    [0,3,6],[1,4,7],[2,5,8],
    [0,4,8],[2,4,6]
  ];

  for (let [a,b,c] of win) {
    if (board[a] && board[a]===board[b] && board[a]===board[c]) {
      return board[a] === "O" ? 1 : -1;
    }
  }

  if (!board.includes("")) return 0;
  return null;
}

function checkWinner() {
  const win = [
    [0,1,2],[3,4,5],[6,7,8],
    [0,3,6],[1,4,7],[2,5,8],
    [0,4,8],[2,4,6]
  ];

  for (let combo of win) {
    let [a,b,c] = combo;
    if (board[a] && board[a]===board[b] && board[a]===board[c]) {
      highlight(combo);
      statusEl.innerText = `${currentPlayer} Wins 🎉`;
      scores[currentPlayer]++;
      localStorage.setItem("scores", JSON.stringify(scores));
      updateScore();
      gameActive = false;
      clearInterval(interval);
      return true;
    }
  }

  if (!board.includes("")) {
    statusEl.innerText = "Draw!";
    gameActive = false;
    return true;
  }
  document.body.style.background = "linear-gradient(135deg, #f7971e, #ffd200)";
  return false;
}

function highlight(combo) {
  let cells = document.querySelectorAll(".cell");
  combo.forEach(i => cells[i].classList.add("win"));
}

function startTimer() {
  interval = setInterval(() => {
    timer--;
    document.getElementById("timer").innerText = "Time: " + timer;

    if (timer === 0) {
      currentPlayer = currentPlayer === "X" ? "O" : "X";
      resetTimer();
    }
  }, 1000);
}

function resetTimer() {
  timer = 5;
}

function resetScore() {
  if (confirm("Reset all scores?")) {
    scores = { X: 0, O: 0 };
    localStorage.setItem("scores", JSON.stringify(scores));
    updateScore();
  }
}

function undoMove() {
  if (history.length === 0) return;
  board = history.pop();
  createBoard();
}

function resetGame() {
  board = Array(9).fill("");
  history = [];
  currentPlayer = "X";
  gameActive = true;
  statusEl.innerText = "";
  createBoard();
  resetTimer();
}

function toggleDark() {
  document.body.classList.toggle("dark");
}

function updateScore() {
  document.getElementById("scoreX").innerText = scores.X;
  document.getElementById("scoreO").innerText = scores.O;
}

function getMode() {
  return document.getElementById("mode").value;
}

