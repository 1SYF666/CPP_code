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

/*
	13.2
	�����ϰ1������������ʹ�ö�̬�ڴ��������ǳ��ȹ̶�����
	������¼�ַ�����
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
	�޸�baseDMA-lacksDMA-hasDMA���Σ��������඼��һ��
	ABC����������Ȼ��ʹ��������嵥13.10���Ƶĳ���Խ�����в�
	�ԡ�Ҳ����˵����Ӧʹ��ABCָ�����飬�����û�����Ҫ�����Ķ�����
	�͡����ඨ�������virtual View( )�����Դ���������ʾ��

*/


#ifndef DMA_H_
#define DMA_H_

class DMA
{
public:
	DMA(const char* cn = "null");     // ��������DMA��Ĭ�Ϲ��캯��;
	DMA(const DMA& rs);			    // ��������DMA�ĸ��ƹ��캯��;
	DMA& operator=(const DMA& rs);	// ����Ϊ����DMA�����ظ�ֵ�����;
	virtual ~DMA();					// ����Ϊ����DMA������������;
	virtual void View()const = 0;	// ����Ϊ����DMA�Ĵ�����;

private:
	char* classname; // �����Ա��Ϊһ��charָ�뷽������ڴ�ռ䱣�������������

protected:
	const char* show_classname()const
	{
		return classname;
	}
};

class  baseDMA :public DMA
{
public:
	baseDMA(const char* l = "null", int r = 0, const char* cn = "null");  // ����������baseDMA��Ĭ�Ϲ��캯��
	baseDMA(const char* l, int r, const DMA& rs);						  // ����������baseDMA���û����幹�캯��
	baseDMA(const baseDMA& rs);											  // ����������baseDMA�ĸ��ƹ��캯��
	~baseDMA();														  // ����������baseDMA����������
	baseDMA& operator=(const baseDMA& rs);								  // ����Ϊ������baseDMA���ظ����������
	virtual void View() const;											  // ����Ϊ������baseDMA��������麯��		

private:
	char* label;
	int rating;
};

class lacksDMA :public DMA
{
public:
	lacksDMA(const char* c = "blank", const char* cn = "null");          // ����������lacksDMA��Ĭ�Ϲ��캯��
	lacksDMA(const char* c, const DMA& rs);								 // ����������lacksDMA���û����幹�캯��				
	lacksDMA(const lacksDMA& rs);										 // ����������lacksDMA�ĸ��ƹ��캯��
	~lacksDMA();														 // ����������lacksDMA����������	
	lacksDMA& operator=(const lacksDMA& rs);							 // ����������lacksDMA���ظ�ֵ����� 		
	virtual void View()const;											 // ����Ϊ������lacksDMA����

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
	hasDMA(const char* s = "none", const char* cn = "null");			 // ����������hasDMA��Ĭ�Ϲ��캯��
	hasDMA(const char* s, const DMA& rs);							     // ����������hasDMA���û����幹�캯��
	hasDMA(const hasDMA& rs);											 // ����������hasDMA�ĸ��ƹ��캯��
	~hasDMA();															 // ����������hasDMA����������
	hasDMA& operator=(const hasDMA& rs);								 // ����������hasDMA���ظ�ֵ�����
	virtual void View()const;

private:
	char* style;

};

#endif // !DMA_H_



void function_13_3(void);

/*
	13.4
	Benevolent Order of Programmers����ά��ƿװ���Ѿ��䡣Ϊ��
	������BOP Portmaster������һ��Port�࣬����������
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
	Wine����һ��string������Ա���μ���4�£���һ��Pair����
	���μ����£�������ǰ�����ڴ洢���ѾƵ����ƣ���������2��
	valarray<int>���󣨲μ����£���������valarray<int>����ֱ𱣴�����
	�ѾƵ�������ݺ͸���������ƿ�������磬Pair�ĵ�1��valarray<int>��
	�����Ϊ1988��1992��1996�꣬��2��valarray<int>�������Ϊ24��48��
	144ƿ��Wine�����1��int��Ա���ڴ洢���������⣬һЩtypedef����
	�����ڼ򻯱�̹�����

	������PairArray��ʾ��������Pair<std::valarray<int>,
	std::valarray<int> >��ʹ�ð�����ʵ��Wine�࣬����һ���򵥵ĳ������
	���в��ԡ�Wine��Ӧ����һ��Ĭ�Ϲ��캯���Լ����¹��캯����

	Wine��Ӧ����һ��GetBottles( )������������Wine�����ܹ��洢��
	����ݣ�y������ʾ�û�������ݺ�ƿ��������Label( )����һ��ָ����
	�Ѿ����Ƶ����á�sum( )��������Pair�����еڶ���valarray<int>������
	��ƿ���ܺ͡�

	���Գ���Ӧ��ʾ�û��������Ѿ����ơ�Ԫ�ظ����Լ�ÿ��Ԫ�ش洢
	����ݺ�ƿ������Ϣ������ʹ����Щ����������һ��Wine����Ȼ��
	��ʾ�����б������Ϣ
*/

