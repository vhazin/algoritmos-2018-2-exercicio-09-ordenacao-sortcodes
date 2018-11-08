#include <stdio.h>
#include <time.h>


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

void roda1Mil(long *array1Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    mergeSort(array1Mil, 0, 999);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto(1000 valores): %g ms.\n", Tempo);
}

void roda5Mil(long *array5Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    mergeSort(array5Mil, 0, 4999);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto(5000 valores): %g ms.\n", Tempo);

}

void roda10Mil(long *array10Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    mergeSort(array10Mil, 0, 9999);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto(10000 valores): %g ms.\n", Tempo);
}

void roda50Mil(long *array50Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    mergeSort(array50Mil, 0, 49999);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto(50000 valores): %g ms\n.", Tempo);
}

int main()
{
    long array1Mil[1000];
    long array5Mil[5000];
    long array10Mil[10000];
    long array50Mil[50000];
   /////////////////////////////////////////////////////////////////    
    for (int i = 0; i < 1000; i++)
    {
      /* gerando valores aleatórios entre zero e 1000 */

      array1Mil[i] = rand()%1000;
    }
   /////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////    
    for (int i = 0; i < 5000; i++)
    {
      /* gerando valores aleatórios entre zero e 5000 */

      array5Mil[i] = rand()%5000;
    }
//    /////////////////////////////////////////////////////////////////
//    /////////////////////////////////////////////////////////////////    
    for (int i = 0; i < 10000; i++)
    {
      /* gerando valores aleatórios entre zero e 10000 */
      array10Mil[i] = rand()%10000;
    }
//    /////////////////////////////////////////////////////////////////
//    /////////////////////////////////////////////////////////////////    
    for (int i = 0; i < 50000; i++)
    {
      /* gerando valores aleatórios entre zero e 10000 */
      array50Mil[i] = rand()%50000;
    }
   /////////////////////////////////////////////////////////////////

    roda1Mil(array1Mil);
    roda5Mil(array5Mil);
    roda10Mil(array10Mil);
    roda50Mil(array50Mil);

    return 0;
}
