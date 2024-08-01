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

/*
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
*/

//Merge Sort

/* #include<stdio.h>

void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid=(l + r) / 2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);

    }
}
void merge(int arr,int l,int mid,int r)
{
    int n1= mid-l+1;
    int n2= r-mid;
    int b[n1];
    int c[n2];
    for(int i=0;i<n1;i++)
    {
        b[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int key=l;
    while(i<n1&&j<n2)
    {
        if(b[i]<c[j])
        {
            arr[key]=b[i];
            key++;i++;
        }
        else
        {
            arr[key]=c[j];
            key++;j++;
        }
    }
    while (i<n1)
    {
        arr[key]=b[i];
        key++;i++;
    }
    while (j<n2)
    {
        arr[key]=c[j];
        key++;j++;
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
    mergeSort(a,0,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
} */

//Quick Sort

/* 
#include<stdio.h>
int partition(int arr[],int l,int u)
{
    int p=arr[l];
    int s=l,temp;
    int e=u;
    while(s<e)
    {
        if(s<e)
        {
            temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
        }
        while(arr[s]<=p)
        {
            s++;
        }
        while(arr[e]>p)
        {
            e--;
        }
    }
    temp=arr[l];
    arr[l]=arr[e];
    arr[e]=temp;
    return e;
}
void quickSort(int arr[],int l,int u)
{
    if(l<u)
    {
        int loc=partition(arr,l,u);
        quickSort(arr,l,loc-1);
        quickSort(arr,loc+1,u);
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
    quickSort(a,0,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
} 
*/
