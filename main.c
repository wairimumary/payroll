/***********
Project:Payslip program
Author: Mary Wairimu
Date :Oct,2021
Compiler :GCC
Language:C99
Lisence:MIT

************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[100];
    int emp_no,hours;
    int normal_pay,overtime_pay,gross;
    float tax, net;
    const int rate=1000;

    printf("Gitonga's Factory payslip system!\n");
    printf("Employee name:");
    gets(name);
    printf("Employee number:");
    scanf("%d",&emp_no);
    printf("hours worked:");
    scanf("%d",&hours);
    //computation
    if(hours>40){
        normal_pay=40*rate;
        overtime_pay=(hours-40)*1.5*rate;

    }
    else{
            normal_pay=hours*rate;
            overtime_pay=0;


    }

    gross=normal_pay+overtime_pay;
    tax=0.16 *gross;
    net=gross -tax;
    //print payslip
    printf("emp no:\t%d\n",emp_no);
    printf("employee name:\t%s\n",name);
    printf("normal_pay:\t%d\n",normal_pay);
    printf("overtime:\t%d\n",overtime_pay);
    printf("gross pay:\t%d\n",gross);
    printf("tax:\t%f\n",tax);
    printf("net pay:\t%f\n",net);




    return 0;
}
