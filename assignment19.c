#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int q1()
{
    int num;
    printf("Enter a month number \n ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf(" january 31 Days ");
        break;
    case 2:
        printf(" feb 28 or 29 Days ");
        break;
    case 3:
        printf(" March 31 Days ");
        break;
    case 4:
        printf("April 30 Days ");
        break;
    case 5:
        printf("May 31 Days ");
        break;
    case 6:
        printf("June 30 Days ");
    case 7:
        printf("July 31 Days ");
        break;
    case 8:
        printf("August 31 Days ");
        break;
    case 9:
        printf("September 30 Days ");
        break;
    case 10:
        printf("October 31 Days ");
        break;
    case 11:
        printf("November 30 Days ");
        break;
    case 12:
        printf("decemeber 31 Days ");
        break;

    default:
        printf("you chooes Another number ");
        break;
    }
    return 0;
}

int menu1()
{
    int x;

    printf("\n1.Addition \n 2.Subtraction\n 3.Multilication \n 4.Division \n 5.Exit \n");
    printf("Enter your choise \n ");
    scanf("%d", &x);
    return x;
}

void q2()
{

    while (1)
    {
        switch (menu1())
        {
        case 1:
            printf("\nAddition");
            printf("\nEnter two number");
            int a, b;
            scanf(" %d %d", &a, &b);
            printf("Sum of number is %d ", a + b);
            break;

        case 2:
            printf("\nSubstraction ");
            printf("\nEnter two number ");
            int a1, b2;
            scanf(" %d %d", &a1, &b2);
            printf("Substraction %d ", a1 - b2);
            break;
        case 3:
            printf("\nMultiplication ");
            printf("\nEnter two number ");
            int a3, b4;
            scanf(" %d %d", &a3, &b4);
            printf("\nmultiplication %d ", a3 * b4);
            break;
        case 4:
            printf("\nDivision ");
            printf("\nEnter two number \n");
            int a5, b6;
            scanf(" %d %d", &a5, &b6);
            printf("Division  %d ", a5 / b6);
            break;
        case 5:
            exit(0);

        default:
            printf("\nYou Press Another Key ");
            break;
        }
    }
}

int Q3()
{
    int n;
    printf("Enter A week Number \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Good Morning, Happy Monday. ...");
        break;
    case 2:
        printf("Good Morning, Happy Tuesday. ...");
        break;
    case 3:
        printf("Good Morning, Happy Wednesday. ...");
        break;
    case 4:
        printf("Good Morning, Happy Thursday.......");
        break;
    case 5:
        printf("Good Morning, Happy Friday....");
        break;
    case 6:
        printf("Good Morning, Happy Saturday. ...");
        break;
    case 7:
        printf("Good Morning, Happy Sunday. ...");
        break;

    default:
        printf("Your choies is Incorrect ");
        break;
    }
    return 0;
}

int menu()
{
    int n;
    printf("1. Isosceles Triangle \n 2.Right Angle Triangle \n 3. Equiletral Triangle \n 4. Exit \n");

    scanf("%d", &n);

    return n;
}
void q4()
{
    int x, y, z;
    while (1)
    {
        switch (menu())
        {
            
        case 1:
            printf("Enter values of Triangle \n");
            scanf(" %d%d%d", &x, &y, &z);
            if (x == y || y == z || x == z)
            {
                printf("Isosceles Triangle\n ");
            }

            break;
        case 2:
            printf("Enter values of Triangle\n ");
            scanf(" %d%d%d", &x, &y, &z);
            if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
            {
                printf("Right Angled Triangle\n ");
            }
            break;
        case 3:
            printf("Enter values of Triangle\n ");
            scanf(" %d%d%d", &x, &y, &z);
            if (x == y && y == z)
            {
                printf("Equiletral  Triangle \n");
            }
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid number ");
        }
    }
}

int main()
{
    q2();
    printf("\n");
    return 0;
}

int q5()
{
    int var;
    printf("Enter a value ");
    scanf("%d", &var);
    switch (var)
    {
    case 1:
        printf("Good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("Best");
        break;
    default:
        printf("Invalid");
        break;
    }

    return 0;
}