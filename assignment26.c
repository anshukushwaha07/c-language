#include<stdio.h>

void EvenNumreverse(int n){

    if(n>0){
        printf(" %d ",2*n);
        EvenNumreverse(n-1);
    }


}
void square(int n){
    if(n>0){
    square(n-1);
    printf(" %d ",n*n);
    }
}

void binary(int n){
    if(n>=1){
        binary(n/2);
        printf(" %d ",n%2 );
    }
}

void ocatl(int n){
    if(n>=1){
        ocatl(n/8);
        printf(" %d ",n%8);
    }
}

void hexca(int n ){
    int x;
    char ch1='A';
    char ch2='B';
    char ch3='C';
    char ch4='D';
    char ch5='E';
    char ch6='F';


    if(n>=1){
        hexca(n/16);
        x=n%16;
       switch (x)
       {
       case 10:
        printf("%c",ch1);
        break;
       case 11:
        printf("%c",ch2);
        break;

       case 12:
        printf("%c",ch3);
        break;  

        case 13:
        printf("%c",ch4);
        break;
       
       case 14:
        printf("%c",ch5);
        break;

        case 15:
        printf("%c",ch6);
        break;
       default:
        printf(" %d ",x);
        break;
       }
    }
}

void reverseNum(int n){
    if(n>0){

        printf("%d",n%10);
        reverseNum(n/10);
       
    }
}




int main(){
    //EvenNumreverse(6);
    //square(10);
    //binary(6);
    //ocatl(10);
    //hexca(47);
    reverseNum(2345);

}
