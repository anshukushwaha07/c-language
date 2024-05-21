#include<stdio.h>

float area(float x){   //TSRS

    return 3.14*x*x;
}

float simple_int( int a , float b , float c ){   //TSRS

    float si;

    si=(a*b*c)/100;

    return si;
    
}

int even(int a){
    
    return a%2==0;
}
int natural(int n){
    for(int i=1;i<=n;i++)
           printf(" %d ",i);
}


int odd_natural(int n){

    for(int i=1;i<=n;i++) 
           printf("%d",2*i-1);

}
int sum(int x){
    int f=0;
    for(f;x;x--){
        f=f+x;
    }
    printf("Sum of natural number is %d",f);
}

int odd_sum(int x){

    int f=0;
    for(f;x;x--){
        if(x%2!=0)
          f=f+x;
    }

    printf("Sum of odd number is %d",f);

}


int main(){
    natural(5);
}