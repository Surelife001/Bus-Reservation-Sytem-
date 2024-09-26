#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Define a structure to store bus information
struct Bus {
    int busNumber;
    char source[50];
    char destination[50];
    int totalSeats;
    int availableSeats;
    float fare;
};

// Define a structure to store passenger information
struct Passenger {
    char name[50];
    int age;
    int seatNumber;
    int busNumber;
};

// Define a structure to store user login information
struct User {
    char username[50];
    char password[50];
};

// Function to display the main menu
void displayMainMenu() {
    printf("\n=== Bus Reservation System ===\n");
    printf("1. Login\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
}

// Function to display the user menu
void displayUserMenu() {
    printf("\n=== User Menu ===\n");
    printf("1. Book a Ticket\n");
    printf("2. Cancel a Ticket\n");
    printf("3. Check Bus Status\n");
    printf("4. Logout\n");
    printf("Enter your choice: ");
}

// Function to perform user login
int loginUser(struct User users[], int numUsers, char username[], char password[]) {
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return i; // Return the index of the logged-in user
        }
    }
    return -1; // Return -1 if login fails
}

// Function to book a ticket
void bookTicket(struct Bus buses[], int numBuses, struct Passenger passengers[], int* numPassengers, int userId) {
    // Implement ticket booking logic here
    // Update bus availability and passenger details
    // ...
}

// Main function
int main() {
    // Initialize buses, passengers, and users (you can use arrays or dynamic memory)
    // ...

    int currentUser = -1; // No user logged in initially

    while (true) {
        displayMainMenu();
        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            // Handle user login
            // ...
        } else if (choice == 2) {
            printf("Exiting. Have a nice day!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
