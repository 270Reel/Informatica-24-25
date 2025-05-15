// Chiedi i due numeri all'utente
let num1 = prompt("Inserisci il primo numero:");
let num2 = prompt("Inserisci il secondo numero:");

// Convertili in numeri
let number1 = Number(num1);
let number2 = Number(num2);

// Chiedi l'operatore all'utente
let operatore = prompt("Inserisci l'operazione (+, -, *, /, **):");

// Verifica che i numeri siano validi
if (Number.isNaN(number1) || Number.isNaN(number2)) {
  alert("Errore: uno o entrambi i valori inseriti non sono numeri validi.");
} else {
  // Calcola il risultato in base all'operatore
  let risultato;

  switch (operatore) {
    case "+":
      risultato = number1 + number2;
      break;
    case "-":
      risultato = number1 - number2;
      break;
    case "*":
      risultato = number1 * number2;
      break;
    case "/":
      if (number2 === 0) {
        alert("Errore: divisione per zero.");
        break;
      }
      risultato = number1 / number2;
      break;
    case "**":
      risultato = number1 ** number2;
      break;
    default:
      alert("Errore: operatore non valido.");
      return;
  }

  // Mostra il risultato
  if (risultato !== undefined) {
    alert("Risultato: " + risultato);
  }
}
