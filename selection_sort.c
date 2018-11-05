
#include <stdio.h>

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
      int qtdValores;
      printf("Quantidade de Valores: ");
      scanf("%d", &qtdValores);

      int array[qtdValores];

      printf("Digite os valores separados por espaço: ");
      for(int i=0;i<qtdValores;i++){
          scanf("%d", &array[i]);
      }

      selectionSort(array, qtdValores);
      display(array, qtdValores);

      return 0;
  }
