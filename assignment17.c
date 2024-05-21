#include <stdio.h>
int main()
{ 
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1||i==5 ||j==1||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}



int q9()
{   char k;
    for (int i = 1; i <= 5; i++)
    {    
        k='A'+i-1;
        for (int j = 1; j <= 5; j++)
        {
            if (j>=i)
            {
                printf("%c",k++);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int Q8()
{   int k=1;
    for (int i = 1; i <= 4; i++)
    { 
        for (int j = 1; j <= 4; j++)
        {
            if (i >= j)
            {
                printf("%d",k++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}  


int q7()
{   char k;
    for (int i = 1; i <= 5; i++)
    {    
        k='A';
        for (int j = 1; j <= 5; j++)
        {
            if (j>=i)
            {
                printf("%c",k++);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int q6()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i >= j)
            {
                printf("%d",i-j+1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}  


int q5()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i >= j)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
 

int q4()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j>=i)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}


int q3()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 6-i)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}


int q2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 6 - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int q1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i >= j)
            {
                printf(" * ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

