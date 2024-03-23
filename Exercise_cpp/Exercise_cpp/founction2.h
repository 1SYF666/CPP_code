#pragma once
#include<iostream>
#include<cctype>
#include<array>
#include<string> //getline
#include<fstream> //ifstream
using namespace std;

/*
	12.1
	对于下面的类声明：
	给这个类提供实现，并编写一个使用所有成员函数的小程序。
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
	通过完成下面的工作来改进String类声明（即将String1.h升级为
	String2.h）。
	a．对+运算符进行重载，使之可将两个字符串合并成1个。
	b．提供一个Stringlow( )成员函数，将字符串中所有的字母字符转
	换为小写（别忘了cctype系列字符函数）。
	c．提供String( )成员函数，将字符串中所有字母字符转换成大写。
	d．提供一个这样的成员函数，它接受一个char参数，返回该字符
	在字符串中出现的次数。
	使用下面的程序来测试您的工作：
	输出应与下面相似：
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
	新编写程序清单10.7和程序清单10.8描述的Stock类，使之使用
	动态分配的内存，而不是string类对象来存储股票名称。另外，使用重
	载的operator < <()定义代替show()成员函数。再使用程序清单10.9测试新
	的定义程序。
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
	12.4．
	请看下面程序清单10.10定义的Stack1类的变量：
	正如私有成员表明的，这个类使用动态分配的数组来保存栈项。请
	重新编写方法，以适应这种新的表示法，并编写一个程序来演示所有的
	方法，包括复制构造函数和赋值运算符
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
	Heather银行进行的研究表明，ATM客户不希望排队时间不超过
	1分钟。使用程序清单12.10中的模拟，找出要使平均等候时间为1分
	钟，每小时到达的客户数应为多少（试验时间不短于100小时）？

	12.6
	Heather银行想知道，如果再开设一台ATM，情况将如何。请对
	模拟进行修改，以包含两个队列。假设当第一台ATM前的排队人数少
	于第二台ATM时，客户将排在第一队，否则将排在第二队。然后再找
	出要使平均等候时间为1分钟，每小时到达的客户数应该为多少（注
	意，这是一个非线性问题，即将ATM数量加倍，并不能保证每小时处
	理的客户数量也翻倍，并确保客户等候的时间少于1分钟）
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
	派生出一个Classic类，并添加一组char成员，用于存储指出CD中主
	要作品的字符串。修改上述声明，使基类的所有函数都是虚的。如果上
	述定义声明的某个方法并不需要，则请删除它。使用下面的程序测试您
	的产品
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
