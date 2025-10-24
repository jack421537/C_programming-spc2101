 //simple C program (Hello world)
 /*
 Name: Jackson Mutinda 
 Reg No:CT101/G/26534/25
 Date:24/10/2025
 Description: c program based on arrays 
 */
 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];   // 2D array: 5 floors, 10 rooms per floor
    int floor, room;
    int occupiedCount, vacantCount;

    // Seed random number generator (to simulate occupancy)
    srand(time(0));

    printf("=== Hotel Room Occupancy Tracker ===\n\n");

    // Generate random occupancy data (1 = occupied, 0 = vacant)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;  // Random 0 or 1
        }
    }

    // Display occupancy summary per floor
    for (floor = 0; floor < 5; floor++) {
        occupiedCount = 0;
        vacantCount = 0;

        // Count rooms
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupiedCount++;
            else
                vacantCount++;
        }

        // Display results for this floor
        printf("Floor %d:\n", floor + 1);
        printf("  Occupied Rooms: %d\n", occupiedCount);
        printf("  Vacant Rooms:   %d\n", vacantCount);
        printf("------------------------\n");
    }

    return 0;
}