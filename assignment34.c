#include<stdio.h>
void Q5_1(){
    char str[50];
    printf("Enter a string");
    fgets(str,50,stdin);
    for(int i=0;str[i];i++)
    str[i-1]='\0';
    for(int i=0;str[i];i++){
        if(str[i]>=97)
            {
                str[i]=str[i]-32;
            }

    }
    printf("Uppercase String is %s ",str);   

}
int q5(){
    char str[]="anshu",ch;
    printf("string in upper case  \n");
    for(int i=0;str[i];i++){
            if(str[i]>=97)
            {
                str[i]=str[i]-32;
            }
    }
    printf(" string in upercase %s ",str);
  
  return 0;
  
}
void Q4_1(){
    int i,count=0;
    char str[50],ch=' ';
    printf(" Enter a string ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++){
        if(str[i]==ch)
           count++;
    }
    printf(" Space in string is %d",count);
}

int q4(){
    char str[]="ab es ec cccc e",ch;
    int count=0;
    printf("Space in string ");
   
    for(int i=0;str[i];i++){

        if(str[i]==' '){
            count++;
        }
    }
    printf(" %d space in string ",count);
  
  return 0;
  
}
void Q3_1(){
    int i,count=0;
    char str[50],V[]="aeiouAEIOU"; 
    printf("Enter a string \n"); 
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    printf(" length of a charater : "); 
    fflush(stdin);
    for(i=0;str[i];i++){ 
        for(int k=0;V[k];k++){ 
            if(str[i]==V[k])
              count++;
        }
    }
    printf(" Vowel in string is %d",count);

}


int q3(){
    char str[]="abeseccccce",ch;
    int count=0;
    for(int i=0;str[i];i++){

        if(str[i]== 'a' ||str[i]== 'A'||str[i]== 'e'||str[i]== 'E'||str[i]== 'i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){

            count++;
        }
    }
    printf(" %d vowel in  this string ",count);
   return 0;
  
}
void Q2_1(){
    int l,count=0;
    char str[50],ch;
    printf("Enter a string \n"); 
    fgets(str,50,stdin);
    for(l=0;str[l];l++);
    str[l-1]='\0';
    printf(" length of a charater : "); 
    fflush(stdin);
    scanf("%c",&ch);
    for(l=0;str[l];l++){
        if(str[l]==ch)
         count++;
    }
    printf(" Charater %c  occurance %d",ch,count);

}
int q2(){
    char str[]="abeseccccce",ch;
    int count=0;
    printf("Enter a character \n ");
    scanf("%c",&ch);
    for(int i=0;str[i];i++){

        if(str[i]==ch){
            count++;
        }
    }
    printf(" %c charachter frequency %d ",ch,count);
  
  return 0;
  
}

void Q1(){
    int l;
    char str[50];
    printf("Enter a string \n"); 
    fgets(str,50,stdin);
    for(l=0;str[l];l++);
    str[l-1]='\0';
    printf(" length of a string %d ",l-1);

}

int Q1_1(){
    char str[ ]="Anshu+ io";
    int count=0;
    for(int i=0;str[i];i++){

     count++;
    }

    printf(" %d",count);

    return 0;

}
int main(){
    Q1();
    
}
