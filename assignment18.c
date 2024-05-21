#include <stdio.h>

int q10()
{  char k;
    for (int i = 1; i <= 4; i++)
    {   
        k='A';
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%c",k);
                j<4?k++:k--; 
            }
            else
                printf(" ");
                if(j==4)
                k--;
        }
        printf("\n");
    }
    return 0;
}
int q9()
{  int k;
    for (int i = 1; i <= 4; i++)
    {   
        k=1;
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
                if(j==4)
                k--;
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
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
int q7()
{
    int x,k;
    for (int i = 1; i <= 5; i++)
    {

        x = 1;
        k=1;

        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                if (x)
                {
                    printf("%d",k);
                    j<5?k++:k--;
                }
                else{
                    printf(" ");
                    if(j==5)
                       k--;
                }
                x = 1-x;
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
    char x;
    for (int i = 1; i <= 4; i++)
    {    x='A';
        for (int j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%c",x);
                j<4?x++:x--;
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
    char x;
    for (int i = 1; i <= 4; i++)
    {    x='A';
        for (int j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%c",x++);
                
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
    int k;
    for (int i = 1; i <= 4; i++)
    {   
        k=1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d",k);
                j<4?k++:k--;
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
    int x;
    for (int i = 1; i <= 4; i++)
    {

        x = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if (x)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
                x = 1-x;
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
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
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
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
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