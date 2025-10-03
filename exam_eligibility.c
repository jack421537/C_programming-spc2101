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
 float attendance;
 float marks;
 //input attendance and average marks
 printf("enter attendance percentage: ");
 scanf("%f", &attendance);
 
 printf("enter average marks: ");
 scanf("%f", &marks);
 
 //check eligibility 
 if(attendance >=75 &&marks >=40){
 printf("eligible for final exam.\n");
 }else{
 printf("not eligible for final exam.\n");
 }
    return 0;
 }
