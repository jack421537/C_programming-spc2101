//simple program 
/*
Name: Jackson Mutinda 
RegNo: CT101/G/26534/25
Date:20 September,2025
description: //variable declaration 

*/
#include<stdio.h>
//main function 

int main()
{
    int age;
    int annual_income;
    //users friendly prompt for input 
    printf("---bank loan eligibility check---\n\n");
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your annual income: ");
    scanf("%d", &annual_income);
    
    //check eligibility criteria 
    if(age>=21 & annual_income>=21000){
    printf("magnificent! you qualify for the loan\n");
    } else {
    printf("unfortunately we are unable process your loan at the time\n");
    }
    
    return 0;
}
