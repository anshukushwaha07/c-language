#include<stdio.h>

int fact(int n){
    int s=1;
    if(n>0){
    s=n*s*fact(n-1); 
    } 
    return s;     
}

int fact_second(int n){

    if(n==0)
    return 1;

    return n*fact(n-1);
}

int hcf_second(int a , int b){
    if(a>b){
        if(a%b==0)
            return b;
          else
            return hcf(a%b,b);
    }
    else
         if(b%a==0)
             return a;
          else
             return hcf(a,b%a );
       
}

int HCF(int n, int x){
    if(n%x==0){
        return 1;
    }
    else
      return HCF(x,n%x);
}

int fabi(int n){
    if(n==0||n==1)
      return n; 
   return fabi(n-1)+fabi(n-2);

}

void FabiPrint(int n){
    if(n>0){
        FabiPrint(n-1);
        printf(" %d ",fabi(n )); 
    }
}

/*int fabi(int n){
   int  a=-1,b=1,c;
   if(n>0)
   return c=a+b+fabi(n-1);

   a=b;
   b=c;

}*/

int Count(int n){
    
    if(n==0)
    return 0;

    return Count (n/10) + 1;  
}
double Power(double x,double y){
    if(y==0)
        return 1;
     if(y>0)
        return Power(x,y-1)*x;
      else
        return Power(x,y+1)/x; 
}

int main(){

    /*int x;
    x=fact(12);
    printf(" %d ",x);
    */

  /* int y;
   y=HCF(5,2);
   printf("%d",y);
*/

  

}