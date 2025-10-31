 /*
NAME:GIDEON WANJOHI
REG NO: CT100/G/26133/25
DESCRIPTION: 2D-array-occupancy[5][10]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int occupancy[5][10];
    printf("\nEnter occupancy data for one branch (1 = occupied, 0 = vacant):\n");
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            printf("Floor %d, Room %d: ", floor + 1, room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    printf("\nRoom occupancy per floor:\n");
    for (int floor = 0; floor < 5; floor++) {
        int occupiedCount = 0, vacantCount = 0;
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupiedCount++;
            else
                vacantCount++;
        }
        printf("Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupiedCount, vacantCount);
    }
return 0;
}