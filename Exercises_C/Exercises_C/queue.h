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
//// ����ѭ�����нṹ��
//typedef struct Queue {
//
//	int* base;	// �����׵�ַ
//	int front;	// ����ͷ�±�
//	int rear;	// ����β�±�
//
//}Queue;



//
///********************* ѭ�����еĳ������ **************************/
//
//void     InitQueue();             	// ��ʼ��ѭ������
//int      QueueFull();               // ѭ����������
//int      QueueEmpty();              // ѭ�������п�
//int      QueueLength();             // ��ѭ�����г���(Ԫ�ظ���)
//int      EnQueue();                 // ѭ������ ���
//int      DeQueue();                 // ѭ������ ����
//
//void     QueueStatus();             // ��ӡ�������ӿա��ӳ�״̬
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
	Node* front;     // ����ָ��
	Node* rear;      // ��βָ��
	int items;       // ��������Ŀ����
}Queue;

/* ��������ʼ������ */
/* ����ǰ��pdָ��һ������ */
/* �����󣺸ö��б���ʼ��һ���ն��� */
void InitializeQueue(Queue* pq);

/* �������������Ƿ����� */
/* ����ǰ��pdָ��һ����ǰ�ѳ�ʼ�����Ķ��� */
/* ����������ö��������򷵻�True,���򷵻�False */
bool QueueIsFull(const Queue* pq);

/* �������������Ƿ�Ϊ�� */
/* ����ǰ��pdָ��һ����ǰ�ѳ�ʼ�����Ķ��� */
/* ����������ö����ѿգ��򷵻�True,���򷵻�False */
bool QueueIsEmpty(const Queue* pq);

/* ������ȷ����������Ŀ�ĸ��� */
/* ����ǰ��pdָ��һ����ǰ�ѳ�ʼ�����Ķ��� */
/* �����󣺷��ض�����Ŀ�еĸ��� */
int QueueItemCount(const Queue* pq);

/* �����������β�������Ŀ */
/* ����ǰ��pdָ��һ����ǰ�ѳ�ʼ�����Ķ��� */
/*        itemҪ��ӵ�����β�˵���Ŀ */
/* �������������δ����item����ӵ� */
/*        ����β������������True;���� */
/*        ���ı���У���������False */
int EnQueue(Item item, Queue* pq);

/* ������������׶�ɾ����Ŀ */
/* ����ǰ��pdָ��һ����ǰ�ѳ�ʼ�����Ķ��� */
/* �������������δ����item����ӵ� */
/*        ����β������������True;���� */
/*        ���ı���У���������False */
/*        itemҪ��ӵ�����β�˵���Ŀ */
int EnQueue(Item item, Queue* pq);




/* ��������ն��� */
/* ����ǰ��pdָ��һ����ǰ�ѳ�ʼ�����Ķ��� */
/* �����󣺶��б���� */
int EmptyTheQueue(const Queue* pq);

#endif // !_QUEUE_H_







