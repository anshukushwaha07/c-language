#include <stdio.h>

int main()
{
    printf("Enter elements : \n ");
    int arr[10], n[10];
    {
        for (int i = 0; i <= 9; i++)
        {
            scanf("%d", &arr[i]);
        }
    }
    for (int r = 0; r <= 9; r++)
    {
        n[r] = arr[r];
    }
    for (int i = 0; i <= 9; i++)
    {
        printf(" %d ", n[i]);
    }
}

void q4()
{

    printf("Enter 10 element to sort them ..\n");
    int arr[10], temp = 0;
    for (int i = 0; i <= 9; i++)
    {
        scanf(" %d", &arr[i]);
    }
    for (int r = 1; r <= 9; r++)
    {

        for (int i = 0; i <= 9 - r; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int j = 0; j <= 9; j++)
    {
        printf(" %d ", arr[j]);
    }
}

void q3()
{
    // sorting
    printf("Enter 10 element to sort them ..\n");
    int arr[10], temp = 0;
    for (int i = 0; i <= 9; i++)
    {
        scanf(" %d", &arr[i]);
    }
    for (int r = 1; r <= 9; r++)
    {

        for (int i = 0; i <= 9 - r; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    printf(" Second smallest Number %d ", arr[1]);
}
int q2()
{
    // sorting
    printf("Enter 10 element to sort them ..\n");
    int arr[10], temp = 0;
    for (int i = 0; i <= 9; i++)
    {
        scanf(" %d", &arr[i]);
    }
    for (int r = 1; r <= 9; r++)
    {

        for (int i = 0; i <= 9 - r; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    printf(" Second Largest Number %d ", arr[8]);

    return 0;
}

void q1()
{
    // sorting
    printf("Enter 10 element to sort them ..\n");
    int arr[5], temp = 0;
    for (int i = 0; i <= 4; i++)
    {
        scanf(" %d", &arr[i]);
    }
    for (int r = 1; r <= 4; r++)
    {

        for (int i = 0; i <= 4 - r; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int j = 0; j <= 4; j++)
    {
        printf(" %d ", arr[j]);
    }
}