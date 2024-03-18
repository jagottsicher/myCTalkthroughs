#include <stdio.h>
#include <math.h>

#define square(a) a*a

int main()
{
    int alpha = 5;

    printf("Value = %d\n",alpha);
    printf("Value squared is %d\n",alpha*alpha);
    printf("Value squared is %.f\n",pow(alpha,2) );
    printf("Value squared is %.f\n",square(alpha) );

    return 0;
}
