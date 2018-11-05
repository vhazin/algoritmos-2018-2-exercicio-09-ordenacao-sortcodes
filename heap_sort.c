#include <stdio.h>


void criaHeap(int *array, int inicio, int fim){
    int aux = array[inicio];
    int j = inicio * 2 + 1;
    while (j <= fim){
        if(j < fim){
            if(array[j] < array[j + 1]){
                j = j + 1;
            }
        }
        if(aux < array[j]){
            array[inicio] = array[j];
            inicio = j;
            j = 2 * inicio + 1;
        }else{
            j = fim + 1;
        }
    }
    array[inicio] = aux;
}

void heapSort(int *array, int tamanhoArray){
    int i, aux;
    for(i=(tamanhoArray - 1)/2; i >= 0; i--){
        criaHeap(array, i, tamanhoArray-1);
    }
    for (i = tamanhoArray-1; i >= 1; i--){
        aux = array[0];
        array [0] = array [i];
        array [i] = aux;
        criaHeap(array, 0, i - 1);
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

    heapSort(array, qtdValores);
    display(array, qtdValores);

    return 0;
}
