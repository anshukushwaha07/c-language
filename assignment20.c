#include <stdio.h>
#include<stdlib.h>
int q1()
{
    int marks;
    printf("Enter student Marks \n");
    scanf("%d", &marks);
    switch (marks)
    {
    case 90 ... 100:
        printf("Grade A ");
        break;
    case 80 ... 89:
        printf("Grade B ");
        break;
    case 70 ... 79:
        printf("Grade C ");
        break;
    case 60 ... 69:
        printf("Grade D ");
        break;
    case 50 ... 59:
        printf("Grade E ");
        break;
    case 1 ... 49:
        printf("Grade F ");
        break;
    case 0:
        printf("Invalid Marks ");
        break;
    default:
        printf("Invalid Marks ");
        break;
    }
}

int menu()
{
    int num;
    printf("1. Factorial Number \n 2.Check Even Odd \n 3. Area of Circle \n 4. Sum of natural number \n Exit");
    printf("Enter a choice \n");
    scanf("%d", &num);
    return num;
}
void q2()
{  
     int n,f;
     float r;

    while (1)
    {

        switch (menu())
        {
        case 1:
             printf("\n Enter a number : ");
             scanf("%d",&n);
             for(f=1;n;n--)
                 f=f*n;
            printf("Factroial is %d ",f);
            break;
        case 2:
             printf("Enter a number ");
             scanf("%d",&n);
             if(n%2==0){
                printf("Even ");
             }
             else
             {
                printf("Odd ");
             }
             
            break;
        case 3:
             printf("Enter a number ");
             scanf("%d",&r);
             printf("Area of circle is %f",3.14*r*r);
            break;
        case 4:
            printf("Enter a number ");
             scanf("%d",&n);
             for(f=0;n;n--)
                    f=f+n;
            printf("Sum is %d",f);
            break;
        case 5:
           exit (0);                 

        default:
            break;
        }
    }
}