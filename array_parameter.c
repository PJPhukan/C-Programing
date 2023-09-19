// Passing arrays  as function argument
// By declearing array as a perameter in the function
#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("The value of %d is %d\n", i, array[i]);
        /* code */
    }
    array[0] = 89; // very important point that if you change cny value here; it gets reflected
}
//by declearing pointer to function hold the base of the array 

void func2(int *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        // printf("The value of %d is %d\n", i, ptr[i]);
        printf("The value of %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 56;
}
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[] = {21, 32, 43};
    int arr1[2][2] = {{1, 2}, {4, 5}};
    // printf("index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("index 0 is %d\n",arr[0]);
    func2(arr);
    func2(arr);
    func3(arr1);
    return 0;
}