 //simple C program (Hello world)
 /*
 Name: Jackson Mutinda 
 Reg No:CT101/G/26534/25
 Date:18/09/29/2025
 Description: prompt user information 
 */
 #include<stdio.h> // preprocessor directive scan (). printf()//main function 
 //main function 
int main(){
 float height;
 float bank_balance;
 char phone_number;
 
 //prompt for height 
 printf("enter your height(in meters):");
 scanf("%f", &height);
 //prompt for bank balance 
 printf("enter your bank balance");
 scanf("%f", &bank_balance);
 //prompt for phone number 
 printf("enter your phone number");
 scanf("%s", phone_number);
 
 //display the entered information 
 printf("\n---your information---\n");
 printf("Height: %.2f meters\n", height);
 printf("Bank balance:$%.2f\n",bank_balance);
 printf("Phone number: %s\n", phone_number);
 
    return 0;
 }