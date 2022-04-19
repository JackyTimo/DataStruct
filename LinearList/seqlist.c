#include<stdio.h>
#include<malloc.h>
#define MaxSize 10
struct Seqlist
{
    //定义顺序表的长度
    int *data;
    //顺序表的当前长度即当前顺序表中所含元素的个数
    int length;
    
};

void InitList(struct Seqlist *s1){
   
   s1->data=(int *)malloc(sizeof(int)*MaxSize); 
   s1->length=0;
}



int main(){
    struct Seqlist s1;
    InitList(Seqlist*s1);
   
    
    
    return 0;
    
}