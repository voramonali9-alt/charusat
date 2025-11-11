#include <stdio.h>

int main()
{
    long population = 1441981744;
    float women_percent = 48.4;
    float literacy_total = 85.95;
    float literacy_men = 80.95;
    float literacy_women = 62.84;

    long women = (long)(population * women_percent / 100);
    long men = population - women;

    long literate_men = (long)(men * literacy_men / 100);
    long illiterate_men = men - literate_men;

    long literate_women = (long)(women * literacy_women / 100);
    long illiterate_women = women - literate_women;

    long total_literate = literate_men + literate_women;
    long total_illiterate = illiterate_men + illiterate_women;

  
    printf("%-20s %-20s %-20s\n", "Category", "Literate", "Illiterate");
 
    printf("%-20s %-20ld %-20ld\n", "Men", literate_men, illiterate_men);
    printf("%-20s %-20ld %-20ld\n", "Women", literate_women, illiterate_women);
    
    printf("%-20s %-20ld %-20ld\n", "Total", total_literate, total_illiterate);
  
    float gap = literacy_men - literacy_women;
    printf("\nLiteracy gap between men and women: %.2f%%\n", gap);

    float new_women_literacy = literacy_women + 5;
    long new_literate_women = (long)(women * new_women_literacy / 100);
    long new_illiterate_women = women - new_literate_women;

    printf("\nIf women's literacy improves by 5%%:\n");
    printf("New literate women: %ld\n", new_literate_women);
    printf("New illiterate women: %ld\n", new_illiterate_women);

    return 0;
}
