//monali vora 25ce140
#include <stdio.h>
#include <string.h>
void reverse(char word[]) {
    int i, j;
    char temp;
    j = strlen(word) - 1;
    for(i = 0; i < j; i++, j--) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;  }}
int main() {
    FILE *f1, *f2;
    char word[100];
 f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");
  if(f1 == NULL || f2 == NULL) {
        printf("File not found!\n");
        return 1;}
 while(fscanf(f1, "%s", word) != EOF) {
        reverse(word);
        fprintf(f2, "%s ", word);
    }
printf("All words reversed\n");
fclose(f1);
 fclose(f2);
  return 0;
}
