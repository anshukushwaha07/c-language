#include <stdio.h>

int LenghtStr(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
        ;

    return i;
}
char *reverse(char str[])
{

    char ch;
    int i, l;
    for (l = 0; str[i]; l++)
        ;
    for (i = 0; l / 2; i++)
    {
        ch = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = ch;
    }

    return str;
}
/*void reverse(char str[]){
    int i,l;
    char ch;
    for(i=0;str[i];i++);
    l=i-1;
    for(i=0;l/2;i++){
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf(" String in reverse %s",str);

}
*/
int Comp_String(char s1[], char s2[])
{

    int i = 0;
    for (i = 0; s1[i] && s2[i]; i++)
    {
        if (s1[i] != s1[1])
            return s1[i] - s2[i];
    }
    return s1[i] - s2[i];
}

void CompareString(char str[], char str1[])
{
    int count = 0;
    char temp[LenghtStr(str)];

    for (int i = 0; i <= LenghtStr(str); i++)
    {

        if (str[i] == str1[i])
        {
            // count++;
            temp[i] = str[i];
        }
    }

    for (int i = 0; i <= LenghtStr(str); i++)
    {
        if (temp[i] == str[i])
        {
            // if(count==LenghtStr(str)){
            printf(" String are same \n");
        }
    }
}
char* UpperCase(char str[]){

    for(int i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
        str[i] =str[i]-32;
    }
    return str;

}

char* LowerCase(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
    }
    return str; 
}
void Upper_string(char str[])
{

    for (int i = 0; str[i]; i++)
    {

        if (str[i] >= 97)
        {
            str[i] = str[i] - 32;
        }
    }

    printf(" upper case %s ", str);
}

void Lower_string(char str[])
{

    for (int i = 0; str[i]; i++)
    {

        if (str[i] <= 97)
        {
            str[i] = str[i] + 32;
        }
    }

    printf(" upper case %s ", str);
}

int main()
{
    int n;
    char str[] = "Anshu";
    printf("Reverse sting is \n");
    // char str1[]="Anshu";
    // n=LenghtStr(str);
    // printf("lenght of string %d ",n);
    // Reverse(str);
    // CompareString(str,str1);
    // Upper_string(str);
    // Lower_string(str);
    printf("Reverse String %s", reverse(str));
}