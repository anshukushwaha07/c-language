#include<stdio.h>
#include<string.h>



int CountLetter(char str[]){
    int i,l;
    for(i=0;str[i];i++);
    str[i-1]='\0';
    l=i-1;
    return l; 

}

char* SortString(char str[]){
   int i,j,n;
    char ch;
    n=strlen(str);
    for(i=1;i<=n-1;i++){
        for(j=0;j<=n-1-i;j++){ 
             if(str[j]>str[j+1]){
                ch=str[j];
                str[j]=str[j+1];
                str[j+1]=ch;
                 
             }
        }
    }
     return str;
}

void Frequency_Character(char str[]){

    int i,count; 
    char temp[100];
    strcpy(temp,str);
    SortString(temp);
    for(i=0,count=1 ;temp[i];i++){

        if(temp[i]==temp[i+1])
        count++;
        else{
         printf("%c %d\n",temp[i],count);
         count=1;
        }
    }


}

int findWord(char str[],char word[]){
    int i,j,word_lenght;
    word_lenght=strlen(word);
    for(i=0;i<=strlen(str)-word_lenght;i++){
        for(j=0;j<word_lenght;j++){
            if(str[i+j]!=word[j])
            break;
        }
        if(j==word_lenght)
        return 1;
    }
    return -1;


}

char* CapitalCharacterOfAllWord(char str[])
{
   int i;
   if(str[0]>='a' && str[0]<='z')
            str[0]=str[0]-32;
   for(i=1;str[i];i++){
    if(str[i-1]==' '){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
   }
  return str;
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
int countWords(char str[])
{
    int i,count=0;
    //trim(str);
    for(i=0;str[i];i++)
        if(str[i]==' ')
            count++;
    return count+1;
}

char* nameAccronym(char str[])
{
    char temp[50];
    int i,n,j=1,k=0;
    if(str[0]>='a'&&str[0]<='z')
        temp[0]=str[0]-32;
    else
        temp[0]=str[0];
    n=countWords(str);
    for(i=1;str[i];i++)
    {
        if(str[i-1]==' ')
        {
            j++;
            if(j==n)
            {
                k++;
                temp[k]=' ';
                k++;
                if(str[i]>='a'&&str[i]<='z')
                    temp[k]=str[i]-32;
                else
                    temp[k]=str[i];
                for(k++,i++;str[i];i++,k++)
                    temp[k]=str[i];
                temp[k]='\0';
            }
            else
            {
                k++;
                temp[k]=' ';
                k++;
                if(str[i]>='a'&&str[i]<='z')
                    temp[k]=str[i]-32;
                else
                    temp[k]=str[i];
            }
            
        }
    }
    strcpy(str,temp);
    return str;
}

char * concatenate(char s1[],char s2[])
{
    int i,j;
    for(i=0;s1[i];i++);

    for(j=0;s2[j];j++,i++)
        s1[i]=s2[j];
    s1[i]='\0';
    return s1;
    
}


int main(){
    char str[50]="mysirG education pvt ";
   printf("%s",nameAccronym(str));
    printf("\n");

}