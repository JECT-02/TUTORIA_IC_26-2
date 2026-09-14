// 6. Dado un polinomio de segundo grado ax2 + bx + c, y muestre las raices de dicho polinomio, asuma que las raices son reales.
Algoritmo raices
  Definir a como Entero
  Definir b como Entero
  Definir c como Entero
  Definir x1 como Entero
  Definir x2 como Entero

  Escribir "Tu polinomio es: ax2 + bx + c, tendras que ingresar a, b y c"
  Leer a
  Leer b
  Leer c

  x1 = (-1*b + raiz(b*b - 4*a*c))/2*a
  x2 = (-1*b - raiz(b*b - 4*a*c))/2*a

  Escribir "La primera solucion es: ", x1
  Escribir "La segunda solucion es: ", x2
  
FinAlgoritmo