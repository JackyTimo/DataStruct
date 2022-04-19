#include<stdio.h>
#include<malloc.h>
int main(){
    int *p;
    int n=0;
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    if(p!=NULL){
     printf("succeed operate!\n");
     p[0]=1;
    }
    printf("p[0]=%d",p[0]);
    free(p);
    return 0;
}