/*
	14.2
	����˽�м̳ж����ǰ�������ɱ����ϰ1��ͬ����һЩtypedef
	���ܻ��������������⣬�����ܻ���Ҫ���������������������ĺ�
	�壺
	����Ƶ���Ӧ�ÿ���ʹ�ñ����ϰ1�еĲ��Գ�����в��ԡ�

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
	����һ��QueueTpģ�塣Ȼ����һ�������ڳ����嵥14.12�ĳ�
	���д���һ��ָ��Worker��ָ����У��μ������嵥14.10�еĶ�
	�壩����ʹ�øö�������������
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
	Person�ౣ���˵������ա������캯���⣬������Show( )��
	����������ʾ�����ա�Gunslinger����Person��Ϊ�������������������
	��һ��Draw( )��Ա���÷�������һ��doubleֵ����ʾǹ�ֵİ�ǹʱ�䡣
	����໹����һ��int��Ա����ʾǹ��ǹ�ϵĿ̺������������໹��
	��һ��Show( )������������ʾ������Щ��Ϣ��
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
	virtual void Data() const;  // �鱣��������ӡ�����Ա��Ϣ��ʹ����������Լ�ӷ���
	virtual void Get();		// �鱣��������ӡ�����Ա��Ϣ��ʹ����������Լ�ӷ���

};

class Gunslinger :virtual public Person
{
public:
	Gunslinger() :Person(), nicks(0) {}
	Gunslinger(const string& f, const string& l, int n) :Person(f, l), nicks(n) {}
	Gunslinger(const Person& p, int n) :Person(p), nicks(n) {}

	void Set();
	void Show() const;
	double Draw() const;    // ��ӡǹ�ֵİ�ǹʱ��


private:
	int nicks;

protected:
	void Data() const;  // ���¶��屣������
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
	int Draw()const;  //��ʾ�˿��Ƶ�ֵ

private:

protected:
	void Data()const;  //���¶��屣������

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
	double Gdraw()const;  // ��ӡ������ǹ��ʱ��
	int Cdraw()const;	  // ��ӡ��һ���˿��Ƶ�ֵ

private:

protected:
	void Data()const;     // ���¶��屣������
	void Get();

};


#endif // !PERSONMI_H_


void function_14_4(void);


/*
	14.5
	ע�⣬�����νṹʹ���˴�������MI������Ҫ�μ��������
	�����ڹ��캯����ʼ���б��������򡣻���Ҫע����ǣ���Щ������
	����Ϊ�����ġ�����Լ�һЩhighfink�����Ĵ��루���磬���
	highfink::ShowAll( )ֻ�ǵ���fink::ShowAll( )��manager::ShwAll( )������
	������abstr_emp::ShowAll( )���Σ������ṩ�෽����ʵ�֣�����һ����
	���ж���Щ����в��ԡ�������һ��С�Ͳ��Գ���
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
	int InChargeOf()const { return inchargeof; }  // ���������ܹ����ʻ����Ա 
	int& InChargeOf() { return inchargeof; }		  // ���������ܹ����ʻ����Ա�������޸� 

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
	const string ReportsTo() const { return reportsto; } // ���������ܹ����ʻ����Ա
	string& ReportsTo() { return reportsto; }			 // ���������ܹ����ʻ����Ա�������޸�


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
	1����Tv��Remote���������޸ģ�
	a�������ǻ�Ϊ��Ԫ��
	b����Remote�������һ��״̬������Ա���ó�Ա����ң�����Ǵ�
	�ڳ���ģʽ���ǻ���ģʽ��
	c����Remote�����һ����ʾģʽ�ķ�����
	d����Tv�������һ����Remote���³�Ա�����л��ķ������÷���
	Ӧ����TV���ڴ�״̬ʱ�������С�
	��дһ��С������������Щ�����ԡ�
*/


#ifndef TV_H_
#define TV_H_
class Remote;// ������Remote��Ȼ���ٶ��壬�Ա���������㹻����Ϣ����ʹ��Remote��ķ���

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
	void set_status(Remote& r);  // ��Remote ����״̬��Ա�����л��ķ���

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
	};  // Convention��ʾ����ģʽ��Interaction ��ʾ����ģʽ
	Remote(int m = Tv::TV, int s = Convention) :mode(m), status(s) {} //Ĭ��Ϊ����ģʽ
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
	int status;	// ״̬������Ա


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
	�޸ĳ����嵥15.11��ʹ�����쳣���Ͷ��Ǵ�ͷ�ļ�<stdexcept>
	�ṩ��logic_error�������������ࡣ��ÿ��what( )���������溯������
	��������ʡ��쳣�����ô洢����Ĳ���ֵ����ֻ��֧��what( )��
	����

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
