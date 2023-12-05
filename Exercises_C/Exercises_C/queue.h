#pragma once

//#include <stdio.h>
//#include <malloc.h>


//#define TRUE  1
//#define FALSE 0
//#define MAXSIZE 100
//
////typedef int ElemType;
//
//
//// 定义循环队列结构体
//typedef struct Queue {
//
//	int* base;	// 队列首地址
//	int front;	// 队列头下标
//	int rear;	// 队列尾下标
//
//}Queue;



//
///********************* 循环队列的常规操作 **************************/
//
//void     InitQueue();             	// 初始化循环队列
//int      QueueFull();               // 循环队列判满
//int      QueueEmpty();              // 循环队列判空
//int      QueueLength();             // 求循环队列长度(元素个数)
//int      EnQueue();                 // 循环队列 入队
//int      DeQueue();                 // 循环队列 出队
//
//void     QueueStatus();             // 打印队满、队空、队长状态
///****************************************************************/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include<string.h>
#include <iostream>

//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1
//#define OVERFLOW -2
//
//
//#define MAXQSIZE 100
//
//typedef int QElemType;
//typedef int Status;
//
//typedef struct {
//	QElemType* base;
//	int front;
//	int rear;
//}SqQueue;
//
//
//// the initial of queue
//Status InitQueue(SqQueue& Q);
//
////get the length of queue
//int QueueLength(SqQueue Q);
//
////push in the queue 
//Status ENQueue(SqQueue& Q, QElemType e);
//
////pop in the queue 
//Status DeQueue(SqQueue& Q, QElemType e);
//
////get the head element of queue
//QElemType GetHead(SqQueue Q);

//*******************2023/12/5 14:33*********************//
#ifndef _QUEUE_H_
#define _QUEUE_H_

#define MAXQUEUE 10
typedef int Item;
typedef struct node
{
	Item item;
	struct node* next;

}Node;

typedef struct queue
{
	Node* front;     // 队首指针
	Node* rear;      // 队尾指针
	int items;       // 队列中项目个数
}Queue;

/* 操作：初始化队列 */
/* 操作前：pd指向一个队列 */
/* 操作后：该队列被初始化一个空队列 */
void InitializeQueue(Queue* pq);

/* 操作：检查队列是否已满 */
/* 操作前：pd指向一个先前已初始化过的队列 */
/* 操作后：如果该队列满，则返回True,否则返回False */
bool QueueIsFull(const Queue* pq);

/* 操作：检查队列是否为空 */
/* 操作前：pd指向一个先前已初始化过的队列 */
/* 操作后：如果该队列已空，则返回True,否则返回False */
bool QueueIsEmpty(const Queue* pq);

/* 操作：确定队列中项目的个数 */
/* 操作前：pd指向一个先前已初始化过的队列 */
/* 操作后：返回队列项目中的个数 */
int QueueItemCount(const Queue* pq);

/* 操作：向队列尾端添加项目 */
/* 操作前：pd指向一个先前已初始化过的队列 */
/*        item要添加到队列尾端的项目 */
/* 操作后：如果队列未满，item被添加到 */
/*        队列尾部，函数返回True;否则 */
/*        不改变队列，函数返回False */
int EnQueue(Item item, Queue* pq);

/* 操作：向队列首端删除项目 */
/* 操作前：pd指向一个先前已初始化过的队列 */
/* 操作后：如果队列未满，item被添加到 */
/*        队列尾部，函数返回True;否则 */
/*        不改变队列，函数返回False */
/*        item要添加到队列尾端的项目 */
int EnQueue(Item item, Queue* pq);




/* 操作：清空队列 */
/* 操作前：pd指向一个先前已初始化过的队列 */
/* 操作后：队列被清空 */
int EmptyTheQueue(const Queue* pq);

#endif // !_QUEUE_H_







