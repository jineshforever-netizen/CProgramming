#include <stdio.h>

int main()
{

    // Assignment notation
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = (int)2.9; // Explicit cast to handle narrowing conversion

    printf("Bike count : %d\n", bike_count);
    printf("Truck count : %d\n", truck_count);
    printf("Vehicle count : %d\n", vehicle_count);
    printf("Narrowing conversion : %d\n", narrowing_conversion_assignment); // Will print 2 (narrowed from 2.9)

    // Check the size with sizeof
    printf("sizeof int : %lu\n", sizeof(int));
    printf("sizeof truck_count : %lu\n", sizeof(truck_count));

    return 0;
}
