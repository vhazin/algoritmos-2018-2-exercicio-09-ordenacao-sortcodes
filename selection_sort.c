#include <stdio.h>
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

void roda1Mil(long *array1Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    selectionSort(array1Mil, 1000);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto (1000 valores): %g ms.\n", Tempo);
}

void roda5Mil(long *array5Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    selectionSort(array5Mil, 5000);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto(5000 valores): %g ms.\n", Tempo);

}

void roda10Mil(long *array10Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    selectionSort(array10Mil, 10000);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto(10000 valores): %g ms.\n", Tempo);
}

void roda50Mil(long *array50Mil) 
{
    clock_t Ticks[2];
    Ticks[0] = clock();

    selectionSort(array50Mil, 50000);

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto (50000 valores): %g ms\n.", Tempo);
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
