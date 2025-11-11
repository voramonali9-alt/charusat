#include <stdio.h>
#include <stdlib.h>

int main() {
    char *summary;
    int initial_size, new_size;

   
    scanf("%d", &initial_size);
    getchar(); 
  
    summary = (char *)calloc(initial_size, sizeof(char));

    if (summary == NULL) {
      
        return 1;
    }

   
    fgets(summary, initial_size, stdin);

    printf("\nInitial Summary:\n%s", summary);

   
  
    scanf("%d", &new_size);
    getchar(); 

    summary = (char *)realloc(summary, new_size * sizeof(char));

    if (summary == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

  
    fgets(summary, new_size, stdin);

    printf("\nUpdated Article Summary:\n%s", summary);

   
    free(summary);

   
    return 0;
}
