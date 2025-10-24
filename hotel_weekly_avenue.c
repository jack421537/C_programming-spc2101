 //simple C program (Hello world)
 /*
 Name: Jackson Mutinda 
 Reg No:CT101/G/26534/25
 Date:24/10/2025
 Description: c program based on arrays 
 */
 #include <stdio.h>

int main() {
    float revenue[7];   // Array to store revenue for 7 days
    float total = 0, average;
    int i;

    printf("=== Hotel Weekly Revenue Tracker ===\n");

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Add to total
    }

    // Calculate average revenue
    average = total / 7;

    // Display results
    printf("\n--- Weekly Summary ---\n");
    printf("Total weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}