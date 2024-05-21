 #include<stdio.h>

void Q5_1(){
  int i,count=0 ;
  char str[50],ch;
  printf("Enter a string ");
  fgets(str,50,stdin);
  for(i=0;str[i];i++);
  str[i-1]='\0';
  printf(" Enter a charater \n");
  fflush(stdin);
  scanf("%c",&ch);
  
  for(i=0;str[i];i++){
    if(str[i]==ch)
      break;;
  }
  if(str[i]){
  printf(" %c is found at index %d ",ch,i);
  }
  else{
    printf(" %c is not found ",ch);
  }
  
  
}
int Q5(){
  char str[]="Anshu";
  char ch;
  printf("Enter a character \n");
  scanf(" %c",&ch);
  for(int i=0;str[i];i++){
    if(ch==str[i]){
      printf(" %c ",ch);
    }
  }

  return 0;
}
void Q4_1(){
  int i;
  char str[50],str1[50];
  printf("Enter a string ");
  fgets(str,50,stdin);
  for(i=0;str[i];i++);
  str[i-1]='\0';

  for(i=0;str[i];i++){
    str1[i]=str[i];
  }
   str1[i]='\0';
   printf(" String is %s ",str1);

}

int q4(){
  char str1[]="Anshu";
  char str2[10];
  printf(" String copy in another string ");
  for(int i=0;str1[i];i++){
    str2[i]=str1[i];
  }
   printf(" %s ",str2);

   return 0;

}

void Q3_1(){
  char str[50];
  int i,l=0,spchara=0,alpha=0,digit=0;
  printf("Enter a string \n ");
  fgets(str,50,stdin);
  for(i=0;str[i];i++);
  str[i-1]='\0';
  l=i-1;
  for(i=0;i<l;i++){


     if (str[i]>='0' && str[i]<='9')
         {
            digit++;
         }

        else if(str[i]>='a' && str[i]<='z' ){
           alpha++;
         }
         else if(str[i]>='A' && str[i]<='Z'){
          alpha++;
         }
         else{
            spchara++;
         }


    
  }
  printf(" Digit = %d\n alphabet = %d \n special character = %d \n ",digit,alpha,spchara);
}
int q3(){
    char str[20]="11anshu1123@#$Aq";
    int i,alpha=0,digit=0,spchara=0;
    printf(" Calculation of alphabet,digit, special character  \n");
    for(i=0;i<=17;i++){
     
         if (str[i]>='0' && str[i]<='9')
         {
            digit++;
         }

        else if(str[i]>='a' && str[i]<='z' ){
           alpha++;
         }
         else if(str[i]>='A' && str[i]<='Z'){
          alpha++;
         }
         else{
            spchara++;
         }

    }

   
   printf(" Digit = %d\n alphabet = %d \n special character = %d \n ",digit,alpha,spchara);

  return 0;
  
}


int q2(){
    char str[]="anshu";
    int i;
    printf("string in reverse order   \n");
    for(i=5;i>=0;i--){
        printf("%c ",str[i]);
    }
  return 0;
  
}

void Q2_1(){
  int i,l=0;
  char str[50],ch;
  printf(" Enter a string \n");
  fgets(str,50,stdin);
  for(i=0;str[i];i++);
  str[i-1]='\0';
  l=i-1;
    
  for(i=0;l/2;i++){
      ch=str[i];
      str[i]=str[l-1-i];
      str[l-1-i]=ch;
  }

  printf(" String is reverse is %s",str);
}


void q1(){
  int i;
    char str[50];
    printf("Enter a string \n");
    fgets(str,50,stdin);
    for( i=0;str[i];i++);
    str[i-1]='\0';
    for(int i=0;str[i];i++){
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i]=str[i]+32;
            }
    }
    printf(" string in lower case %s ",str);
  

  
}
int main(){
  Q5_1();
}