#include <stdio.h>

void concatenate(int arr1[], int arr2[], int n1, int n2, int result[]){
	int i, j;

	for (i = 0; i < n1; i++)
		result[i] = arr1[i];

	for (j = 0; j < n2; j++)
		result[i + j] = arr2[j];
}


int main() {
	int arr1[] = {1, 2, 3};
	int arr2[] = {4, 5, 6};

	 int n1 = sizeof(arr1) / sizeof(arr1[0]);
	 int n2 = sizeof(arr2) / sizeof(arr2[0]);

	 for (int i = 0; i < n1; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for (int i = 0; i < n2; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	int result[n1 + n2];

	concatenate(arr1, arr2, n1, n2, result);

	printf("Concatenated array: ");
	for (int i = 0; i < n1 + n2; i++)
		printf("%d ", result[i]);

	printf("\n");

	return 0;
}
