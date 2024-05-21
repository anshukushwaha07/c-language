#include<stdio.h>
#include<string.h>

int LenghtStr(char str[])
{
    int count=0;
    for(int i=0;str[i];i++){
        count++;
    }

    return count;
}

int Palindrome(char str[]){
   int l,i;
   for(l=0;str[l];l++);
   for(i=0;l/2;i++){
      if(str[i]!=str[l-1-i])
      return 0;
   }
   return 1;
}

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


int Count_word(char str[]){

    int count=0,i;
    trim(str);
    
    for(i=0;str[i];i++){
      if(str[i]==' ')
        count++;
    }

   return count+1;
}

char * reverseStringWordWise(char str[])
{
    int i,j=-1,no_of_words,k;
    char s[10][20];
    no_of_words=countWords(str);
    
    for(i=0;i<no_of_words;i++)
    {
        for(j++,k=0;str[j]!=' '&&str[j]!='\0';j++,k++)
            s[i][k]=str[j];
        s[i][k]='\0';        
    }
   

    strcpy(str,s[no_of_words-1]);
    strcat(str," ");
    for(i=no_of_words-2;i>0;i--)
    {
        strcat(str,s[i]);
        strcat(str," ");
    }
    strcat(str,s[0]);
    strcat(str,"\0");

    return str;
}
int IsSame(char c1,char c2 ){
   if(c1==c2)
   return 1;
   else if(c1>='a' && c2<='z'){
         if(c1-32==c2)
         return 1;
   }     
   else if(c1>='A' && c2<='Z'){
         if(c1+32==c2)
         return 1;
   }    
   return 0; 

}

int IgnoreCompareString(char s1[],char s2[]){
   int i;
   if(strlen(s1)!=strlen(s2))
      return 0;
      else{
         for(i=0;s1[i];i++){
         if(!IsSame(s1[i],s2[i]))
             return 0;
         }
         return 1; 
      }
}

int main(){

    char str[50]="    Anshu kush  ";
    printf(" %d ",Count_word(str));

}


