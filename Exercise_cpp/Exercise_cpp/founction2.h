#pragma once
#include<iostream>
#include<cctype>
#include<array>
#include<string> //getline
#include<fstream> //ifstream
using namespace std;

/*
	12.1
	�����������������
	��������ṩʵ�֣�����дһ��ʹ�����г�Ա������С����
*/
#ifndef COW_H_
#define COW_H_
class Cow
{
private:
	char name[20];
	char* hobby;
	double weight;

public:
	Cow();
	Cow(const char* nm, const char* ho, double wt);
	Cow(const Cow& c);
	~Cow();
	Cow& operator=(const Cow& c);
	void ShowCow()const;

};

#endif // !COW_H_

void function_12_1(void);

/*
	12.2
	ͨ���������Ĺ������Ľ�String������������String1.h����Ϊ
	String2.h����
	a����+������������أ�ʹ֮�ɽ������ַ����ϲ���1����
	b���ṩһ��Stringlow( )��Ա���������ַ��������е���ĸ�ַ�ת
	��ΪСд��������cctypeϵ���ַ���������
	c���ṩString( )��Ա���������ַ�����������ĸ�ַ�ת���ɴ�д��
	d���ṩһ�������ĳ�Ա������������һ��char���������ظ��ַ�
	���ַ����г��ֵĴ�����
	ʹ������ĳ������������Ĺ�����
	���Ӧ���������ƣ�
*/

#ifndef STRING2_H_
#define STRING2_H_

class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;

public:
	String(const char* s);
	String();
	String(const String& st);
	~String();
	int length()const { return len; }
	String& operator=(const String& st);
	String& operator=(const char* s);
	String operator+(const char* s);
	char& operator[](int i);
	const char& operator[](int i)const;
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);

	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);

	friend String operator+(const char* s, const String& st2);
	friend String operator+(const String& st1, const String& st2);

	void stringlow();
	void stringup();

	unsigned has(const char s)const;
	static int Howmany();


};

#endif // !STRING2_H_

void function_12_2(void);

/*
	12.3
	�±�д�����嵥10.7�ͳ����嵥10.8������Stock�࣬ʹ֮ʹ��
	��̬������ڴ棬������string��������洢��Ʊ���ơ����⣬ʹ����
	�ص�operator < <()�������show()��Ա��������ʹ�ó����嵥10.9������
	�Ķ������
*/
void function_12_3(void);

#ifndef stock20_h_
#define stock20_h_

class Stock
{
public:
	Stock();
	Stock(const char* s, long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	friend std::ostream& operator<<(std::ostream& os, const Stock& st);
	const Stock& topval(const Stock& s)const;

private:
	char* company;
	int shares;
	double share_val;
	double total_val;
	void set_hot()
	{
		total_val = shares * share_val;
	}

};

#endif // !stock20_h_

/*
	12.4��
	�뿴��������嵥10.10�����Stack1��ı�����
	����˽�г�Ա�����ģ������ʹ�ö�̬���������������ջ���
	���±�д����������Ӧ�����µı�ʾ��������дһ����������ʾ���е�
	�������������ƹ��캯���͸�ֵ�����
*/


#ifndef Stack1_H_
#define Stack1_H_
typedef unsigned long Item2;

class Stack1
{
public:
	Stack1(int n = MAX);
	Stack1(const Stack1& st);
	~Stack1();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item2& Item2);
	bool pop(Item2& Item2);
	Stack1& operator=(const Stack1& st);
	friend std::ostream& operator<<(std::ostream& os, const Stack1& st);
private:
	enum
	{
		MAX = 10
	};
	Item2* pItem2s;
	int size;
	int top;
};

#endif // !Stack1_H_

void function_12_4(void);

/*
	12.5
	Heather���н��е��о�������ATM�ͻ���ϣ���Ŷ�ʱ�䲻����
	1���ӡ�ʹ�ó����嵥12.10�е�ģ�⣬�ҳ�Ҫʹƽ���Ⱥ�ʱ��Ϊ1��
	�ӣ�ÿСʱ����Ŀͻ���ӦΪ���٣�����ʱ�䲻����100Сʱ����

	12.6
	Heather������֪��������ٿ���һ̨ATM���������Ρ����
	ģ������޸ģ��԰����������С����赱��һ̨ATMǰ���Ŷ�������
	�ڵڶ�̨ATMʱ���ͻ������ڵ�һ�ӣ��������ڵڶ��ӡ�Ȼ������
	��Ҫʹƽ���Ⱥ�ʱ��Ϊ1���ӣ�ÿСʱ����Ŀͻ���Ӧ��Ϊ���٣�ע
	�⣬����һ�����������⣬����ATM�����ӱ��������ܱ�֤ÿСʱ��
	��Ŀͻ�����Ҳ��������ȷ���ͻ��Ⱥ��ʱ������1���ӣ�
*/

#ifndef QUEUE_H_
#define QUEUE_H_

class Customer
{
public:
	Customer() :arrive(0L), processtime(0) {};
	void set(long when);
	long when()const { return arrive; }
	int ptime()const { return processtime; }

private:
	long arrive;
	int processtime;

};
typedef Customer Item3;

class Queue
{
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const Item3& item3);
	bool dequeue(Item3& item3);

private:
	struct Node
	{
		Item3 item;
		struct Node* next;
	};
	enum
	{
		Q_SIZE = 10
	};
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	Queue(const Queue& q) :qsize(0) {}
	Queue& operator=(const Queue& q) { return *this; }

};


#endif // !QUEUE_H_
void function_12_5(void);


/*
	13.1
	������һ��Classic�࣬�����һ��char��Ա�����ڴ洢ָ��CD����
	Ҫ��Ʒ���ַ������޸�����������ʹ��������к���������ġ������
	������������ĳ������������Ҫ������ɾ������ʹ������ĳ��������
	�Ĳ�Ʒ
*/
#ifndef CD_H_
#define CD_H_

class Cd
{
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();
	virtual void Report()const;
	Cd& operator=(const Cd& d);

private:
	char performers[50];
	char labels[20];
	int selections;
	double playtime;

};

#endif // !CD_H_

#ifndef CLASSIC_H_
#define CLASSIC_H_
class Classic :public Cd
{
public:
	Classic() :Cd() { cdstr[0] = '\0'; }
	Classic(const char* s, const char* s1, const char* s2, int n, double x);
	Classic(const char* s, const Cd& d);
	~Classic();
	virtual void Report()const;
	Classic& operator=(const Classic& cs);

private:
	char cdstr[50];
};

#endif // !CLASS_H_



void function_13_1(void);
