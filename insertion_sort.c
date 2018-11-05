#include <stdio.h>

void insertionSort(int *array, int tamanhoArray)
{
  int i, j, aux;
  
  for(i = 1; i < tamanhoArray; i++)
  {

    aux = array[i];
    
    for(j = i; (j > 0)&&(aux < array[j-1]); j--)
    {

      array[j] = array[j-1];

    }
    array[j] = aux;

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

    insertionSort(array, qtdValores);
    display(array, qtdValores);

    return 0;
}
