#pragma once
#include<iostream>
#include<cctype>
#include<array>
#include<string> //getline
#include<fstream> //ifstream
#include<valarray>
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

/*
	13.2
	完成练习1，但让两个类使用动态内存分配而不是长度固定的数
	组来记录字符串。
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
	char *performers;
	char *labels;
	int selections;
	double playtime;

};

#endif // !CD_H_

#ifndef CLASSIC_H_
#define CLASSIC_H_
class Classic :public Cd
{
public:
	Classic();
	Classic(const char* s1, const char* s2, const char* s3, int n, double x);
	Classic(const char* s, const Cd& d);
	~Classic();
	virtual void Report()const;
	Classic& operator=(const Classic& cs);

private:
	char *cdstr;
};

#endif // !CLASS_H_

void function_13_1(void);
void function_13_2(void);

/*
	13.3
	修改baseDMA-lacksDMA-hasDMA类层次，让三个类都从一个
	ABC派生而来，然后使用与程序清单13.10相似的程序对结果进行测
	试。也就是说，它应使用ABC指针数组，并让用户决定要创建的对象类
	型。在类定义中添加virtual View( )方法以处理数据显示。

*/


#ifndef DMA_H_
#define DMA_H_

class DMA
{
public:
	DMA(const char* cn = "null");     // 声明基类DMA的默认构造函数;
	DMA(const DMA& rs);			    // 声明基类DMA的复制构造函数;
	DMA& operator=(const DMA& rs);	// 声明为基类DMA的重载赋值运算符;
	virtual ~DMA();					// 声明为基类DMA的虚析构函数;
	virtual void View()const = 0;	// 声明为基类DMA的纯虚数;

private:
	char* classname; // 基类成员设为一个char指针方便分配内存空间保存派生类的类名

protected:
	const char* show_classname()const
	{
		return classname;
	}
};

class  baseDMA :public DMA
{
public:
	baseDMA(const char* l = "null", int r = 0, const char* cn = "null");  // 声明派生类baseDMA的默认构造函数
	baseDMA(const char* l, int r, const DMA& rs);						  // 声明派生类baseDMA的用户定义构造函数
	baseDMA(const baseDMA& rs);											  // 声明派生类baseDMA的复制构造函数
	~baseDMA();														  // 声明派生类baseDMA的析构函数
	baseDMA& operator=(const baseDMA& rs);								  // 声明为派生类baseDMA重载复制运算符；
	virtual void View() const;											  // 声明为派生类baseDMA定义基类虚函数		

private:
	char* label;
	int rating;
};

class lacksDMA :public DMA
{
public:
	lacksDMA(const char* c = "blank", const char* cn = "null");          // 声明派生类lacksDMA的默认构造函数
	lacksDMA(const char* c, const DMA& rs);								 // 声明派生类lacksDMA的用户定义构造函数				
	lacksDMA(const lacksDMA& rs);										 // 声明派生类lacksDMA的复制构造函数
	~lacksDMA();														 // 声明派生类lacksDMA的析构函数	
	lacksDMA& operator=(const lacksDMA& rs);							 // 声明派生类lacksDMA重载赋值运算符 		
	virtual void View()const;											 // 声明为派生类lacksDMA定义

private:
	enum
	{
		COL_LEN = 40
	};
	char color[COL_LEN];

};

class hasDMA :public DMA
{
public:
	hasDMA(const char* s = "none", const char* cn = "null");			 // 声明派生类hasDMA的默认构造函数
	hasDMA(const char* s, const DMA& rs);							     // 声明派生类hasDMA的用户定义构造函数
	hasDMA(const hasDMA& rs);											 // 声明派生类hasDMA的复制构造函数
	~hasDMA();															 // 声明派生类hasDMA的析构函数
	hasDMA& operator=(const hasDMA& rs);								 // 声明派生类hasDMA重载赋值运算符
	virtual void View()const;

private:
	char* style;

};

#endif // !DMA_H_



void function_13_3(void);

/*
	13.4
	Benevolent Order of Programmers用来维护瓶装葡萄酒箱。为描
	述它，BOP Portmaster设置了一个Port类，其声明如下
*/
#ifndef PORT_H_

class Port
{
public:
	Port(const char* br = "none", const char* st = "none", int b = 0);
	Port(const Port& p);

	virtual~Port() { delete[] brand; }
	Port& operator=(const Port& p);
	Port& operator+=(int b);
	Port& operator-=(int b);
	int BottleCount()const { return bottles; }
	virtual void Show()const;
	friend ostream& operator<<(ostream& os, const Port& p);

private:
	char* brand;
	char style[20];
	int bottles;

};

