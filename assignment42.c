#include<stdio.h>


//Q2


void search_all_occuranaces(char *str,char ch,int *arr){
     for(int i=0,j=0;str[i];i++)
     {
              if(str[i]==ch)
              {
                  arr[j]=i;
                  j++; 
              }
     }
     }
char* UpperCase(char *str){
      for(int i=0;str[i];i++){
            if(str[i]>='a' && str[i]<='z')
             str[i]=str[i]-32;
      }
      return str;
}

char* LowerCase(char *str){
      for(int i=0;str[i];i++){
            if(str[i]>='A' && str[i]<='Z')
             str[i]=str[i]+32;
      }
      return str;
}

char* extract_string(char *str,int start_index,int last_index,char  *result){
      int i,j;
      for( i=start_index,j=0;i<last_index;i++,j++)
            result[j]=str[i]; 
      result[j]='\0';  

      return result;
}

int main(){
      char s[70]="anshu_kushwaha_snakap_singh_abhinav_shrivanstav";
      int n=10;
      int k=15;
      char p[10]={0};
     printf("%s",extract_string(s,n,k,p));

}


/* Q1


void swap(int *n,int *n1 ){
      int temp=0;
      temp=*n;
      *n=*n1;
      *n1= temp;
}

int main(){
 int a,b;
 scanf("%d %d",&a,&b);
 swap(&a,&b);
 printf("%d %d ",a,b);
 return 0;

}*/



