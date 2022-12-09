#include <stdio.h>

int main()
{
    // const signed week = 7; // works fine in a c++ compiler
    enum { week = 7 };
    const char *weekday[week] = {
        "Mon", "Tue", "Wed", "Thu",
        "Fri", "Sat", "Sun"
    };
    int x;

    for ( x=0; x<week; x++ )
        printf("%4s",weekday[x]);
    putchar('\n');

    return(0);
}

//#include <stdio.h>
//
//#define LENGTH 10
//
//int main()
//{
//    char a = 'A';
//    int x;
//
//    for ( x = 0; x < LENGTH; x++ )
//        putchar(a++);
//        putchar('\n');
//
//    return(0);
//}

//for ( x = 0; x < w; x++ )
