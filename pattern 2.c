//monali vora 25ce140
#include<stdio.h>
int main(){
int n=5;
for(int i=1;i<=n;i++){
for(int j=1;j<=2*n-1;j++){
if(j==i ||j==(2*n-i))
printf("%d",j);
else if(i==1)
printf("%d",j);
else
printf(" ");
}
printf("\n");
}
return 0;
}

