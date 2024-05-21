#include<stdio.h>

int naturalsum(int n){
    if(n==1)
    return 1;
   return n+ naturalsum(n-1);
}



int oddsum(int n){

    if(n==1)
    return 1;

    return 2*n-1 + oddsum(n-1);  

}

int evennum(int n){
    if(n==1)
    return 2;

    return 2*n  + evennum(n-1);
}


int SquareOfNatural(int n){
    if(n==1)
      return 1 ;

    return n*n + SquareOfNatural(n-1); 
}

int sum_of_digit(int n){
    int s=0;
    if(n>0){
      s+=n%10;
      s+=sum_of_digit(n/10);
    }

    return s;

}

int sum_of_digit_second(int n){
    int s=0;
    if(n==0)
        return 0;
  
    return sum_of_digit(n/10)+n%10;
}

int main(){
    int s;

    // s=naturalsum(20);
    //  printf("%d",s);

    //s=oddsum(30);

   // s=evennum(10);

   // s=SquareOfNatural(5);
    s = sum_of_digit(0);

    printf(" %d ",s);
    
   
}