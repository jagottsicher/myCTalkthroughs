#include <stdio.h>

int main()
{
// simple notation of array, no initialization
	int numbers[6];

// basic notation of array, initialization with values
	int numbers[] = { 10, 20, 30, 40, 50, 60 };

	// basic notation of array separated initialization with values in a for-loop
	int numbers[6];

	for (int i=0; i<6; i++)
	numbers[i] = (i *10) + 10;

	// basic notation of array separated initialization with specific values
	// leaves the remaining elements uninitialized
	int numbers[6];

	numbers[3] = 40;
	numbers[4] = 50;

	// similiar notation of array combined initialization with specific values
	// leaves the remaining elements uninitialized
	int numbers[6] = {
		[3] = 40,
		[4] = 50
	};

// basic notation of array, initialization with values
	int numbers[6] = { 1, 2, 3, 4, 5, 6 };

// basic notation of array, initialization with values
// leaves the remaining elements uninitialized
	int numbers[6] = { 1, 2, 3 };

// basic notation of array, initialization of all elements with zero
// works only with zero as value
	int numbers[6] = { 0 };

// for outputting the values only
	for( int x=0; x<6; x++ )
		printf("%d\n",numbers[x]);

// multi-dimensional notation of an array, initialization with values in a row-like manner
	int numbers[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

// for outputting the values only
	for (int x=0; x<3; x++)
		for (int y=0; y<3; y++)
			printf("%d\n", numbers[x][y]);

// multi-dimensional notation of an array, combined initialization with values
// works with GCC only (aik)
	int numbers[9] = { [0 ... 8] = 10 };

// multi-dimensional notation of an array, combined initialization with values and list of values
// works with GCC only (aik)
	int numbers[9] = { 23, [1 ... 7] = 10, 42 };

// for outputting the values only
	for( int x=0; x<9; x++ )
		printf("%d\n",numbers[x]);

	return(0);
}
