//read and display an array using function
#include<stdio.h>
#include<stdlib.h>
void read(int *a, int n);
void display(int *a, int n);
int *arr;
//int arr[100]; //Global var
int main()
{
	int n;
	printf("Input how many elem:");
	scanf("%d", &n);
	arr = (int *)malloc(n*sizeof(int));
	read(arr, n);
	display(arr, n);
	//printf("array elents are: ");
	display(arr, n-2);
	display(arr, n-3);
	return 0;
}

void display(int *a, int n)
{
	int i;
	for(i=0; i<n; ++i)
	{
		printf(" %d,", *(arr+i));
	}
	printf("\n");

}
void read(int *a, int n)
{
	int i; //local var
	for(i=0; i<n; ++i)
	{
		scanf("%d", a+i);
	}
}
