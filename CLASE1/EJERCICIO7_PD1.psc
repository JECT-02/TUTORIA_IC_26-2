// 7. Pida ingresar un número de tres cifras. Luego, muestre dicho número con sus cifras en orden inverso. p ej si se ingresa 135 se muestra 531
Algoritmo invertir
  Definir objetivo como Entero
  Definir invertido como Entero
  Definir resto como Entero

  invertido = 0

  Escribir "Ingresa el numero que quieres invertir: "
  Leer objetivo


  Mientras objetivo != 0 Hacer
    resto = objetivo % 10
    invertido = invertido*10 + resto
    objetivo = (objetivo - resto) / 10
  FinMientras

  Escribir "El numero invertido es: ", invertido
  
FinAlgoritmo

