/*
 * fileName: mySeq.h
 * date: 2020/9/28
 * compiler: GCC 9.2.0
 * author: JunyiYang—杨竣轶
 * number: 1810730229
 * codedFormat: UTF-8
 * description: 顺序表的结构定义与其上的操作的接口声明
*/
#ifndef _MYSEQ_H_ // 防止重编译
#define _MYSEQ_H_

#define TRUE 1
#define FALSE 0
#define OK 1 
#define ERROR -1
#define OVERFLOW -2
#define LIST_INIT_SIZE 100 // 线性表储存空间的初始分配量
#define LISTINCREMENT 10 // 线性表储存空间的分配增量

typedef int Status; // 状态
typedef int ElemType; // 元素类型
typedef int LOC; // 位置

typedef struct 
{
    ElemType *base; // 储存空间基址
    int length; // 当前长度
    int listSize; // 当前分配的储存容量（以sizeof(ElemType)为单位）
} SqList;

Status initList(SqList *L); // 初始化一个空的线性表
int listLength(const SqList *L); // 返回线性表长度的接口
Status existList(const SqList *L); // 判断线性表是否存在
Status destroyList(SqList *L); // 销毁线性表
Status outElem(const ElemType *e); // 输出元素
Status outSqList(const SqList *L); // 输出链表的所有元素
Status listInsert(SqList *L, int i, const ElemType *e); // 插入元素
Status inputNode(SqList *L); // 输入插入节点
Status createList(SqList *L); // 创建线性表

#endif