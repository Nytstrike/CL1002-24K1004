Create a program with a constant that defines the maximum allowable temperature (in
Celsius). Write a function to compare input temperatures and use a static variable to
count how many times temperatures exceeded the limit.
#include <stdio.h>
#define MAX_ALLOWABLE_TEMP 35
void checkTemperature(float temperature) {
    static int exceedCount = 0;

    if (temperature > MAX_ALLOWABLE_TEMP) {
        exceedCount++;
        printf("Temperature %.2fC exceeds the maximum allowable limit of %dC.\n", temperature, MAX_ALLOWABLE_TEMP);
    } else {
        printf("Temperature %.2fC is within the allowable limit.\n", temperature);
    }

    printf("Number of exceedances so far: %d\n", exceedCount);
}

int main() {
    float temp;

    printf("Enter temperatures (negative value to stop):\n");
    while (1) {
        printf("Enter temperature: ");
        scanf("%f", &temp);
        if (temp < 0) {
            printf("Exiting program.\n");
            break;
        }
        checkTemperature(temp);
    }
    return 0;
}
