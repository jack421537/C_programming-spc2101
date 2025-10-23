 //simple C program (Hello world)
 /*
 Name: Jackson Mutinda 
 Reg No:CT101/G/26534/25
 Date: 12/10//2025
 Description: c program based on while loopà
 */
 #include<stdio.h> // preprocessor directive scan (). printf()//main function 
 //main functions 
#include <stdio.h>

int main() {
    int i;
    // --- While Loop: ATM withdrawals ---
    float balance, withdraw;
    printf("\nEnter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;
        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
            printf("Balance is zero or negative!\n");
    }
    return 0;
}