let score = JSON.parse(localStorage.getItem("score")) || {
  wins: 0,
  losses: 0,
  ties: 0,
};
/*if (!score){
    score = {
      wins : 0,
      losses : 0,
      ties :0
    };
  } */

document.body.addEventListener("keydown", (event) => {
  if (event.key === "r") {
    playGame("rock");
  } else if (event.key === "s") {
    playGame("scissors");
  } else if (event.key === "p") {
    playGame("paper");
  }
});

let isAutoPlaying = false;
let intervalId;
export function autoPlay() {
  if (!isAutoPlaying) {
    intervalId = setInterval(() => {
      const playerMove = pickCompMove();
      playGame(playerMove);
    }, 1000);
    isAutoPlaying = true;
  } else {
    clearInterval(intervalId);
    isAutoPlaying = false;
  }
}

export function pickCompMove() {
  const rdmNum = Math.random();
  let cmpMove = "";
  console.log(rdmNum);
  if (rdmNum >= 0 && rdmNum < 0.33) {
    cmpMove = "rock";
  } else if (rdmNum >= 0.33 && rdmNum < 0.67) {
    cmpMove = "paper";
  } else if (rdmNum >= 0.67 && rdmNum < 1) {
    cmpMove = "scissors";
  }
  console.log(`computer move is : ${cmpMove}`);
  return cmpMove;
}
export function playGame(playerMove) {
  const cmpMove = pickCompMove();
  let result = "";
  if (playerMove === cmpMove) {
    result = "tie";
  } else if (
    (playerMove === "rock" && cmpMove === "scissors") ||
    (playerMove === "paper" && cmpMove === "rock") ||
    (playerMove === "scissors" && cmpMove === "paper")
  ) {
    result = "won";
  } else {
    result = "lost";
  }

  if (result === "won") {
    score.wins += 1;
  } else if (result === "lost") {
    score.losses += 1;
  } else if (result === "tie") {
    score.ties += 1;
  }
  localStorage.setItem("score", JSON.stringify(score));

  updateScore();

  document.querySelector(".js-result").innerHTML = `you ${result}`;

  document.querySelector(".js-moves").innerHTML =
    `your move:<img src="/language/HTML&CSS and JS/images/${playerMove}-emoji.png" class = 'move-icon'> <img src="/language/HTML&CSS and JS/images/${cmpMove}-emoji.png" class = 'move-icon' >  : computer moves `;

  //alert(`You picked ${playerMove}. computer Moves ${cmpMove}. result is ${result}.
  //Wins: ${score.wins}, Losses: ${score.losses}, Ties: ${score.ties}`)
}

export function updateScore() {
  document.querySelector(".js-score").innerHTML = `You pla`.innerHTML = `
            Wins: ${score.wins} ,
            losses: ${score.losses}
            ties : ${score.ties}`;
}
