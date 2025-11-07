#include<stdio.h>
int main(){
    int arr[10],n,i,asum,esum,missing;
    asum=0;
    printf("enter the size of the array");
    scanf("%d",&n);
     
    for(int i=0;i<n-1;i++)
    {
        printf("enter arr[%d]=",i);
        scanf("%d",&arr[i]);
        asum=asum+arr[i];
    
    }
    esum=(n*(n+1))/2;
    missing=esum-asum;
    
    printf("the content of array is:\n");
   for(int i=0;i<n-1;i++){
       printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("%d",esum);
    printf("%d",asum);
    printf("%d",missing);
    return 0;
}
