#include <stdio.h>
#include <string.h>

int main() {
    // input variables
    char vehicleCode;
    int hoursParked;

    // program variables
    char vehicleType[6];
    double parkingRate = 0, payAmount;

    printf("Vehicle code (C, B, T): ");
    scanf("%c", &vehicleCode);

    printf("Number of hours parked: ");
    scanf("%d", &hoursParked);

    switch (vehicleCode) {
    case 'C':
    case 'c':
        strcpy(vehicleType, "Car");
        parkingRate = 1.0;
        break;
    case 'B':
    case 'b':
        strcpy(vehicleType, "Bus");
        parkingRate = 2.0;
        break;
    case 'T':
    case 't':
        strcpy(vehicleType, "Truck");
        parkingRate = 3.0;
        break;
    default:
        printf("Please enter a valid vehicle type.\n");
        return 1;
    }
    payAmount = parkingRate * (double)hoursParked;

    printf(
        "\n"
        "Parking Ticket\n"
        "==============\n"
        "Vehicle Type         :    %s\n"
        "Hours Parked         :    %d\n"
        "Parking Rate / Hr    :    $ %.2f\n"
        "Amount to Pay        :    $ %.2f\n",
        vehicleType, hoursParked, parkingRate, payAmount
    );
}