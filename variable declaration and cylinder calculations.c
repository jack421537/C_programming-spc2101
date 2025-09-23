//simple program 
/*
Name: Jackson Mutinda 
RegNo: CT101/G/26534/25
Date:20 September,2025
description: //variable declaration and cylinder calculations 

*/
#include<stdio.h>
#include<math.h>

#define PI 3.142
//main function 

int main(){
    double radius;
    double height;
    double volume;
    double surface_area;
    //prompt user for input 
    printf("enter radius of the cylinder: ");
    scanf("%lf", & radius);
    
    printf("enter height of the cylinder: ");
    scanf("%lf", & height);
    
    //calculate the volume: V = πr²h
    volume = PI * pow(radius, 2) * height;
    
    //calculate the surface area : SA = 2πr² + 2πrh
    surface_area=(2 * PI * pow(radius, 2)) +(2 * PI * radius * height);
    
    //results 
    printf("\ncylinder calculations:\n");
    printf("Radius: %.2f\n", radius);
    printf("Height: %.2f\n", height);
    printf("Volume: %.2f\n", volume);
    printf("surface area: %.2f\n", surface_area);
    
    return 0;
}