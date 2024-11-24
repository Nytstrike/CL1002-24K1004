// Design a structure to store information about travel packages, including package name,
// destination, duration, cost, and number of seats available. Write a program that allows
// users to book a travel package and display available packages.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char package_name[15];
    char destination[15];
    char duration[10];
    float cost;
    int seats;
} Packages;

char admin_log[] = "Whatup";

void package_initial(Packages package1[], int size) {
    for (int i = 0; i < size; i++) {
        getchar(); // To consume leftover newline
        printf("Enter Package name: ");
        fgets(package1[i].package_name, 15, stdin);
        package1[i].package_name[strcspn(package1[i].package_name, "\n")] = 0; // Remove newline

        printf("Enter destination name: ");
        fgets(package1[i].destination, 15, stdin);
        package1[i].destination[strcspn(package1[i].destination, "\n")] = 0; // Remove newline

        printf("Enter package duration: ");
        fgets(package1[i].duration, 10, stdin);
        package1[i].duration[strcspn(package1[i].duration, "\n")] = 0; // Remove newline

        printf("Enter cost: ");
        scanf("%f", &package1[i].cost);

        printf("Enter number of seats: ");
        scanf("%d", &package1[i].seats);
    }
}

int search_seats(Packages pack[], int size, char *destination) {
    for (int i = 0; i < size; i++) {
        if (strcasecmp(pack[i].destination, destination) == 0) {
            return pack[i].seats > 0 ? i : -1; // Return index if seats available, else -1
        }
    }
    return -1; // Destination not found
}

void book_seat(Packages pack[], int size, char *destination) {
    int index = search_seats(pack, size, destination);
    if (index != -1) {
        pack[index].seats--;
        printf("Your package has been booked.\nFurther info will be communicated later.\nThanks for choosing My Tours!\n");
    } else {
        printf("No seats available or invalid destination.\n");
    }
}

void display(Packages pack[], int size) {
    if (size == 0) {
        printf("No packages available.\n");
        return;
    }

    printf("The Packages Available are:\n");
    for (int i = 0; i < size; i++) {
        printf("Package #%d\n", i + 1);
        printf("Package name: %s\n", pack[i].package_name);
        printf("Destination: %s\n", pack[i].destination);
        printf("Package Cost: %.2f\n", pack[i].cost);
        printf("Package duration: %s\n", pack[i].duration);
        printf("Seats available: %d\n\n", pack[i].seats);
    }
}

int main() {
    Packages package[15];
    int size = 0;
    int choice;
    char temp[15];

    while (1) {
        printf("\n\n4Choose the operation:\n");
        printf("Press 1 to enter package info\n");
        printf("Press 2 to display packages\n");
        printf("Press 3 to book a package\n");
        printf("Press 4 to exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter passcode: ");
            getchar(); // To consume leftover newline
            fgets(temp, 15, stdin);
            temp[strcspn(temp, "\n")] = 0; // Remove newline

            if (strcmp(temp, admin_log) == 0) {
                printf("Access Granted\n");
                printf("Enter number of packages: ");
                scanf("%d", &size);
                package_initial(package, size);
            } else {
                printf("Access Denied\n");
            }
            break;

        case 2:
            display(package, size);
            break;

        case 3:
            if (size > 0) {
                printf("Enter destination: ");
                getchar(); // To consume leftover newline
                fgets(temp, 15, stdin);
                temp[strcspn(temp, "\n")] = 0; // Remove newline
                book_seat(package, size, temp);
            } else {
                printf("No packages available.\n");
            }
            break;

        case 4:
            printf("Thank you for visiting My Tours!\n");
            exit(0);

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
