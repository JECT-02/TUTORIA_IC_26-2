// 6.1. Dado un polinomio de segundo grado ax2 + bx + c, y muestre las raices de dicho polinomio en caso existan, e indique si tiene 1, 2 o no tiene raices
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

  Si (b*b - 4*a*c) < 0 Entonces
    Escribir "Tu polinomio no tiene solucion en los reales"
  FinSi

  Si (b*b - 4*a*c) = 0 Entonces
    Escribir "Tu polinomio tiene una unica solucion"
    x1 = (-b + raiz(b*b - 4*a*c))/2*a
    Escribir "solucion: ", x1
  FinSi

  Si (b*b - 4*a*c)>0 Entonces
    x1 = (-b + raiz(b*b - 4*a*c))/2*a
    x2 = (-b - raiz(b*b - 4*a*c))/2*a
    Escribir "Tu primera solucion es: ", x1
    Escribir "Tu segunda solucion es: ", x2
  FinSi
  
FinAlgoritmo


