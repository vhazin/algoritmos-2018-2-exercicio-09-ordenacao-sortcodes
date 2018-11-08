#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int *array, int tamanhoArray) 
{
	int i, j, menor, troca;
	
	for(i = 0; i < tamanhoArray-1; i++)
	{
		menor = i;
		
		for(j = i+1; j < tamanhoArray; j++)
		{
			
			if (array[j] < array[menor]) 
			{
				menor = j;
			}

		}
		
		if (i != menor) 
		{
			troca = array[i];
			array[i] = array[menor];
			array[menor] = troca;
		}
		
		
	}
	
}

void display(int *array, int qtdValores) 
  {
      printf("\nValores Ordenados:\n[ ");
      
      for(int i = 0; i < qtdValores; i++) 
      {
          printf("%d ", array[i]);
      }
      printf("]");
      printf("\n");
  } 

  int main()
  {

    clock_t t0, tf;
   double tempo_gasto;
   t0 = clock();

      int qtdValores;
      printf("Quantidade de Valores: ");
      scanf("%d", &qtdValores);

      int array[qtdValores];

      for(int i=0;i<qtdValores;i++){
          array[i] = rand() % 1000000;
      }

      selectionSort(array, qtdValores);
      display(array, qtdValores);


      tf = clock();
   tempo_gasto = ( (double) (tf - t0) ) / CLOCKS_PER_SEC;
   printf("Tempo gasto: %lf s\n", tempo_gasto);

      return 0;
  }
