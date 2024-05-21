#include<stdio.h>


void Count_vowel(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        if(str[i]== 'a' ||str[i]== 'A'||str[i]== 'e'||str[i]== 'E'||str[i]== 'i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){

            count++;
        }
    }
    printf(" Vowel in string %d",count);

}
int CountVowel(char str[]){
    char V[]="aeiouAEIOU";
    int i,j,count=0;
    for(i=0;str[i];i++){

        for(j=0;str[j];j++)
            if(str[i]==V[j]){
             count++;
             break;
          }

    }
    return count; 

}
int Find_String(char str[],char ch ){
    for(int i=0;str[i];i++){
        if(str[i]==ch){
            return i;
            break;
        }
    }
    return -1;

}

char Find_character(char str[],char ch,int a ,int b){

    for(int i=a;str[i]&&i<b;i++){
        if(str[i]==ch){
            return 1;
            break;
        }
    } 
    return 0;
    
}

void Swap(char str[],int a ,int b){
    char temp=0;
    temp=str[a];
    str[a]=str[b];
    str[b]=temp;
    printf(" %s ",str);
}

int Alphanumeric(char str[]){

int digit=0,alpha=0;
for(int i=0;str[i];i++){
    if(str[i]>='0' && str[i]<='9')
      digit=1;
    if(str[i]>='a' && str[i]<='z')
     alpha=1; 
    if(str[i]>='A' && str[i]<='A')
    alpha=1;   
}
if(alpha&&digit==1)
return 1;
else
return 0;


}

int main(){
    char ch ='z';
    char str[]="AAAanshuekrpo123";
    //Count_vowel(str);
    //int n=Find_String(str,ch);
   // printf("index number  %d ",n);
//    int a=5,b=7;
//    int n=Find_character(str,ch,a,b);
//    printf(" %d ",n);

    // Swap(str,3,5);
   int  n = Alphanumeric(str);
   printf(" %d",n);




}