#endif // !PORT_H_

class VintagePort :public Port
{
public:
	VintagePort();
	VintagePort(const char* br, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort() { delete[] nickname; }
	VintagePort& operator=(const VintagePort& vp);
	void Show()const;
	friend ostream& operator<<(ostream& os, const VintagePort& vp);

private:
	char* nickname;
	int year;
};


void function_13_4(void);


/*
	14.1
	Wine类有一个string类对象成员（参见第4章）和一个Pair对象
	（参见本章）；其中前者用于存储葡萄酒的名称，而后者有2个
	valarray<int>对象（参见本章），这两个valarray<int>对象分别保存了葡
	萄酒的酿造年份和该年生产的瓶数。例如，Pair的第1个valarray<int>对
	象可能为1988、1992和1996年，第2个valarray<int>对象可能为24、48和
	144瓶。Wine最好有1个int成员用于存储年数。另外，一些typedef可能
	有助于简化编程工作：

	这样，PairArray表示的是类型Pair<std::valarray<int>,
	std::valarray<int> >。使用包含来实现Wine类，并用一个简单的程序对其
	进行测试。Wine类应该有一个默认构造函数以及如下构造函数：

	Wine类应该有一个GetBottles( )方法，它根据Wine对象能够存储几
	种年份（y），提示用户输入年份和瓶数。方法Label( )返回一个指向葡
	萄酒名称的引用。sum( )方法返回Pair对象中第二个valarray<int>对象中
	的瓶数总和。

	测试程序应提示用户输入葡萄酒名称、元素个数以及每个元素存储
	的年份和瓶数等信息。程序将使用这些数据来构造一个Wine对象，然后
	显示对象中保存的信息
*/

/*
	14.2
	采用私有继承而不是包含来完成编程练习1。同样，一些typedef
	可能会有所帮助，另外，您可能还需要考虑诸如下面这样的语句的含
	义：
	您设计的类应该可以使用编程练习1中的测试程序进行测试。

*/

#ifndef WINEC_H_

template <typename T1, typename T2>
class Pair
{
public:
	Pair() {};
	Pair(const T1& yr, const T2& bt) :year(yr), bottles(bt) {};
	//void Set(const T1& yr, const T2& bt);
	int Sum()const;
	void Show(int y)const;


private:
	T1 year;
	T2 bottles;

};

//template<typename T1, typename T2>
//void Pair<T1, T2>::Set(const T1& yr, const T2& bt)
//{
//	year = yr;
//	bottles = bt;
//}

template<typename T1, typename T2>
int Pair<T1, T2>::Sum()const
{
	return bottles.sum();
}

template<typename T1, typename T2>
void Pair<T1, T2>::Show(int y)const
{
	for (int i = 0; i < y; i++)
	{
		cout << "\t" << year[i] << "\t" << bottles[i] << endl;
	}
}

typedef valarray<int> ArrayInt;

typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine: private string, private PairArray
{
public:
	Wine(const char* l, int y);
	Wine(const char* l, int y, const int yr[], const int bot[]);
	~Wine();
	void GetBottles();
	string& Label();
	int sum()const;
	void Show()const;

private:
	//string wine_name;
	//PairArray year_and_bottle;
	int year;
};

#endif // !WINEC_H_

void function_14_1_2(void);


/*
	14.3
	定义一个QueueTp模板。然后在一个类似于程序清单14.12的程
	序中创建一个指向Worker的指针队列（参见程序清单14.10中的定
	义），并使用该队列来测试它。
*/

#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename Item>

class QueueTp
{
public:
	QueueTp(int qs = Q_SIZE);
	~QueueTp();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);

private:
	enum
	{
		Q_SIZE = 10
	};
	struct Node
	{
		Item item;
		struct Node* next;
	};
	Node* front;
	Node* rear;
	int items;

	const int qsize;

	QueueTp(const QueueTp& q) :qsize(0) {};

	QueueTp& operator=(const QueueTp& q) { return *this; }

};

template<typename Item>
QueueTp<Item>::QueueTp(int qs) :qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}

