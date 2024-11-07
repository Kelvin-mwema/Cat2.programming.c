//c structures 
/*c structures 
Author Kelvin Mwema Mutua 
Registration number CT101/G/24268/24
Date 7 Nov 2024
*/
#include<stdio.h>
#include<string.h>
struct employee{
char name[25],email[50],department [29];
int id;
float salary;
};

int main() {
struct  employee Employee1;
strcpy (Employee1.name,"John Doe");
Employee1.id=12345;
Employee1.salary=55000.50;
strcpy(Employee1. email,"john.doe@company.com");
strcpy (Employee1.department,"Human resource");

printf ("Name: %s\n",Employee1.name);
printf ("ID: %d\n",Employee1.id);
printf ("Department: %s\n",Employee1.department);
printf ("Salary: %.2lf\n",Employee1.salary);

return 0;;
}
