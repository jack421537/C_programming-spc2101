 //simple C program (Hello world)
 /*
 Name: Jackson Mutinda 
 Reg No:CT101/G/26534/25
 Date: 18/09/2025
 Description: semester units 
 */
 #include<stdio.h> // preprocessor directive scan (). printf()//main function 
 //main function 
int main(){
    int units;
    float bill;

    // Input units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate bill using if-else
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = units * 25;
    } else {
        bill = units * 30;
    }

    // Output with 2 decimal places
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}