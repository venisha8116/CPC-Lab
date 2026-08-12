// 1. Input electricity unit charge and calculate the total electricity bill according to the given condition:

// - For first 50 units Rs. 0.50/unit
// - For next 100 units Rs. 0.75/unit
// - For next 100 units Rs. 1.20/unit
// - For unit above 250 Rs. 1.50/unit
// - An additional surcharge of 20% is added to the bill.

#include <stdio.h>

int main() {
    float units, bill, surcharge, totalBill;

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    /*
        Electricity charge slabs:

        First 50 units       -> Rs. 0.50 per unit
        Next 100 units       -> Rs. 0.75 per unit
        Next 100 units       -> Rs. 1.20 per unit
        Above 250 units      -> Rs. 1.50 per unit
    */

    if (units <= 50) {
        bill = units * 0.50;
    }
    else if (units <= 150) {
        // First 50 units at Rs. 0.50
        // Remaining units at Rs. 0.75
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250) {
        // First 50 units at Rs. 0.50
        // Next 100 units at Rs. 0.75
        // Remaining units at Rs. 1.20
        bill = (50 * 0.50)
             + (100 * 0.75)
             + ((units - 150) * 1.20);
    }
    else {
        // First 50 units at Rs. 0.50
        // Next 100 units at Rs. 0.75
        // Next 100 units at Rs. 1.20
        // Remaining units at Rs. 1.50
        bill = (50 * 0.50)
             + (100 * 0.75)
             + (100 * 1.20)
             + ((units - 250) * 1.50);
    }

    // Calculate 20% surcharge
    surcharge = bill * 0.20;

    // Add surcharge to the original bill
    totalBill = bill + surcharge;

    printf("Electricity Bill = Rs. %.2f\n", bill);
    printf("Surcharge (20%%) = Rs. %.2f\n", surcharge);
    printf("Total Bill = Rs. %.2f\n", totalBill);

    return 0;
}