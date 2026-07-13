let userScore = 0;
let computerScore = 0;
let isUserBatting = true;
let firstInnings = true;
let targetScore = 0;
let gameOver = false;

// Toss
function doToss(userChoice) {
    const userNum = Math.floor(Math.random() * 10) + 1;
    const compNum = Math.floor(Math.random() * 10) + 1;

    const result = (userNum + compNum) % 2 === 0 ? "even" : "odd";

    document.getElementById("result").innerText =
    `You: ${userNum}, Computer: ${compNum}`;

    if (result === userChoice) {
        document.getElementById("choice").classList.remove("hidden");
        document.getElementById("status").innerText = "You won the toss!";
    }
    else {
        isUserBatting = Math.random() < 0.5;
        startGame();
    }

    document.getElementById("toss").classList.add("hidden");
}

// Choose Bat or Bowl
function chooseRole(role) {
    isUserBatting = role === "bat";
    document.getElementById("choice").classList.add("hidden");
    startGame();
}

// Start Game
function startGame() {
    document.getElementById("buttons").classList.remove("hidden");
    document.getElementById("status").innerText =
    isUserBatting ? "You are Batting" : "Computer is Batting";
}

// Computer choice
function getComputerChoice() {
    return Math.floor(Math.random() * 10) + 1;
}

// Play
function play(userChoice) {
    if (gameOver) return;

    const computerChoice = getComputerChoice();

    if (isUserBatting) {
        if (userChoice === computerChoice) {
            endInnings();
        }
        else {
        userScore += userChoice;
        }
    }
    else {
        if (userChoice === computerChoice) {
            endInnings();
        }
        else {
            computerScore += computerChoice;
        }
    }

    document.getElementById("result").innerText =
    `You: ${userChoice}, Computer: ${computerChoice}`;

    document.getElementById("score").innerText =
    `Your Score: ${userScore} | Computer Score: ${computerScore}`;

    checkTarget();
}

// End Innings
function endInnings() {
    if (firstInnings) {
    targetScore = isUserBatting ? userScore + 1 : computerScore + 1;
    document.getElementById("target").innerText = `Target: ${targetScore}`;
    firstInnings = false;
    isUserBatting = !isUserBatting;
    document.getElementById("status").innerText =
        isUserBatting ? "You are Batting" : "Computer is Batting";
    }
    else {
        gameOver = true;
        declareWinner();
    }
}

// Check target
function checkTarget() {
    if (!firstInnings) {
        if (userScore >= targetScore || computerScore >= targetScore) {
            gameOver = true;
            declareWinner();
        }
    }
}

// Declare winner
function declareWinner() {
    document.getElementById("restart").classList.remove("hidden");

    if (userScore > computerScore) {
        document.getElementById("status").innerText = "🎉 You Win!";
    }
    else {
    document.getElementById("status").innerText = "💻 Computer Wins!";
    }
}

// Restart
function restartGame() {
    location.reload();
}
