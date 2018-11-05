#include <stdio.h>

void display(int array[], int qtdValores) 
{
    printf("\nValores Ordenados:\n[ ");
    
    for(int i = 0; i < qtdValores; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("]");
    printf("\n");
} 

void merge(int array[], int start, int mid, int end)
{

    int res_array[end-start];

    int p1 = start;
    int p2 = mid + 1;
    int i = 0;
    
    
    while(p1 <= mid && p2 <= end)
    {
        if (array[p1] < array[p2]) 
        {
            res_array[i++] = array[p1++];   
        }
        else if (array[p1] >= array[p2])
        {
            res_array[i++] = array[p2++];          
        }
    }
    
    if (p1 <= mid) 
    {
        
        while(p1 <= mid)
        {
            res_array[i++] = array[p1++];
        }
                
    }
    else if(p2 <= end)
    {
        
        while(p2 <= end)
        {
            res_array[i++] = array[p2++];          
        }
        
    }

    for(int j = start; j <= end; j++)
    {
        array[j] = res_array[j-start];
    }
        
}

void mergeSort(int array[], int start, int end)
{
  
    if (start == end) return;
    
    int mid = (start+end)/2;
    mergeSort(array, start, mid);
    mergeSort(array, mid+1, end);

    merge(array, start, mid, end);

}

int main(int argc, char const *argv[])
{
    int qtdValores;
    printf("Quantidade de Valores: ");
    scanf("%d", &qtdValores);

    int array[qtdValores];

    printf("Digite os valores separados por espaço: ");
    for(int i=0;i<qtdValores;i++){
        scanf("%d", &array[i]);
    }

    mergeSort(array, 0, qtdValores-1);
    display(array, qtdValores);

    return 0;
}
