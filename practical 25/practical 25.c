#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5
#define MAX_NAME_LEN 20


char books[MAX_BOOKS][MAX_NAME_LEN] = {
    "C Programming",
    "Python Basics",
    "Digital Logic",
    "Physics Vol 1",
    "Maths Notes"
};
int isAvailable[MAX_BOOKS] = {1, 1, 1, 1, 1};

void displayBooks();
int getTotalBooks();
void borrowBook(char bookName[]);
float calculateFine(int daysLate);

int main() {
    int choice, lateDays;
    char name[MAX_NAME_LEN];
    float fine;

    while(1) {
        printf("\nLibrary Menu:\n");
        printf("1. Display available books\n");
        printf("2. Get total number of books\n");
        printf("3. Borrow a book\n");
        printf("4. Calculate fine for overdue book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                displayBooks();
                break;
            case 2:
                printf("Total books: %d\n", getTotalBooks());
                break;
            case 3:
                printf("Enter book name to borrow: ");
                fgets(name, MAX_NAME_LEN, stdin);
                name[strcspn(name, "\n")] = 0;
                borrowBook(name);
                break;
            case 4:
                printf("Enter days overdue: ");
                scanf("%d", &lateDays);
                fine = calculateFine(lateDays);
                printf("Fine amount = %.2f\n", fine);
                break;
            case 5:
                printf("Goodbye!\n");
                printf("this program is made by Angel_Bavarva_25CE006");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}


void displayBooks() {
    printf("Available books:\n");
    for(int i = 0; i < MAX_BOOKS; i++) {
        if(isAvailable[i])
            printf("%s\n", books[i]);
    }
}

int getTotalBooks() {
    return MAX_BOOKS;
}

void borrowBook(char bookName[]) {
    for(int i = 0; i < MAX_BOOKS; i++) {
        if(strcmp(bookName, books[i]) == 0) {
            if(isAvailable[i]) {
                isAvailable[i] = 0;
                printf("You borrowed \"%s\" successfully.\n", books[i]);
            } else {
                printf("Book \"%s\" is already borrowed.\n", books[i]);
            }
            return;
        }
    }
    printf("Book not found in inventory.\n");
}

float calculateFine(int daysLate) {
    float finePerDay = 2.0;
    if(daysLate <= 0)
        return 0.0;
    return daysLate * finePerDay;
}
