#include<stdio.h>
int main(){
    int count=0;
    int lowercase=0;
    int upercase=0;

    char sent[18];

           scanf("%[^\n]",sent);
            for(int i =0;sent[i]!='\0';i++){
               if(sent[i]=='a'|| sent[i]=='e'|| sent[i]=='i'||sent[i]=='o'||sent[i]=='u'){
                lowercase++;
                printf(" lower%d ",lowercase); }
                 if(sent[i]=='A'|| sent[i]=='E'|| sent[i]=='I'||sent[i]=='O'||sent[i]=='U')
                { upercase++;
                    printf(" uper %d ",upercase);
                }
                 printf("\n");
                }
 return 0;
}
