/*��̬�����˳���Ĳ���
1.���ȶ���һ�����������Ա�ṹ���������Ա�ṹ���г�ʼ��
2.������һ�����Ա���������ɵ����Ա���������ԭ�е����Ա��ҿ������µ��ڴ�
3.���ɵ����Ա���ڴ��ͷŵ�
*/
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10

//����˳���Ķ���
struct List
{
   int *a;   //˳����һ��Ԫ�صĵ�ַ 
   int length;  //˳���ĵ�ǰ����
   int size;   //˳�����������
}list1;


//˳���ĳ�ʼ��
void InitList(struct List *L)
{
   //list1��*aָ���¿��ٵ�10��int��������׵�ַ
   L->a=(int*)malloc(sizeof(int)*MaxSize);

   //˳���ĵ�ǰ����Ϊ0�����¿��ٵ�10����������û���κζ����������Ĭ��ֵΪ0
   L->length=0;

   //��������˳����е��������
   L->size=MaxSize;

}

//����ռ�,lenΪ��Ҫ����������С
void IncreaceList(struct List *L,int len){
int *p=L->a;
L->a=(int*)malloc((L->size+len)*sizeof(int));
int i=0;
for(i=0;i<L->size;i++){
   L->size=p[i];
}
L->length=L->length+len;

//��ԭ����ʼ���ɵ�data������ͷŵ�
free(p);
}


int main(){

   InitList(&list1);
   IncreaceList(&list1,3);
   return 0;
}



