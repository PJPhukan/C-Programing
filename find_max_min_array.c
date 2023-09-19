//Find maximum and minimum in an array
#include<stdio.h>
void read(int a[], int n);
void display(int a[], int l, int h);
int max(int a[], int l, int h);
int min(int a[], int l, int h);
//int arr[100], n, h, l;
int main()
{
	int arr[100], n, h, l;
	printf("How many elements:");
	scanf("%d", &n);
	printf("Input elements:");
	read(arr,n);
	
	//
	l=0;
	h=n-1;
	display(arr,l,h);	
	printf("Displaying maximum elemnet in the index range[%d-%d]:%d\n", l,h, max(arr,l,h)) ;
	printf("Displaying minimum elemnet in the index range[%d-%d]:%d\n", l,h, min(arr,l,h)) ;

	//second half of the array
	l=n/2;
        h=n-1;
        display(arr,l,h);
        printf("Displaying maximum elemnet in the index range[%d-%d]:%d\n", l,h, max(arr,l,h)) ;
        printf("Displaying minimum elemnet in the index range[%d-%d]:%d\n", l,h, min(arr,l,h)) ;

	return 0;
}
int max(int a[], int l, int h)
{
	int i, max;
	
	max=a[l];
	for(i=l+1; i<=h; ++i)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	return max;
}
int min(int a[], int l, int h)
{
        int i, min;

        min=a[l];
        for(i=l+1; i<=h; ++i)
        {
                if(a[i]<min)
                {
                        min = a[i];
                }
        }
        return min;
}  
void read(int a[], int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		scanf("%d", &a[i]);
	}

}
void display(int a[], int l, int h)
{
	int i;
	printf("Displaying the elemnets in the index range[%d-%d]:\n", l,h);
	for(i=l; i<=h; ++i)
	{
		printf(" %d,", a[i]);
	}
	printf("\n");
}
