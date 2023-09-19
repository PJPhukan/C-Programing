// ARRAY ALL OPERATION

#include <stdio.h>

void traverse(int arr[], int n);
void shorting(int arr[], int n);
int searching(int arr[], int n, int item);
void insertaion(int arr[], int n, int pos, int item);
void deletion(int arr[], int n, int pos);
void marge(int arr1[], int arr2[], int n, int m);

int main()
{
    int arr[20], arr1[20], n, m, item, pos, value;
    printf("How many element in first  array :");
    scanf("%d", &n);
    printf("How many element in second array   :");
    scanf("%d", &m);
    printf("Enter  elements  of array 1 : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter  elements  of array 2 : \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    // printf("Enter the posission of the  element :");
    // scanf("%d", &pos);
    // printf("Enter the value of the  element :");
    // scanf("%d", &value);
    // printf("Enter searching element :");
    // scanf("%d", &item);
    // traverse(arr, n);
    // shorting(arr, n);
    // searching(arr, n, item);
    // marge(arr, arr1, n, m);
    // insertaion(arr, n, pos, value);
    // deletion(arr, n, pos);
    return 0;
}

// Marge two array

void marge(int arr1[], int arr2[], int n, int m)
{
    int i, j = 0;
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        arr[j] = arr1[i];
        j++;
    }
    for (int i = 0; i < m; i++)
    {
        arr[j] = arr2[i];
        j++;
    }
    printf("First Array elements   :");
    traverse(arr1, n);
    printf("\n");
    printf("Second Array elements   :");
    traverse(arr2, m);
    printf("\n");
    printf("Marge Array elements  :");
    for (int i = 0; i < m + n; i++)
    {
        printf("|%d|---", arr[i]);
    }
    printf("\n");
    printf("After the shorting the marge array  :");
    shorting(arr, n + m);
}

//  Traverse  an Array

void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("|%d|---", arr[i]);
    }
}

// Shorting an Array

void shorting(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    traverse(arr, n);
}

// Searching an Array

int searching(int arr[], int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (item == arr[i])
        {
            printf("Searching element possition is  %d th", i + 1);
            return 0;
        }
    }
    printf("Searching element not found");
}

// Insertaion at an Array

void insertaion(int arr[], int n, int pos, int item)
{
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = item;
    for (int i = 0; i < n + 1; i++)
    {
        printf("|%d|---", arr[i]);
    }
}

// Deletaion at an Array

void deletion(int arr[], int n, int pos)
{
    for (int i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1;
    for (int i = 0; i < n; i++)
    {
        printf("|%d|---", arr[i]);
    }
}

// void display(int arr[]{

// })
