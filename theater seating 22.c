#include <stdio.h>

int main() {
    char seating[5][10];
    int row, seat;
    int reserved_seat;


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            seating[i][j] = '0';
        }
    }
    printf("Enter number of seats to reserve: ");
    scanf("%d", &reserved_seat);

    for (int i = 0; i < reserved_seat; i++) {
        printf("Enter row (1-5) and seat (1-10): ");
        scanf("%d %d", &row, &seat);

        if (row <= 0 || row > 5 || seat <= 0 || seat > 10) {
            printf("Invalid row or seat number! Try again.\n");
            i--; // repeat this reservation attempt
            continue;
        }

        if (seating[row - 1][seat - 1] == 'x') {
            printf("Seat already reserved! Choose another.\n");
            i--;
        } else {
            seating[row - 1][seat - 1] = 'x';
        }
    }


    printf("\nSeating chart:\n");
    for (int i = 0; i < 5; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%c ", seating[i][j]);
        }
        printf("\n");
    }

    return 0;
}