template<typename Item>
QueueTp<Item>::~QueueTp()
{
	Node* temp;

	while (front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template <typename Item>
bool QueueTp<Item>::isempty()const
{
	return 0 == items;
}

template <typename Item>
bool QueueTp<Item>::isfull()const
{
	return qsize == items;
}

template <typename Item>
int QueueTp<Item>::queuecount()const
{
	return items;
}

template <typename Item>
bool QueueTp<Item>::enqueue(const Item& item)
{
	if (isfull())
	{
		return false;
	}
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	++items;

	if (nullptr == front)
	{
		front = add;
	}
	else
	{
		rear->next = add;
	}

	rear = add;
	return true;
}

template <typename Item>
bool QueueTp<Item>::dequeue(Item& item)
{
	if (isempty())
	{
		return false;
	}

	item = front->item;
	--items;
	Node* temp = front;
	front = front->next;
	delete temp;

	if (0 == items)
	{
		rear = nullptr;
	}
	return true;

}

#endif // !QUEUETP_H_

#ifndef WORKER_H_
#define WORKER_H_
class Worker
{
public:
	Worker() :fullname("no one"), id(0L) {}
	Worker(const std::string& s, long n) :fullname(s), id(n) {}
	~Worker();
	void Set();
	void Show()const;

private:
	std::string fullname;
	long id;
};

#endif // !WORKER_H_


void function_14_3(void);

/*
	14.4
	Person类保存人的名和姓。除构造函数外，它还有Show( )方
	法，用于显示名和姓。Gunslinger类以Person类为虚基类派生而来，它包
	含一个Draw( )成员，该方法返回一个double值，表示枪手的拔枪时间。
	这个类还包含一个int成员，表示枪手枪上的刻痕数。最后，这个类还包
	含一个Show( )函数，用于显示所有这些信息。
*/

#ifndef PERSONMI_H_
#define PERSONMI_H_
using std::string;

class Person
{
public:
	Person() :firstname("no"), lastname("one") {}
	Person(const string& fname, const string& lname) :firstname(fname), lastname(lname) {}
	virtual~Person() = 0;
	virtual void Set() = 0;
	virtual void Show()const = 0;

private:
	string firstname;
	string lastname;
protected:
	virtual void Data() const;  // 虚保护方法打印基类成员信息，使得派生类可以间接访问
	virtual void Get();		// 虚保护方法打印基类成员信息，使得派生类可以间接访问

};

class Gunslinger :virtual public Person
{
public:
	Gunslinger() :Person(), nicks(0) {}
	Gunslinger(const string& f, const string& l, int n) :Person(f, l), nicks(n) {}
	Gunslinger(const Person& p, int n) :Person(p), nicks(n) {}

	void Set();
	void Show() const;
	double Draw() const;    // 打印枪手的拔枪时间


private:
	int nicks;

protected:
	void Data() const;  // 重新定义保护方法
	void Get();
};

class PokerPlayer :virtual public Person
{
public:
	PokerPlayer() :Person("no", "one") {}
	PokerPlayer(const string& f, const string& l) :Person(f, l) {}
	PokerPlayer(const Person& p) :Person(p) {}
	void Set();
	void Show()const;
	int Draw()const;  //表示扑克牌的值

private:

protected:
	void Data()const;  //重新定义保护方法

};

class BadDude :public Gunslinger, public PokerPlayer
{
public:
	BadDude() {}
	BadDude(const string& f, const string& l, int n) :Person(f, l), Gunslinger(f, l, n), PokerPlayer(f, l) {}
	BadDude(const Person& p, int n) :Person(p), Gunslinger(p, n), PokerPlayer(p) {}
	BadDude(const Gunslinger& g) :Person(g), Gunslinger(g), PokerPlayer(g) {}
	BadDude(const PokerPlayer& p, int n) :Person(p), Gunslinger(p, n), PokerPlayer(p) {}
	void Set();
	void Show()const;
	double Gdraw()const;  // 打印坏蛋拔枪的时间
	int Cdraw()const;	  // 打印下一张扑克牌的值

private:

protected:
	void Data()const;     // 重新定义保护方法
	void Get();

};


#endif // !PERSONMI_H_


void function_14_4(void);


/*
	14.5
	注意，该类层次结构使用了带虚基类的MI，所以要牢记这种情况
	下用于构造函数初始化列表的特殊规则。还需要注意的是，有些方法被
	声明为保护的。这可以简化一些highfink方法的代码（例如，如果
	highfink::ShowAll( )只是调用fink::ShowAll( )和manager::ShwAll( )，则它
	将调用abstr_emp::ShowAll( )两次）。请提供类方法的实现，并在一个程
	序中对这些类进行测试。下面是一个小型测试程序
*/

#ifndef EMP_H_
#define EMP_H_

class abstr_emp
{
public:
	abstr_emp();
	abstr_emp(const string& fn, const string& ln, const string& j);

	virtual void ShowAll()const;
	virtual void SetAll();
	friend ostream& operator<<(ostream& os, const abstr_emp& e);
	virtual ~abstr_emp() = 0;

private:
	string fname;
	string lname;
	string job;

};

class employee :public abstr_emp
{
public:
	employee();
	employee(const string& fn, const string& ln, const string& j);
	virtual void ShowAll()const;
	virtual void SetAll();

};

class manager :virtual public abstr_emp
{
public:
	manager();
	manager(const string& fn, const string& ln, const string& j, int ico = 0);
	manager(const abstr_emp& e, int ico);
	manager(const manager& m);
	virtual void ShowAll()const;
	virtual void SetAll();

private:
	int inchargeof;

protected:
	int InChargeOf()const { return inchargeof; }  // 令派生类能够访问基类成员 
	int& InChargeOf() { return inchargeof; }		  // 令派生类能够访问基类成员并进行修改 

};

class fink :virtual public abstr_emp
{
public:
	fink();
	fink(const string& fn, const string& ln, const string& j, const string& rpo);
	fink(const abstr_emp& e, const string& rpo);
	fink(const fink& e);
	virtual void ShowAll()const;
	virtual void SetAll();

private:
	string reportsto;


protected:
	const string ReportsTo() const { return reportsto; } // 令派生类能够访问基类成员
	string& ReportsTo() { return reportsto; }			 // 令派生类能够访问基类成员并进行修改


};

class highfink :public manager, public fink
{
public:
	highfink();
	highfink(const string& fn, const string& ln, const string& j, const string& rpo, int ico);
	highfink(const abstr_emp& e, const string& rpo, int ico);
	highfink(const fink& f, int ico);
	highfink(const manager& m, const string& rpo);
	highfink(const highfink& h);
	virtual void ShowAll()const;
	virtual void SetAll();

private:

};
#endif // !EMP_H_

void function_14_5(void);

/*
	15.1
	1．对Tv和Remote类做如下修改：
	a．让它们互为友元；
	b．在Remote类中添加一个状态变量成员，该成员描述遥控器是处
	于常规模式还是互动模式；
	c．在Remote中添加一个显示模式的方法；
	d．在Tv类中添加一个对Remote中新成员进行切换的方法，该方法
	应仅当TV处于打开状态时才能运行。
	编写一个小程序来测试这些新特性。
*/


#ifndef TV_H_
#define TV_H_
class Remote;// 先声明Remote类然后再定义，以便编译器有足够的信息编译使用Remote类的方法

class Tv
{
public:
	friend class Remote;
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };
	Tv(int s = Off, int mc = 125) :state(s), volume(5),
		maxchannel(mc), channel(2), mode(Cable), input(TV) {}

	void onoff() { state = (state == On) ? Off : On; }
	bool ison()const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings()const;
	void set_status(Remote& r);  // 对Remote 类中状态成员进行切换的方法

private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};


class Remote
{
public:
	friend class Tv;
	enum
	{
		Convention, Interaction
	};  // Convention表示常规模式，Interaction 表示互动模式
	Remote(int m = Tv::TV, int s = Convention) :mode(m), status(s) {} //默认为常规模式
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void onoff(Tv& t) { t.onoff(); }
	void chanup(Tv& t) { t.chanup(); }
	void chandown(Tv& t) { t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
	void show_status()const;


private:

	int mode;
	int status;	// 状态变量成员


};

inline void Tv::set_status(Remote& r)
{
	if (ison())
	{
		r.status = Remote::Convention == r.status ? Remote::Interaction : Remote::Convention;
	}
}

inline void Remote::show_status()const
{
	std::cout << "Status = " << (status == Convention ? "Convention" : "Interaction") << std::endl;
}


#endif // !TV_H_

void function_15_1(void);

/*
	15.2
	修改程序清单15.11，使两种异常类型都是从头文件<stdexcept>
	提供的logic_error类派生出来的类。让每个what( )方法都报告函数名和
	问题的性质。异常对象不用存储错误的参数值，而只需支持what( )方
	法。

*/

#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_
#include <stdexcept>

class bad_hmean :public logic_error
{
public:
	bad_hmean(const string& s = "Error in bad_humean object\nhumean() arguments should be a != -b\n") :logic_error(s) {}

};

class bad_gmean :public logic_error
{
public:
	explicit bad_gmean(const string& s = "Error in bad_humean object\ngmean() arguments should be >= 0\n") :logic_error(s) {}
};
#endif // !EXC_MEAN_H_

void function_15_2(void);
