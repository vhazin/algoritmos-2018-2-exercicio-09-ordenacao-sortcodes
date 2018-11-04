#include <stdio.h>

int main(void) {

  int qntValores;
  printf("Quantidade de Valores: ");
  scanf("%d", &qntValores);

  int valores[qntValores];
 

  for(int i=0;i<qntValores;i++){
    scanf("%d", &valores[i]);
  }

  insertionSort(qntValores, valores);

  printf("\n[ ");
  
  for(int i=0; i<qntValores; i++) 
  {
    printf("%d ", valores[i]);
  }
  printf("]");
  printf("\n");

  
}

void insertionSort(int tamanhoVetor, int vetorDesordenado[])
{
   int i, j, valorAtual;
 
   for( j=1; j < tamanhoVetor; j++ ) 
   {
      valorAtual = vetorDesordenado[j];
      i = j-1;
      
      while(i >= 0 && vetorDesordenado[i] > valorAtual)
      {
        vetorDesordenado[i+1] = vetorDesordenado[i];
        i--;
      } 
              
      vetorDesordenado[i+1] = valorAtual;
   }

  
}