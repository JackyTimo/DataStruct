#include<stdio.h>

//数组的最大长度20
#define MAXlength 20

//线性表的定义
struct certainlengthsqllist
{
    int element[MAXlength];
    //线性表的当前长度
    int length;
};

//线性表的初始化
void InitList(struct certainlengthsqllist *L){
    int i=0;
    for(i=0;i<MAXlength;i++){
     L->element[i]=0;
     L->length=0;
    }
}
int main(){
    struct certainlengthsqllist sql;
    InitList(&sql);
    int a=0;
    int count=0;
    for(a=0;a<MAXlength;a++){
    printf("%d\n",sql.element[a]);
    count++;
    }
     printf("%d\n",count);
     printf("%d",sql.length);
    return 0;
}
