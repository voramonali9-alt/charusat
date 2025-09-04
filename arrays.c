#include<stdio.h>
int main(){
    int arr[10],i,asum,esum,missing;
    asum=0;
    printf("enter the size of the array");
    scanf("%d",&n);
     
    for(int i=0;i<n-1;i++)
    {
        printf("enter arr[%d]=",i);
        scanf("%d",&arr[i]);
        asum=asum+arr[i];
     printf("asum=%d",asum);
      esum=(n*(n+1))/2;
      printf("%d",esum);
        missing=esum-asum;
        printf("missing=%d",missing);
    }
    printf("the content of array is:\n");
   /for(int i=0;i<n;i++){
       printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}
