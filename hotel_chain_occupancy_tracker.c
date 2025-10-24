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
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0, totalRooms = 0;

    srand(time(0)); // Initialize random number generator

    printf("=== Hotel Chain Occupancy Tracker ===\n\n");

    // Assign random occupancy (1 = occupied, 0 = vacant)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Random 0 or 1
            }
        }
    }

    // Calculate total number of occupied rooms across all branches
    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                    branchOccupied++;
                }
                totalRooms++;
            }
        }
        printf("Branch %d: Occupied Rooms = %d\n", branch + 1, branchOccupied);
    }

    printf("\n--- Overall Summary ---\n");
    printf("Total Rooms (All Branches): %d\n", totalRooms);
    printf("Total Occupied Rooms: %d\n", totalOccupied);
    printf("Total Vacant Rooms: %d\n", totalRooms - totalOccupied);

    return 0;
}