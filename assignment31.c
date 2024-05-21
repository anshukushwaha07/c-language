#include <stdio.h>
void rotate(int A[],int size,int n,int d)
{

    for(int j=0;j<size;j++){
        scanf("%d",A[j]);
    }
    //if d==-1 means left and if d==+1 means right
    int i,temp,j;
    if(d==1)
    {
        for(j=1;j<=n;j++)
        {
            temp=A[size-1];
            for(i=size-2; i>=0;i--)
                A[i+1]=A[i];
            A[0]=temp;
        }
    }
    else
    {
        for(j=1;j<=n;j++)
        {
            temp=A[0];
            for(i=1; i<=size-1;i++)
                A[i-1]=A[i];
            A[size-1]=temp;
        }
    }
}

int findAdjacentDuplicateValue(int A[],int size)
{
    int i;
    for(i=0;i<=size-2;i++)
    {
        if(A[i]==A[i+1])
            return A[i];
    }
    return 0;
}

int dublicate(int a[], int x)
{
    int temp = 0;
    for (int i = 0; i < x; i++)
    {
        scanf(" %d", &a[i]);
    }

    for (int j = 0; j < x; j++)
    {
        for (int k = 0; k < x; k++)
        {
            if (a[j] == a[k])
            {
                temp = a[k];
                
            }
            else{
                temp=0;
            }
            break;
        }
    }
    return temp;
}
int Unique(int a[], int x)
{
    int temp = 0;
    for (int i = 0; i < x; i++)
    {
        scanf(" %d", &a[i]);
    }

    for (int j = 0; j < x; j++)
    {
        for (int k = 0; k < x; k++)
        {
            if (a[j] != a[k])
            {
                temp = a[j];
                
            }
            break;
        }
    }
    return temp;
}

void Sort_Array(int a[], int x)
{
    int temp = 0;
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int r = 1; r < x; r++)
    {
        for (int i = 0; i < x - r; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (int j = 0; j < x; j++)
    {
        printf(" %d ", a[j]);
    }
}

int Smallest_number(int a[], int x)
{
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp = a[0];
    for (int j = 0; j < x; j++)
    {
        if (temp > a[j])
        {
            temp = a[j];
        }
    }
    return temp;
}

int Greatest_number(int a[], int x)
{
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp = a[0];
    for (int j = 0; j < x; j++)
    {
        if (temp < a[j])
        {
            temp = a[j];
        }
    }
    return temp;
}

void sort(int A[],int n)
{
    int r,i,t;
    for(r=1;r<n;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(A[i]>A[i+1])
                swap(A,i,i+1);
        }
    }
}
void freq(int A[],int n)
{
     int i=0,j=1,count;
    sort(A,n);
    while(i<n)
    {
        printf("\n%d - ",A[i]);
        if(i==n-1)
            break;
        count=1;
        while(A[i]==A[j])
        {
            count++;
            j++;
            if(j==n)
                break;
        }
        printf("%d ",count);
        i=j;
        j=j+1;
    }
}
int main()
{

    /*int arr[5],n;
    n=Greatest_number(arr,5);
    printf("Greatest Number is %d ",n);
    */

    /*int arr[5],n;
    n=Smallest_number(arr,5);
    printf("Smallest Number is %d ",n);
    */

    /*int arr[5] , n;
    Sort_Array(arr,5);*/

    int arr[]={1,2,2,5,4}, n;
    printf(" duplicate   %d ", findAdjacentDuplicateValue(arr, 5));
}