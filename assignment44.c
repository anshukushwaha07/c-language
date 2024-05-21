#include<stdio.h>

struct Employee
{
    int EmpId;
    char EmpName[20];
    int Salary;
}Emp1;

int main(){
    
    printf("Enter Employee Id,Name,salary\n");
    scanf("%d\n",&Emp1.EmpId);
    fgets(Emp1.EmpName,20,stdin);
    scanf("%d",&Emp1.Salary);


    printf("Employee Id %d\n",Emp1.EmpId);
    printf("Employee Name %s\n",Emp1.EmpName);
    printf("Employee Salary %d\n",Emp1.Salary);


    
}
