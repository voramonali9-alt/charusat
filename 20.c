//monali vora 25ce140
#include <stdio.h>

int main() {
    int n;
  
    scanf("%d", &n);
    
    int ids[n - 1];
    printf("Enter %d participant IDs:\n", N - 1);
    
    int sum = 0, totalSum = N * (N + 1) / 2;
    
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &ids[i]);
        sum += ids[i];
    }
    
    int missingID = totalSum - sum;
    printf("Missing Participant ID: %d\n", missingID);
    
    return 0;
}
