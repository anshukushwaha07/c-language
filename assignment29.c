#include <stdio.h>

int input(int n[], int x)
{
  int s = 0;
  printf("Enter the values to sum \n ");
  for (int i = 0; i < x; i++)
  {
    scanf(" %d", &n[i]);
    s = s + n[i];
  }
  return s;
}

int inputAvg(int n[], int x)
{
  int s = 0;
  printf("Enter the values to sum \n ");
  for (int i = 0; i < x; i++)
  {
    scanf(" %d", &n[i]);
    s = s + n[i];
  }
  return s / 10;
}

void Even_Odd_Sum(int n[], int x)
{
  int e = 0, o = 0;
  printf("Enter the values to sum \n ");
  for (int i = 0; i < x; i++)
  {
    scanf(" %d", &n[i]);
    if (n[i] % 2 == 0)
    {
      e = e + n[i];
    }
    else
    {
      o = o + n[i];
    }
  }

  printf("Sum of even %d \n Sum of even Num %d ", e, o);
}

/*int Greatest_Number(int n[], int x)
{

  for (int i = 0; i < x; i++)
  {
    scanf("%d", &n[i]);
  }
  for (int i = 0; i < x; i++)
  {
    if (n[i] > n[i + 1])
    {
      return n[i];
    }
    else
    {
      n[i] = n[i + 1];
    }
  }
}*/

/*int smallest_Number(int n[]){
  for(int i=0;i<9;i++){
    scanf(" %d ", &n[i]);
  }
  for(int i =0; i<10;i++){
    if(n[i+1]>n[i]){
      return n[i+1];
    }
    else{
      n[i+1]=n[i];
    }
  }
} */

int Greatest_number(int n[])
{
  for (int i = 0; i < 9; i++)
  {
    scanf(" %d ", &n[i]);
  }
  int max = 0;
  max = n[0];
  for (int i = 1; i < 10; i++)
      if(max<n[i])
         max=n[i];

         return max;
}

int smallest_number(int n[])
{
  for (int i = 0; i < 9; i++)
  {
    scanf(" %d ", &n[i]);
  }
  int min = 0;
  min = n[0];
  for (int i = 1; i < 10; i++)
      if(min>n[i])
         min=n[i];

         return min;
}

int main()
{

  /* int arr[10],s;
   s=input(arr,10);
   printf("Sum of 10 Values %d \n",s); */
  // q1
  /* int arr[10],s;
     s=inputAvg(arr,10);
     printf("Avg of 10 Values %d \n",s);  q2
   */

  /* int arr[10],s;
  Even_Odd_Sum(arr,10); */

  /*int arr[10], s;
  s = Greatest_number(arr);
  printf("Grestest no. of  10 Values %d \n", s);*/

   int arr[10], s;
   s = smallest_number(arr);
   printf("smallest  of  10 Values %d \n", s);
}