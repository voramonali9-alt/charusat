#include <stdio.h>

int main() {
    int waterLevel = 0;     
    int capacity = 100;       
    int refillRate = 10;     
   while (waterLevel < capacity) {
        waterLevel += refillRate; 
  if (waterLevel > capacity)  
            waterLevel = capacity;
 printf("Current water level: %d liters\n", waterLevel);
    }
 printf("Tank is full.\n");
   return 0;
}
