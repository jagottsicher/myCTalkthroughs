#include <stdio.h>

int function(void)
{
    return(23);
}

int main()
{
    printf("The value of function() is %d\n",
            function());
    printf("The address of function() is %p\n",
            function);

    return(0);
}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SIZE 100000
//
//int compare(const void *a, const void *b);
//
//int main()
//{
//    int qarray[SIZE];
//    int x;
//
////		init the randomizer
//    srand((unsigned)time(NULL));
//
////		fill array with random numbers
//    for(x=0;x<SIZE;x++)
//    {
//        qarray[x] = (rand() % 1000000)+1;
//    }
//    printf("Array with %d elements created.\n",SIZE);
//
////    quicksort
//    printf("Sorting ... ");
//    qsort(qarray,SIZE,sizeof(int),compare);
//    puts("Done!");
//
////    If you don't believe me the array is sorted output it!
////    for(x = 0; x < SIZE; x++)
////    {
////        printf("Sorted #%d\n", qarray[x]);
////    }
//
//    return(0);
//}
//
//int compare(const void *a, const void *b)
//{
//    return( *(int *)a - *(int *)b);
//}
