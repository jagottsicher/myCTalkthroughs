#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ptr = malloc(sizeof(int)); // allocate memory for a new integer
    if (ptr == NULL) { // check if the allocation was successful
        printf("Error: failed to allocate memory\n");
        return 1; // exit with an error code
    }
    *ptr = 5; // store the value 5 in the allocated memory
    printf("The value of ptr is: %d\n", *ptr); // print the value of ptr
    free(ptr); // free the allocated memory
    return 0;
}

//#include <stdlib.h>
//#include <stdio.h>
//
//int main() {
//	int *ptr;
//	*ptr = 5; // error: ptr is uninitialized
//	free(ptr);
//	*ptr = 6; // error: accessing freed memory
//	return 0;
//}
