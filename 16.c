//monali vora 25ce140
#include <stdio.h>

int main() {
    int total = 21;    
    int userPick, computerPick;

  
    
    printf("1. There are 21 matchsticks.\n");
    printf("2. You can pick 1 to 4 matchsticks on your turn.\n");
    printf("3. Whoever picks the last matchstick loses the game.\n");
    printf("Let's begin!\n\n");

    while (total > 1) {
       
        printf("Your turn! Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &userPick);

       
        if (userPick < 1 || userPick > 4) {
            printf("Invalid choice! Please pick between 1 and 4 matchsticks.\n");
            continue;
        }

      
        total -= userPick;
        printf("You picked %d matchstick(s). Matchsticks left: %d\n", userPick, total);

        
        if (total == 1) {
            printf("\nOnly one matchstick left!\n");
            printf("You are forced to pick the last matchstick. You lose!\n");
            printf("Computer wins! \n");
            break;
        }

     
        computerPick = 5 - userPick;
        total -= computerPick;

        printf("Computer picks %d matchstick(s). Matchsticks left: %d\n", computerPick, total);

        if(total==1){
            printf("\nOnly one matchstick left!\n");
            printf(" You win! \n");
            break;
        }
    }
 return 0;
}
