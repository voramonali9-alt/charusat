//monali vora 25ce140
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter rows ");
    scanf("%d", &rows);
    printf("Enter  seats : ");
    scanf("%d", &cols);
    char seats[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            seats[i][j] = 'A';
        }
    }  int choice, r, c;
    do {  printf("1. Display seating chart\n");
        printf("2. Reserve a seat\n");
        printf("3. Cancel a reservation\n");
        printf("4. Show seat summary\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\n A=Available, R=Reserved\n");
                for (int i = 0; i < rows; i++) {
                    printf("Row %d: ", i + 1);
                    for (int j = 0; j < cols; j++) {
                        printf("%c ", seats[i][j]);
                    }
                    printf("\n");
                }
                break;  case 2:
                printf(" row and seat  ");
                scanf("%d %d", &r, &c);
                if (r < 1 || r > rows || c < 1 || c > cols) {
                    printf("Invalid \n");
                } else if (seats[r - 1][c - 1] == 'R') {
                    printf(" reserved!\n");
                } else {
                    seats[r - 1][c - 1] = 'R';
                    printf("Seat reserved successfully.\n");
                }
                break;

            case 3:
                printf("Enter row and seat  to cancel: ");
                scanf("%d %d", &r, &c);
                if (r < 1 || r > rows || c < 1 || c > cols) {
                    printf("Invalid seat selection\n");
                } else if (seats[r - 1][c - 1] == 'A') {
                    printf("Seat is already available!\n");
                } else {
                    seats[r - 1][c - 1] = 'A';
                    printf("Reservation canceled successfully.\n");  }
                break;

            case 4:
                {
                    int reserved = 0, available = 0;
                    for (int i = 0; i < rows; i++) {
                        for (int j = 0; j < cols; j++) {
                            if (seats[i][j] == 'R') reserved++;
                            else available++;
                        }
                    }
                    printf("\nReserved Seats: %d\n", reserved);
                    printf("Available Seats: %d\n", available);
                }
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }  } while (choice != 0);
 return 0;
}
