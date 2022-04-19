/*动态分配的顺序表的步骤
1.首先定义一个基本的线性表结构，并对线性表结构进行初始化
2.新生成一个线性表，这个新生成的线性表是扩充了原有的线性表并且开辟了新的内存
3.将旧的线性表的内存释放掉
*/
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10

//定长顺序表的定义
struct List
{
   int *a;   //顺序表第一个元素的地址 
   int length;  //顺序表的当前长度
   int size;   //顺序表的最大容量
}list1;


//顺序表的初始化
void InitList(struct List *L)
{
   //list1中*a指向新开辟的10个int型数组的首地址
   L->a=(int*)malloc(sizeof(int)*MaxSize);

   //顺序表的当前长度为0，即新开辟的10个数组里面没有任何东西，里面的默认值为0
   L->length=0;

   //表明现在顺序表中的最大容量
   L->size=MaxSize;

}

//扩充空间,len为需要扩充的数组大小
void IncreaceList(struct List *L,int len){
int *p=L->a;
L->a=(int*)malloc((L->size+len)*sizeof(int));
int i=0;
for(i=0;i<L->size;i++){
   L->size=p[i];
}
L->length=L->length+len;

//把原来开始生成的data数组给释放掉
free(p);
}


int main(){

   InitList(&list1);
   IncreaceList(&list1,3);
   return 0;
}



