// 2. Display the current Date & Time. [#include for time and ctime function and time_t datatype.]

#include <stdio.h>
#include <time.h>

int main() {
    // Declare a variable of type time_t to store the calendar time
    time_t current_time;

    // Fetch the current system time
    time(&current_time);

    // Convert time_t to a readable string format and print it
    printf("Current Date & Time: %s", ctime(&current_time));

    return 0;
}
