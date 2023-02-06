// data qualifiers in C:
// const
// restrict
// volatile
// _Atomic


// don't mistake for storage class qualifiers:
// auto, register, static, extern, and typedef


// const example:
// const int full = 100;


// restrict examples:
// int printf(const char * restrict format, ...)
// char *fgets(char * restrict str, int size, FILE * restrict stream);
// FILE *fopen(const char * restrict path, const char * restrict mode);


// _Atomic example:
// no example




#include <stdio.h>

void memzero(void *b, int len)
{
    volatile int x;
    char *a;

    a = (char *)b;
    for( x=0; x<len; x++)
        *(a+x) = 0;
}

int main()
{
    struct human {
        char name[32];
        int age;
        float weight;
    } my;

    memzero(&my,sizeof(struct human));

    return(0);
}
