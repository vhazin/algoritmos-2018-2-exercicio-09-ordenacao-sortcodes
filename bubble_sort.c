
#include <stdio.h>

void bubbleSort(int *array  , int tamanhoArray)    // Array e o tamanho dele
{   
    int i;
    int continua;
    int aux;
    int fim = tamanhoArray;

    // Metodo carrega maior elemento que nao está ordenado ate a ultima posicao do array
    do
    {
        continua = 0;
        for(i = 0; i < fim-1; i++)  // Leitura da primeira ate a penultima posicao do array
        {
            if (array[i] > array[i+1])  // Comparando se a posicao lida eh maior que a proxima posicao
            {
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                continua = i; // Continua recebe o valor da ultima iteracao
            }
        }
        fim--;  // Decrementando a ultima posicao do array
    } while(continua != 0);
    
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

    bubbleSort(array, qtdValores);
    display(array, qtdValores);

    return 0;
}




