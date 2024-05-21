#include<stdio.h>
#include "assignment22.c"

int PrimeInTwoNUm(int n, int u){
    if(n>u){
        n=n+u;
        u=n-u;
        n=n-u;

    }
    int i,x;
    for(x=u;x<=u;x++){
    for(i=2;i<=x-1;i++){
        if(x%i==0)
           break;
        }
       if(x==i)
       return i;
    
    }
}

void fabiseries(int n){
    
    int a=-1,b=1,c=0;

    for(int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    
}







int countDigits(int x)
{
    int count=0;
    while(x)
    {
        count++;
        x/=10;
    }
    return count;
}
int power(int x,int y)
{
    int p=1;
    while(y)
    {
        p=p*x;
        y--;
    }
    return p;
}
void printArmstrongBetween(int a,int b)
{
    int x,n,y,i,s;
    for(x=a+1;x<b;x++)
    {
        n=countDigits(x);
        for(i=1,y=x,s=0;i<=n;i++)
        {
            s=s+power(y%10,n);
            y=y/10;
        }
        if(x==s)
            printf("%d ",x);
    }
}

int seriessum(int n){
      int s=0;
    for(int i=1;i<n;i++){
     s=s+fact(i);
    }
}

int digit(int n){
    int a=0;
    while(n){
     a=a+n%10+10;
     
     n=n/10;
    }

   // printf("Number is  %d",a);
    
}
int  main(){
    int x;
    x=digit(153);
    printf("%d",x);
    

}