//monali vora 25ce140
#include <stdio.h>
int main() {
    float distance = 0;
    int minute = 0;
    while (1) {
        minute++;
        distance += 0.5;
        printf("Minute %d: Distance covered = %.1f km\n", minute, distance);
        if (distance >= 10.0)
            break;
    }
    printf("Marathon complete!\n");
    return 0;
}
