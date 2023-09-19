// Reverse  print a array element
#include <stdio.h>
void ReverseArray(int arr[])
{
    int n, i = 0;
    printf("Enter how many element want to input ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d index element ",i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Array element index %d value is %d\n", i, arr[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("Reverse array element index %d value is %d\n", i, arr[i]);
    }
}
int main()
{
    int a[100], n;
    // printf("Enter how many element want to input ");
    // scanf("%d", &n);
    ReverseArray(a);
    return 0;
}