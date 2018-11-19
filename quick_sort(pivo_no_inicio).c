
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int particiona(int *V, int inicio, int final){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    while(esq < dir){
        while(V[esq] <= pivo)
            esq++;
        while(V[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}

void quickSort(int *V, int inicio, int fim) {
    int pivo;
    if(fim > inicio){
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo-1);
        quickSort(V, pivo+1, fim);
    }
}

void roda1Mil(int *array1Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    quickSort(array1Mil, 0, 999);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto (mil valores): %g ms.\n", Tempo);
}

void roda5Mil(int *array5Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    quickSort(array5Mil, 0, 4999);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto(5 mil valores): %g ms.\n", Tempo);

}

void roda10Mil(int *array10Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    quickSort(array10Mil, 0, 9999);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto(10 mil valores): %g ms.\n", Tempo);
}

void roda50Mil(int *array50Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    quickSort(array50Mil, 0, 49999);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto(50 mil valores): %g ms.\n", Tempo);
    printf("---------------------------------------------------------------------------");

}


int main()
{
    int array1Mil[1000];
    int array5Mil[5000];
    int array10Mil[10000];
    int array50Mil[50000];
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
 

    printf("\nQUICK (PIVÔ NO INÍCIO)\n");

    roda1Mil(array1Mil);
    roda5Mil(array5Mil);
    roda10Mil(array10Mil);
    roda50Mil(array50Mil);

    return 0;
}