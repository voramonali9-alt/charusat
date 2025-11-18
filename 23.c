//monali vora 25ce140
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter fruit prices for %d days:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int minPrice = prices[0];
    int maxProfit = 0;
    int buyDay = 1, sellDay = 1;

    for (int i = 1; i < n; i++) {
        int profit = prices[i] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
            sellDay = i + 1; 
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
            buyDay = i + 1;
        }
    }

   
    if (maxProfit > 0)
        printf("Buy on Day %d and Sell on Day %d for Maximum Profit = %d\n", buyDay, sellDay, maxProfit);
    else
        printf("No profit possible. Prices only decrease or stay same.\n");

    return 0;
}
