#include<stdio.h>
#include<string.h>


void Swap(char s1[],char s2[]){
    char ch[100];
    strcpy(ch,s1);
    strcpy(s1,s2);
    strcpy(s2,ch);

}

void sort(int *ptr,int size){
    int temp=0;
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(ptr[j]>ptr[j+1]){
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}


void merge(int *arr1,int *arr2,int size1,int size2,int *arr3,int size3){
    int i,j,k;
    for(i=0,j=0,k=0;i<size1 && j<size2;k++){

        if (arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
           j++;
        }
    }

    while(i<size1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    

}


int valueShift(int arr[],int size){
    int right=size-1;
    int left=0,temp;
    int loc=0;
    while(left<right)
    {
        
        while(left<right && arr[loc]<arr[right])
           right--;
               
        if(left==right)
        break;
        temp=arr[right];
        arr[right]=arr[loc];
        arr[loc]=temp;
        loc=right;
        while(left<right&&arr[left]<arr[loc])
            left++;
        if(left==right)
            break;
        temp=arr[left];
        arr[left]=arr[loc];
        arr[loc]=temp;
        loc=left;

    }
    return loc;
}

