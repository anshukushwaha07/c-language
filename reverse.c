#include<stdio.h>
#include<string.h>

char* trim(char str[]){
   int i;
   char temp[50];
   for (i=0;str[i];i++)
   {
         if(str[i]!=' ')
            break;
   }
   if(str[i]!='\0')
         strcpy(temp,str+i);
   for(i=0;temp[i];i++);
   i--;
   while(temp[i]==' ')
      i--;
   temp[i+1]='\0';
   strcpy(str,temp);
   return str; 
}


int main(){
   char str[50]=" Anshu kush ";
    printf("%s",trim(str));
    printf("\n%lu ",strlen(str));
    printf("\n");

}

/*
int main(){
    int a = 121,b,rev=0,v=0;
     v=a;
      while(a>0){
           b=a%10;
           rev=rev*10+b;
           a=a/10;
      }
       printf(" reverse number  %d ",rev);
      
       if(rev==v) {
        
          printf("Palindorme ");  
       }
       else{
          printf("Not number ");
       }

     

}*/