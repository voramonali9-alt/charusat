//monali vora 25ce140
#include<stdio.h>
int main(){
int n=5;
for(int i=5;i>=1;i--){
for(int s=0;s<5-i;s++){
printf("  ");}
for(int j=i;j>=1;j--){
printf("%d",j);}
for(int j=2;j<=i;j++){
printf("%d",j);}
printf("\n");}
for(int i=2;i<=n;i++){
for(int s=0;s<n-i;s++){
printf("  ");}
for(int j=i;j>=1;j--)
printf("%d",j);
  for(int j=2;j<=i;j++)
    printf("%d",j);
printf("\n");}
return 0;
}


