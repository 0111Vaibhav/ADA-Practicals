#include <stdio.h>
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void shellSort(int arr[], int n)
{
    for (int gap = n / 2; gap >= 1; gap = gap/2)
    {
        for (int j = gap; j < n; j++)
        {
            for (int i = j - gap; i >= 0; i=i-gap)
            {
                
                if(arr[i+gap]<arr[i])
                {
                    swap(&arr[i + gap], &arr[i]);
                }
                else
                {
                    break;
                }
            }
        }
    }
}
void main()
{
    int n, i, j;
    printf("Enter The No. of elements in array \n");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    shellSort(a,n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
