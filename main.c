/*
    project: Gitonga's payroll
    author: Valentine
    date: 1st November 2021
    compiler: GCC
    Language: C99
    License: MIT

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[1000];
    int emp_name,emp_no,kra_pin,hours;
    int normal_pay,overtime_pay;
    float tax_paid,net_income;
    const int rate = 1000;

    //capture input
    printf("Gitonga's payroll!\n");
    printf("employee name: ");
    gets(name);
    printf("employee number: ");
    scanf("%d",&emp_no);
    printf("KRA pin: ");
    scanf("%d",&kra_pin);
    printf("hours worked: ");
    scanf("%d",&hours);

    //computation/processing
    if (hours > 40) {
        normal_pay = 40*rate;
        overtime_pay = (hours - 40)*1.5*rate;
    }
    else{
        normal_pay = hours*rate;
        overtime_pay = 0;
    }


    //output/print payroll
    printf("employee number:\t%d\n",emp_no);
    printf("employee name: \t%s\n",name);
    printf("normal pay: \t%d\n",normal_pay);
    printf("overtime pay: \t%d\n",overtime_pay);
    printf("tax paid: \t%d\n",tax_paid);
    printf("net income: \t%s\n",net_income);


    return 0;
}
