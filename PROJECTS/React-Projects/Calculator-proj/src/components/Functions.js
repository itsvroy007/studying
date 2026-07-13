let expression = "";
let angleMode = "DEG";

export function press(v) {
  expression += v;
  updateDisplay(expression);
}

export function updateDisplay(v) {
  document.getElementById("display").innerText = v;
}

export function calculate() {
  try {
    let r = eval(expression);
    addHistory(expression + " = " + r);
    expression = r.toString();
    updateDisplay(expression);
  } catch {
    updateDisplay("Error");
  }
}

export function clearAll() {
  expression = "";
  updateDisplay("0");
}

export function deleteLast() {
  expression = expression.slice(0, -1);
  updateDisplay(expression || "0");
}

export function addHistory(text) {
  let div = document.createElement("div");
  div.className = "history-item";
  div.innerText = text;
  document.getElementById("history-list").prepend(div);
}

export function toggleMode() {
  angleMode = angleMode === "DEG" ? "RAD" : "DEG";
  document.getElementById("modeBtn").innerText = angleMode;
}

export function toRad(v) {
  return angleMode === "DEG" ? (v * Math.PI) / 180 : v;
}

export function sci(result, label) {
  addHistory(label + "(" + expression + ") = " + result);
  expression = result.toString();
  updateDisplay(expression);
}

export function sin() {
  sci(Math.sin(toRad(eval(expression))), "sin");
}
export function cos() {
  sci(Math.cos(toRad(eval(expression))), "cos");
}
export function tan() {
  sci(Math.tan(toRad(eval(expression))), "tan");
}
export function log10() {
  sci(Math.log10(eval(expression)), "log");
}
export function ln() {
  sci(Math.log(eval(expression)), "ln");
}
export function squareRoot() {
  sci(Math.sqrt(eval(expression)), "√");
}
export function square() {
  sci(Math.pow(eval(expression), 2), "x²");
}
export function reciprocal() {
  sci(1 / eval(expression), "1/x");
}

export function derivative() {
  let f = prompt("Enter function in x:");
  if (!f) return;

  let df = f
    .replace(/x\^(\d+)/g, (m, p) => `${p}*x^${p - 1}`)
    .replace(/\bx\b/g, "1");

  alert("Derivative: " + df);
  addHistory("d/dx(" + f + ") = " + df);
}

export function parseEq(eq) {
  eq = eq.replace(/\s+/g, "");
  let [L, R] = eq.split("=");

  let a = 0,
    b = 0,
    c = 0;

  L.replace(/([+-]?\d*)x/g, (_, n) => (a += +(n || 1)));
  L.replace(/([+-]?\d*)y/g, (_, n) => (b += +(n || 1)));
  L.replace(/([+-]?\d*)z/g, (_, n) => (c += +(n || 1)));

  return [a, b, c, parseFloat(R)];
}

export function solveSystem() {
  let A = parseEq(e1.value);
  let B = parseEq(e2.value);
  let C = e3.value ? parseEq(e3.value) : null;

  if (!C) {
    let det = A[0] * B[1] - A[1] * B[0];
    let x = (A[3] * B[1] - A[1] * B[3]) / det;
    let y = (A[0] * B[3] - A[3] * B[0]) / det;
    alert(`x = ${x}, y = ${y}`);
    addHistory(`x=${x}, y=${y}`);
  } else {
    let [a, b, c, d] = A,
      [e, f, g, h] = B,
      [i, j, k, l] = C;
    let D = a * (f * k - g * j) - b * (e * k - g * i) + c * (e * j - f * i);
    let Dx = d * (f * k - g * j) - b * (h * k - g * l) + c * (h * j - f * l);
    let Dy = a * (h * k - g * l) - d * (e * k - g * i) + c * (e * l - h * i);
    let Dz = a * (f * l - h * j) - b * (e * l - h * i) + d * (e * j - f * i);

    alert(`x=${Dx / D}, y=${Dy / D}, z=${Dz / D}`);
    addHistory(`x=${Dx / D}, y=${Dy / D}, z=${Dz / D}`);
  }
}

export function parseMatrix(id) {
  return document
    .getElementById(id)
    .value.trim()
    .split("\n")
    .map((r) => r.trim().split(/\s+/).map(Number));
}

export function determinant() {
  let m = parseMatrix("matrixA");

  let det =
    m.length === 2
      ? m[0][0] * m[1][1] - m[0][1] * m[1][0]
      : m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) -
        m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
        m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);

  alert("Determinant = " + det);
  addHistory("det = " + det);
}

export function inverseMatrix() {
  let m = parseMatrix("matrixA");
  let d = m[0][0] * m[1][1] - m[0][1] * m[1][0];

  let inv = [
    [m[1][1] / d, -m[0][1] / d],
    [-m[1][0] / d, m[0][0] / d],
  ];

  alert(JSON.stringify(inv));
  addHistory("Inverse = " + JSON.stringify(inv));
}

export function multiplyMatrix() {
  let A = parseMatrix("matrixA");
  let B = parseMatrix("matrixB");

  let R = A.map((r, i) =>
    B[0].map((_, j) => r.reduce((s, _, k) => s + A[i][k] * B[k][j], 0)),
  );

  alert(JSON.stringify(R));
  addHistory("A×B = " + JSON.stringify(R));
}

document.addEventListener("keydown", function (e) {
  const k = e.key;
  if ("0123456789+-*/().".includes(k)) press(k);
  else if (k === "Enter") calculate();
  else if (k === "Backspace") deleteLast();
  else if (k === "Escape") clearAll();
});
