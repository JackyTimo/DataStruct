#include<stdio.h>

//�������󳤶�20
#define MAXlength 20

//���Ա�Ķ���
struct certainlengthsqllist
{
    int element[MAXlength];
    //���Ա�ĵ�ǰ����
    int length;
};

//���Ա�ĳ�ʼ��
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
