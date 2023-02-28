// Swapping pointers to pointers
#include <stdio.h>

void swap(int **x, int **y) {
    int *temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5;
    int b = 10;
    int *ptr_a = &a;
    int *ptr_b = &b;

    printf("Before: *ptr_a = %d, *ptr_b = %d\n", *ptr_a, *ptr_b);

    swap(&ptr_a, &ptr_b);

    printf("After: *ptr_a = %d, *ptr_b = %d\n", *ptr_a, *ptr_b);

    return 0;
}

// Swapping values by de-referencing the values
//#include <stdio.h>
//
//void swap(int *x, int *y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//int main() {
//    int a = 5;
//    int b = 10;
//
//    printf("Before: a = %d, b = %d\n", a, b);
//
//    swap(&a, &b);
//
//    printf("After: a = %d, b = %d\n", a, b);
//
//    return 0;
//}

// Swapping nothing at all because x and y have limited scope
//#include <stdio.h>
//
//void swap(int x, int y) {
//    int temp = x;
//    x = y;
//    y= temp;
//}
//
//int main() {
//    int a = 5;
//    int b = 10;
//
//    printf("Before: a = %d, b = %d\n", a, b);
//
//    swap(a,b);
//
//    printf("After: a = %d, b = %d\n", a, b);
//
//    return 0;
//}

// Swapping values by storing one value in a buffer
//#include <stdio.h>
//
//int main() {
//    int a = 5;
//    int b = 10;
//    int temp = 0;
//
//    printf("Before: a = %d, b = %d\n", a, b);
//
//    temp = a;
//    a = b;
//    b = temp;
//
//    printf("After: a = %d, b = %d\n", a, b);
//
//    return 0;
//}
