#include <stdio.h>

int main()
{
    const float f = 123.45678;
    char format[7] = "%. f\n";
    int x;
    printf("%f\n", f);

    for(x = 4; x >= 0; x--)
    {
    format[2] = '0' + x;
    printf(format, f);
    }

    return(0);
}

//#include <stdio.h>
//
//int main()
//{
//    const float f = 123.45678;
//
//    printf("%f\n", f);
//    printf("%.4f\n", f);
//    printf("%.3f\n", f);
//    printf("%.2f\n", f);
//    printf("%.1f\n", f);
//    printf("%.wf\n", f);
//
//
//    return(0);
//}
