#include <stdio.h>

#define SIZ_OF(x) (sizeof(x) / sizeof(*x))

int main()
{

	int number[10] = {1,2,3,4,5,6};
	char *teststr[20] = {"A","B","B","D","E","F","G","H","I"};

	printf("Defined size of array \"number[10]\" is %d\n", SIZ_OF(number));
	printf("Defined size of array \"teststr[20]\" is %d\n", SIZ_OF(teststr));


	return(0);
}
