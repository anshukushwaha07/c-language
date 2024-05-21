#include<stdio.h>


// void unique(int a[],int x){
//     for(int i=0;i<x;i++)
//     scanf("%d",&a[i]); 
//     for(int j=0;j<x;j++){
//         for(int k=0;k<x;k++){
//             if(a[j]^a[k]!=0){
//                 printf("%d",a[j]);
//                 break;
//             }
//         }
       
//     }
// }

void swap(int a[],int x,int k,int y){
    int temp=0;
    for(int i=0;i<x;i++){
      scanf("%d",&a[i]);
    }
   
   if(k<=x && y<=x){
      temp=a[k];
      a[k]=a[y];
      a[y]=temp;
   }

   for(int j=0;j<x;j++){
    printf("%d ",a[j]);
   }
    
}
void swap2(int a[],int x,int y){

    int temp=0;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp; 

}
void dublicate(int a[], int x)
{
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        scanf(" %d", &a[i]);
        
    }

    for (int j = 1; j < x; j++)
    {
        for (int k = 0; k < x-1; k++)
        {
            if (a[j] == a[k])
            {
                count++;   
                break; 
            }
        }
    }
    printf(" %d ",count);
}

int main(){
    /* int aar[6],a,b,c;
       swap(aar,6,4,2); */

    int arr[5],n;
    dublicate(arr, 5); 

    //  int arr[5], n=0;
    //  unique(arr, 5);
    


}