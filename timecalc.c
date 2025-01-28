#include <stdio.h>
#include <time.h>

time_t calculatehours() {
    time_t hours = 0;
    printf("How many hours? ");
    scanf("%ld", &hours);
    return hours;
}

time_t calculateminutes() {
    time_t minutes = 0;
    printf("How many minutes? ");
    scanf("%ld", &minutes);
    return minutes;
}

int main() {
    time_t hours1 = 0, minutes1 = 0, hours2 = 0, minutes2 = 0;
    time_t totalHours = 0, totalMinutes = 0;
    time_t days = 0;

    printf("First time input:\n");
    hours1 = calculatehours();
    minutes1 = calculateminutes();

    printf("Second time input:\n");
    hours2 = calculatehours();
    minutes2 = calculateminutes();

    totalHours = hours1 + hours2;
    totalMinutes = minutes1 + minutes2;

    totalHours += totalMinutes / 60;  // Convert excess minutes to hours
    totalMinutes = totalMinutes % 60;  // Keep minutes within 0-59

    days = totalHours / 24;  // Calculate full days
    totalHours = totalHours % 24;  // Keep hours within 0-23

    if (days > 0) {
        printf("Total time: %ld day%s and %02ld:%02ld\n", days, (days > 1 ? "s" : ""), totalHours, totalMinutes);
    } else {
        printf("Total time: %02ld:%02ld\n", totalHours, totalMinutes);
    }

    return 0;
}
