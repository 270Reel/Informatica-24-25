
let m = prompt("Inserisci il primo coefficente (m):   ");
let c = prompt("Inserisci il secondo coefficente (c): ");

let x1 = -1;
let x2 = 10;

let y1 = (m * x1) + c; // Calcola y per x = -1
let y2 = (m * x2) + c; // Calcola y per x = 10

// Mostra i risultati
console.log("Punto per x = " + x1 + ": (" + x1 + ", " + y1 + ")");
console.log("Punto per x = " + x2 + ": (" + x2 + ", " + y2 + ")");

let intersezioneX = -c / m; // Calcola x quando y = 0
console.log("Intersezione con asse x: (" + intersezioneX + ", 0)");

let intersezioneY = c; // y = c quando x = 0
console.log("Intersezione con asse y: (0, " + intersezioneY + ")");

//y = mx+c