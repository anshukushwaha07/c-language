#include <stdio.h>

int fact(int n)
{

    int f;
    for (f = 1; n; n--)
    {
        f = f * n;
    }

    return f;
}

int combi(int n, int r)
{

    return fact(n) / fact(n - r) * fact(r);
}

int perm(int n, int r)
{

    return fact(n) / fact(n - r);
}

int Selection(int n, int r)
{
    int f = 1, s = 1, p = 1;
    int x = n - r, slect;
    if (n >= r)
    {
        for (f = 1; n; n--)
        {
            f = f * n;
        }
        for (s = 1; r; r--)
        {
            s = s * r;
        }
        for (p = 1; x; x--)
        {
            p = p * x;
        }

        slect = f / s * p;

        return slect;
    }
    else
        return 0;
}

int Arrangement(int n, int r)
{
    int f = 1, s = 1, x, arran;
    x = n - r;
    if (n > r)
    {

        for (f; n; n--)
        {
            f = f * n;
        }
        for (s; x; x--)
        {
            s = s * x;
        }

        arran = f / s;

        return arran;
    }
    else
        printf("Enter correct number ");
}

int digitcheck(int n, int a)
{

    while (n)
    {

        if (n % 10 == a)
        {
            return 1;
            n = n / 10;
        }
    }
}

int isprimeFactor(int n)
{

    int i = 2;
    while (n > 1)
    {
        while (n % i == 2)
        {
            printf("%d ", i);
            n = n / i;
        }
        i++;
    }
}

int main()
{
    
}
