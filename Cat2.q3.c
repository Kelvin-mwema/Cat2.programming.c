//calculation of payment
/*
calculation of payment 
Author:CT101/G/24268/24
*/
#include <stdio.h>

int main() {
    float hours_worked, hourly_wage,gross_pay, taxes,net_pay,tax_1,tax_2;
    float regular_hours=40, overtime_pay;
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);
    
    if (hours_worked > regular_hours) {
        overtime_pay = (hours_worked - regular_hours) * hourly_wage * 1.5;
        gross_pay = (regular_hours * hourly_wage) + overtime_pay;
     }
      else {
        gross_pay = hours_worked * hourly_wage;
      }
    tax_1=gross_pay *0.15;
    tax_2=0.20*(gross_pay-600);
    
    if(gross_pay-600<0)
    {
     tax_2=0;
    }
    taxes =tax_1+tax_2;
    net_pay = gross_pay - taxes;


    //output 
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
