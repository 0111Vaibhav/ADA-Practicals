/* Implementation and Time analysis of sorting algorithms.

Bubble sort, Selection sort, Insertion sort, Merge sort and Quicksort
 */

//Bubble sort

/*
#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter The No. of elements in array \n");
    scanf("%d",&n);
    int a[n],temp;

    printf("Enter the elements of array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
*/

//Selection Sort

/*
#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter The No. of elements in array \n");
    scanf("%d",&n);
    int a[n],temp;

    printf("Enter the elements of array \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
*/

//Insertion Sort


#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter The No. of elements in array \n");
    scanf("%d",&n);
    int a[n],key;

    printf("Enter the elements of array \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

