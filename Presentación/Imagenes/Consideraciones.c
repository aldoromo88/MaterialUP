#include <stdio.h>

void DoSomething(int array[])
{
  array[0] = 10;
  return;
}

int main()
{
  int Entero = 5;

  int ArrayEnteros[] = {3,7,5};

  int PrimerElemento = ArrayEnteros[0];
  int SegundoElemento = ArrayEnteros[1];

  printf("Primer Elemento : %d\n", PrimerElemento);
  printf("Segundo Elemento : %d\n", SegundoElemento);


  int ElementoFueraDeRango = ArrayEnteros[32];
  printf("Elemento Fuera de Rango : %d\n", ElementoFueraDeRango);


  DoSomething(ArrayEnteros);

  PrimerElemento = ArrayEnteros[0];
  printf("Primer Elemento nuevo valor : %d\n", PrimerElemento);
}
