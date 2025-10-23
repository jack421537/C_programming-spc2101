 //simple C program (Hello world)
 /*
 Name: Jackson Mutinda 
 Reg No:CT101/G/26534/25
 Date: 12/10/2025
 Description: c program based on loops 
 */
 #include<stdio.h> // preprocessor directive scan (). printf()//main function 
 //main functions 
#include <stdio.h>

int main() {
    // --- Do While Loop: Password System ---
    int password;
    do {
        printf("\nEnter password: ");
        scanf("%d", &password);
        if (password != 1234)
            printf("Incorrect password! Try again.\n");
    } while (password != 1234);

    printf("Access Granted.\n");

    return 0;
}