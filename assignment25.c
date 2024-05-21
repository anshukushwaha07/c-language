#include<stdio.h>


int NaturalSum(int n){
    if(n==1)
       return 1;
    return n+NaturalSum(n-1);   
}


void NatualNum(int n){
   if(n>0){
   NatualNum(n-1);
   printf(" %d",n); 

   }
}

void reverseprintNum(int n){
    if(n>0){
    printf(" %d",n );
    reverseprintNum(n-1);
    }
}

void oddnum(int n){
    if(n>0){
        oddnum(n-1);
        printf(" %d",2*n-1);
    }
}
void oddnum1(int n){
    if(n>0){
        oddnum1(n-1);
        printf(" %d",2*n-1);
    }
}

void oddnumreverse(int n){
    if(n>0){
        printf(" %d",2*n-1);
        oddnumreverse(n-1);
    }
}

void evenNum(int n){
    if(n>0){
        evenNum(n-1);
        printf(" %d",2*n);
    }
}

void evenNumReverse(int n){
    if(n>0){
        printf(" %d ",2*n);
        evenNumReverse(n-1);
        
    }
}
int main(){
  // NatualNum(10);
  // reverseprintNum(10);
 //oddnum(6);
  // oddnumreverse(6);
  //evenNum(6);
  evenNumReverse(6);
}

// 2*6-1=11,2*5-1=9,2*4-1=7,2*3-1=5,2*2-1=3,2*1-1=1