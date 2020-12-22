//Programa que carga dos vectores, los suma y luego muestra el resultado por pantalla

#include <stdio.h>
#include <stdlib.h>  // para que no salte advertencia al usar system

#define m  10
int i, n;
char op;
int a[m], b[m], c[m];
void CARGAR ()         // Carga los valores ingresados en los vectores y los suma
{				
  for (i = 1; i <= n; i++)
    {
      printf ("Cargue el %dº numero para A y para B \n", i);
      scanf ("%d", &a[i]);
      scanf ("%d", &b[i]);
      c[i] = a[i] + b[i];
    }
  return;
}

void MOSTRAR ()			// Muestra los valores sumados por pantalla
{
  printf ("A continuación se mostraran los numeros del vector C \n");
  for (i = 1; i <= n; i++)
    {
      printf ("En la posicion %d, está el número %d \n", i, c[i]);
    }
  return;
}

int main ()
{
  printf ("Si desea cargar dos vectores y sumarlos presione Y \n");
  scanf ("%c", &op);
  while (op == 'y')
    {
      system ("clear");
      do                 // Evita que se ingrese una cantidad de numeros mayor al tamaño del arreglo
	{			
	  printf ("¿Cuántos numeros desea cargar? El maximo es %d \n",m);
	  scanf ("%d", &n);
	  system ("clear");
	}
      while (n > m);
      CARGAR ();
      MOSTRAR ();
      printf ("Si desea repetir el proceso presione Y \n");
      getc (stdin);		// Para que el programa espere a que se presione una tecla
      scanf ("%c", &op);
    }
  return 0;
}
