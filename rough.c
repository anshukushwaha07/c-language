#include<stdio.h>


void Digit(int n){
    int i=0;
    while (n)
    {
        n=n/10;
        i++;
    }
    printf("%d ",i);
    
}

void calculate_the_maximum(int n, int k) {
    int and=0;
    int or=0;
    int xor=0;
  for(int i=1;i<n;i++){
    for(int j=i+1;j<n;j++){
        if((i&j) > and  && (i&j) < k ){
            and = (i&j);
        }
        if((i|j)> or && (i|j)<k){
            or= (i|j);
        }
        if((i^j)> xor && (i^j)<k){
            xor=(i^j);
        }

    }
  }
  printf("%d\n%d\n%d\n", and, or, xor);
}

int main() {
    int n, k;
  
    //scanf("%d %d", &n, &k);
   // calculate_the_maximum(n,k);
    Digit(12356);
 
    return 0;
}