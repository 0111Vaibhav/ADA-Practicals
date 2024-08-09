#include <stdio.h>
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void MaxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int l= (2 * i)+1;
    int r = 2 * (i+1);
    while (l<n && arr[l]>arr[largest])
    {
        largest=l;
    }
    while (r<n && arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        MaxHeapify(arr,n,largest);
    }
}
void HeapSort(int arr[],int n)
{
    for(int i=(n/2);i>=0;i--)
    {
        MaxHeapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(&arr[0],&arr[i]);
        MaxHeapify(arr,i,0);
    }
}
void main()
{
    int n,i,j;
    printf("Enter The No. of elements in array \n");
    scanf("%d",&n);
    int a[n];

    printf("Enter the elements of array \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    HeapSort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}