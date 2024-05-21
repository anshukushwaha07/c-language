#include <stdio.h>
#include <string.h>

void Input2DString(char str[][20], int n)
{
    // printf(" Enter element in String \n");
    int i, l;
    for (i = 0; i < n; i++)
    {
        fgets(str[i], 20, stdin);
        for (l = 0; str[i][l]; l++)
            ;
        str[i][l - 1] = '\0';
    }
}

void Print2Dstring(char str[][20], int n)
{
    int i, j, k, count = 0;
    char v[] = "aeiouAIEOU";
    Input2DString(str, n);
    printf(" Print 2 D array\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0, count = 0; str[i][j]; j++)
            for (k = 0; v[k]; k++)
                if (str[i][j] == v[k])
                    count++;
        printf(" vowel in %s are %d \n ", str[i], count);
    }
}

void SortString(char str[][20], int n)
{
    Input2DString(str, n);
    int i,r,j;
    char temp[20];
    // for(int i=0;i<n;i++){

    //     for(j=i;str[i][j];j++)
    //     {
    //         if(str[i][j]>=str[i+1][j+1]){
    //             temp[i]=str[i][j];
    //             str[i][j]=str[i+1][j+1];
    //             str[i+1][j+1]=temp[i];
    //         }
    //     }
    //     printf(" %s",str[i]);

    // }

    for (r = 1; r <= n - 1; r++)
    {
       for(i=0;i<=n-1-r;i++){

        if(strcmp(str[i],str[i+1])>0)
        {
                strcpy(temp,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],temp);
        }

       }
            
        
    }
    
    printf(" Sorting array \n ");
    for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }


}

void display(char str[][20],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("\n%s",str[i]);
}

char* trim(char str[])
{
    char temp[50];
    int i;
    for(i=0;str[i];i++)
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
    trim(str);
    for(i=0;str[i];i++)
        if(str[i]==' ')
            count++;
    return count+1;
}

 int splitToStrings(char str[],char s[][20],int n)
{
    int i,j=-1,no_of_words,k;
    
    no_of_words=countWords(str);
    if(no_of_words<=n)
        for(i=0;i<no_of_words;i++)
        {
            for(j++,k=0;str[j]!=' '&&str[j]!='\0';j++,k++)
                s[i][k]=str[j];
            s[i][k]='\0';        
        }

    return no_of_words;
}


int main()
{
    char str[5][20];
    SortString(str, 5);
}