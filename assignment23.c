#include<stdio.h>


int LCM(int a, int b){
    int L;
    for(L=a?b:a>b;L= a*b;L++){
        if(L%a==0 && L%b==0){
            break;
        }
    }
    return L;
}

int HCM(int a, int b){
    int H;
    for(H=a>b?a:b;H>1;H--){
        if(a%H==0 && b%H==0){
            break;
        }
    }
    return H;
}



int Isprime(int n){
     int i;
      for(i=2;i<=n-1;i++){
        if(n%i==0){
            break;
        }
    }
    if(n==i){
        return 1;
    }
    else
    {
        return 0;
    }
}

int nextPrimeNum(int n){
    while (!Isprime(++n))
     return n;
    
}
int NextPrime(int n){
    int i;
    for(n++;;n++){
    for(i=2;i<=n-1;i++)
        if(n%i==0)
            break;
        
    if(i==n){
      return n;
    }
    }


}

void FirstPrime(int n){

    int i;
      for(i=2;i<=n-1;i++){
        if(n%i==0)
        break;
        
    if(i==n)
        printf("%d",n);
        
    }

}


void PrintPrime(int n){
    int i,x;
    for(i=1,x=2;i<=n;i++){
        printf( "%d ",x);
        x=nextPrimeNum(x); 
    }
}


/*int main(){
    //LCM of to Number  
    int A;
    A= FirstPrime(9);
    printf("%d next  prime ",A);
     
}*/


