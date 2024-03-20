#pragma once
#include<iostream>
#include<cctype>
#include<array>
#include<string> //getline
#include<fstream> //ifstream
using namespace std;



/*
	6.1
	编写一个程序，读取键盘输入，直到遇到@符号为止，
	并回显输入(数字除外)，同时将大写字符转换为小写，
	将小写字符转换为大写(别忘了cctype函数系列)。
*/
void function_6_1(char* ch);

/*
	6.2
	编写一个程序，最多将10个donation值读入到一个double数组中
	(如果您愿意，也可使用模板类array)。程序遇到非数字输入时将结束输入，
	并报告这些数字的平均值以及数组中有多少个数字大于平均值
*/
void function_6_2(void);

/*
	6.3
	编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的菜单--每个选项用一个字母标记.
	如果用户使用有效选项之外的字母进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为止。
	然后，该程序使用一条switch语句，根据用户的选择执行一个简单操作。该程序的运行情况如下
*/
void function_6_3(void);

/*
	6.4．
	加入Benevolent Order of Programmer后，在BOP大会上，人们便
	可以通过加入者的真实姓名、头衔或秘密BOP姓名来了解他（她）。请
	编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出
	成员。编写该程序时，请使用下面的结构：
	......
	该程序创建一个由上述结构组成的小型数组，并将其初始化为适当
	的值。另外，该程序使用一个循环，让用户在下面的选项中进行选择：

*/

const int NUM = 5;
const int strsize = 20;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int perference;
};

void function_6_4(void);


/*
	6.5
	例如，收入为38000 tvarps时，所得税为5000 0.00 + 10000 0.10 +
	20000 0.15 + 3000 0.20，即4600 tvarps。请编写一个程序，使用循环来
	要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环
	将结束。

*/
void function_6_5(void);


/*
	6.6
	编写一个程序，记录捐助给“维护合法权利团体”的资金。该程
	序要求用户输入捐献者数目，然后要求用户输入每一个捐献者的姓名和
	款项。这些信息被储存在一个动态分配的结构数组中。每个结构有两个
	成员：用来储存姓名的字符数组（或string对象）和用来存储款项的
	double成员。读取所有的数据后，程序将显示所有捐款超过10000的捐
	款者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐款
	者是重要捐款人（Grand Patrons）。然后，程序将列出其他的捐款者，
	该列表要以Patrons开头。如果某种类别没有捐款者，则程序将打印单
	词“none”。该程序只显示这两种类别，而不进行排序。

*/

const int HIGH_MONEY = 10000;

struct corporation
{
	string name;
	double money;
};

void function_6_6(void);

/*
	6.7
	编写一个程序，它每次读取一个单词，直到用户只输入q。然
	后，该程序指出有多少个单词以元音打头，有多少个单词以辅音打头，
	还有多少个单词不属于这两类。为此，方法之一是，使用isalpha( )来区
	分以字母和其他字符打头的单词，然后对于通过了isalpha( )测试的单
	词，使用if或switch语句来确定哪些以元音打头。该程序的运行情况如
	下：

*/
void function_6_7(void);

/*
	6.8
	编写一个程序，它打开一个文件文件，逐个字符地读取该文
	件，直到到达文件末尾，然后指出该文件中包含多少个字符。
*/
void function_6_8(void);

/*
	6.9
	完成编程练习6，但从文件中读取所需的信息。该文件的第一项
	应为捐款人数，余下的内容应为成对的行。在每一对中，第一行为捐款
	人姓名，第二行为捐款数额。即该文件类似于下面
*/
void function_6_9(void);

/*
	7.1
	编写一个程序，不断要求用户输入两个数，直到其中的一个为
	0。对于每两个数，程序将使用一个函数来计算它们的调和平均数，并
	将结果返回给main( )，而后者将报告结果。调和平均数指的是倒数平均
	值的倒数，计算公式如下：
	调和平均数=2.0 * x * y / (x + y)

*/

void function_7_1(void);

/*
	7.2
	编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存
	储在一个数组中。程序允许用户提早结束输入，并在一行上显示所有成
	绩，然后报告平均成绩。请使用3个数组处理函数来分别进行输入、显
	示和计算平均成绩。
*/

void function_7_2(void);

/*
	7.3
	a．编写一个函数，按值传递box结构，并显示每个成员的值。
	b．编写一个函数，传递box结构的地址，并将volume成员设置为其
	他三维长度的乘积。
	c．编写一个使用这两个函数的简单程序。
*/

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void function_7_3(void);

/*
	7.4
	许多州的彩票发行机构都使用如程序清单7.4所示的简单彩票玩
	法的变体。在这些玩法中，玩家从一组被称为域号码（field number）的
	号码中选择几个。例如，可以从域号码1～47中选择5个号码；还可以从
	第二个区间（如1～27）选择一个号码（称为特选号码）。要赢得头
	奖，必须正确猜中所有的号码。中头奖的几率是选中所有域号码的几率
	与选中特选号码几率的乘积。例如，在这个例子中，中头奖的几率是从
	47个号码中正确选取5个号码的几率与从27个号码中正确选择1个号码的
	几率的乘积。请修改程序清单7.4，以计算中得这种彩票头奖的几率。

*/
void function_7_4(void);

/*
	7.5
	定义一个递归函数，接受一个整数参数，并返回该参数的阶
	乘。前面讲过，3的阶乘写作3!，等于3*2!，依此类推；而0!被定义为
	1。通用的计算公式是，如果n大于零，则n!=n*（n−1）!。在程序中对
	该函数进行测试，程序使用循环让用户输入不同的值，程序将报告这些
	值的阶乘。

*/
void function_7_5(void);


/*
	7.6
	编写一个程序，它使用下列函数：
	Fill_array( )将一个double数组的名称和长度作为参数。它提示用户
	输入double值，并将这些值存储到数组中。当数组被填满或用户输入了
	非数字时，输入将停止，并返回实际输入了多少个数字。
	Show_array( )将一个double数组的名称和长度作为参数，并显示该
	数组的内容。
	Reverse-array( )将一个double数组的名称和长度作为参数，并将存
	储在数组中的值的顺序反转。
	程序将使用这些函数来填充数组，然后显示数组；反转数组，然后
	显示数组；反转数组中除第一个和最后一个元素之外的所有元素，然后
	显示数组。

*/

void function_7_6(void);


/*
	7.7
	修改程序清单7.7中的3个数组处理函数，使之使用两个指针参
	数来表示区间。fill_array( )函数不返回实际读取了多少个数字，而是返
	回一个指针，该指针指向最后被填充的位置；其他的函数可以将该指针
	作为第二个参数，以标识数据结尾。
*/

const int Max = 5;

double* fill_array_7_7(double* begin, double* end);
void show_array_7_7(const double* begin, double* end);
void revalue_7_7(double r, double* begin, double* end);
void function_7_7(void);



/*
	7.8
	在不使用array类的情况下完成程序清单7.15所做的工作。编写
	两个这样的版本：
	a．使用const char *数组存储表示季度名称的字符串，并使用double
	数组存储开支。
	b．使用const char *数组存储表示季度名称的字符串，并使用一个
	结构，该结构只有一个成员——一个用于存储开支的double数组。这种
	设计与使用array类的基本设计类似。
*/
const int Seasons = 4;

struct epending
{
	double expenses[Seasons];
};

void function_7_8_a(void);
void function_7_8_b(void);

/*
	7.9
	这个练习让您编写处理数组和结构的函数。下面是程序的框
	架，请提供其中描述的函数，以完成该程序
*/

const int SLEN = 30;

struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
void function_7_9(void);

/*
	7.10
	设计一个名为calculate()的函数，它接受两个double值和一个指
	向函数的指针，而被指向的函数接受两个double参数，并返回一个
	double值。calculate()函数的类型也是double，并返回被指向的函数使用
	calculate()的两个double参数计算得到的值。
*/
void function_7_10(void);

/*
	8.1
	编写通常接受一个参数（字符串的地址），并打印该字符串的
	函数。然而，如果提供了第二个参数（int类型），且该参数不为0，则
	该函数打印字符串的次数将为该函数被调用的次数（注意，字符串的打
	印次数不等于第二个参数的值，而等于函数被调用的次数）。是的，这
	是一个非常可笑的函数，但它让您能够使用本章介绍的一些技术。在一
	个简单的程序中使用该函数，以演示该函数是如何工作的。
*/
void function_8_1(void);

/*
	8.2
	CandyBar结构包含3个成员。第一个成员存储candy bar的品牌名
	称；第二个成员存储candy bar的重量（可能有小数）；第三个成员存储
	candy bar的热量（整数）。请编写一个程序，它使用一个这样的函数，
	即将CandyBar的引用、char指针、double和int作为参数，并用最后3个值
	设置相应的结构成员。最后3个参数的默认值分别为“Millennium
	Munch”、2.85和350。另外，该程序还包含一个以CandyBar的引用为参
	数，并显示结构内容的函数。请尽可能使用const
*/


struct CandyBar
{
	char brand[20];
	double weight;
	int calorie;
};
void function_8_2(void);

/*
	8.3
	编写一个函数，它接受一个指向string对象的引用作为参数，并
	将该string对象的内容转换为大写，为此可使用表6.4描述的函数toupper(
	)。然后编写一个程序，它通过使用一个循环让您能够用不同的输入来
	测试这个函数，该程序的运行情况如下：
*/

void function_8_3(void);

/*
	8.5
	编写模板函数max5( )，它将一个包含5个T类型元素的数组作为
	参数，并返回数组中最大的元素（由于长度固定，因此可以在循环中使
	用硬编码，而不必通过参数来传递）。在一个程序中使用该函数，将T
	替换为一个包含5个int值的数组和一个包含5个dowble值的数组，以测试
	该函数。
*/
template<typename T>
T max5(const T* array);
void function_8_5(void);

/*
	8.6
	编写模板函数maxn( )，它将由一个T类型元素组成的数组和一
	个表示数组元素数目的整数作为参数，并返回数组中最大的元素。在程
	序对它进行测试，该程序使用一个包含6个int元素的数组和一个包含4个
	double元素的数组来调用该函数。程序还包含一个具体化，它将char指
	针数组和数组中的指针数量作为参数，并返回最长的字符串的地址。如
	果有多个这样的字符串，则返回其中第一个字符串的地址。使用由5个
	字符串指针组成的数组来测试该具体化。

*/
template<typename T>
T maxn(T* arr, int n);

template<>
const char* maxn(const char* str[], int n);
void function_8_6(void);

/*
	8.7
	修改程序清单 8.14，使其使用两个名为 SumArray()的模板函数
	来返回数组元素的总和，而不是显示数组的内容。程序应显示thing的总
	和以及所有debt的总和
*/

struct debts
{
	char name[50];
	double amount;
};

template<typename T>
T SumArray(T arr[], int n);

template<typename T>
T SumArray(T* arr[], int n);
void function_8_7(void);


/*
	9.2
	修改程序清单9.9：用string对象代替字符数组。这样，该程序将
	不再需要检查输入的字符串是否过长，同时可以将输入字符串同字符
	串“”进行比较，以判断是否为空行。
*/
void strcount(const string& str);
void function_9_2(void);


/*
	9.3
	下面是一个结构声明：
	编写一个程序，使用定位new运算符将一个包含两个这种结构的数
	组放在一个缓冲区中。然后，给结构的成员赋值（对于char数组，使用
	函数strcpy( )），并使用一个循环来显示内容。一种方法是像程序清单
	9.10那样将一个静态数组用作缓冲区；另一种方法是使用常规new运算
	符来分配缓冲区。
*/

const int BUF = 512;
static char buffer[BUF];
struct chaff
{
	char dross[20];
	int slag;
};
void function_9_3(void);

/*
    10.1
	为复习题5描述的类提供方法定义，并编写一个小程序来演示所
	有的特性
*/
#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

class BankAccount
{
private:
	std::string name;
	std::string acctnum;
	double balance;

public:
	BankAccount();
	BankAccount(const std::string& client, const std::string& num, double bal = 0.0);
	void show()const;
	void deposit(double cash);
	void withdraw(double cash);

};

#endif // !BANKACCOUNT_H_
void function_10_1(void);

/*
	10.2
	它使用了一个string对象和一个字符数组，让您能够比较它们的用
	法。请提供未定义的方法的代码，以完成这个类的实现。再编写一个使
	用这个类的程序，它使用了三种可能的构造函数调用（没有参数、一个
	参数和两个参数）以及两种显示方法。下面是一个使用这些构造函数和
	方法的例子：
*/

#ifndef PERSON_H_
#define PERSON_H_
using namespace std;

class Person
{
public:
	Person();
	Person(const string& ln, const char* fn = "Heyyou");
	void show_10_2() const;
	void FormalShow_10_2()const;
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
};
#endif // !PERSON_H_

void function_10_2(void);


/*
	10.3
	完成第9章的编程练习1，但要用正确的golf类声明替换那里的代
	码。用带合适参数的构造函数替换setgolf（golf &, const char *, int），
	以提供初始值。保留setgolf( )的交互版本，但要用构造函数来实现它
	（例如，setgolf( )的代码应该获得数据，将数据传递给构造函数来创建
	一个临时对象，并将其赋给调用对象，即*this）。
*/
void function_10_3(void);

#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
public:
	Golf(const char* name, int hc);
	Golf();
	void set_handicap(int hc);
	void showgolf()const;
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
};

#endif // !GOLF_H_

/*
	10.4
	完成第9章的编程练习4，但将Sales结构及相关的函数转换为一
	个类及其方法。用构造函数替换setSales（sales &，double [ ]，int）函
	数。用构造函数实现setSales（Sales &）方法的交互版本。将类保留在
	名称空间SALES中。
*/

#ifndef SALES_H_
#define SALES_H_

namespace SALES
{
	class Sales
	{
	public:
		Sales(double ar[], int n = 0);
		Sales();
		void show_sales()const;

	private:
		static const int QUARTERS = 4;
		double sales[QUARTERS];
		double average;
		double max;
		double min;

	};

}

#endif // !SALES_H_

void function_10_4(void);

/*
	10.5
	考虑下面的结构声明：
	编写一个程序，它从栈中添加和删除customer结构（栈用Stack类声
	明表示）。每次customer结构被删除时，其payment的值都被加入到总数
	中，并报告总数。注意：应该可以直接使用Stack类而不作修改；只需
	修改typedef声明，使Item的类型为customer，而不是unsigned long即可。
*/

#ifndef STACK1_H_
#define STACK1_H_
typedef struct customer
{
	char fullname[35];
	double payment;
}Item;

class Stack
{
public:
	Stack();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item& item);
	bool pop(Item& item);

private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
};
#endif // !STACK1_H_
void function_10_5(void);


/*
	10.6
	下面是一个类声明：
	请提供成员函数的定义和测试这个类的程序。
*/
void function_10_6(void);

#ifndef MOVE_H_
#define MOVE_H_
class Move
{
public:
	Move(double a = 0.0, double b = 0.0);
	void showmove()const;
	Move add(const Move& m) const;
	void reset(double a = 0.0, double b = 0.0);

private:

	double x;
	double y;
};
#endif // !MOVE_H_


/*
	10.7
	Betelgeusean plorg有这些特征。
	数据：
	plorg的名称不超过19个字符；
	plorg有满意指数（CI），这是一个整数。
	操作：
	新的plorg将有名称，其CI值为50；
	plorg的CI可以修改；
	plorg可以报告其名称和CI；
	plorg的默认名称为“Plorga”。
	请编写一个Plorg类声明（包括数据成员和成员函数原型）来表示
	plorg，并编写成员函数的函数定义。然后编写一个小程序，以演示
	Plorg类的所有特性。

*/

#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
public:
	Plorg();
	void reset_ci();
	void show_plorg()const;
	void creat_new_plorg(const char* newname);

private:
	char fullname[20];
	int ci;

};

#endif // !PLORG_H_

void function_10_7(void);

/*
	10.8
	可以将简单列表描述成下面这样：
	可存储0或多个某种类型的列表；
	可创建空列表；
	可在列表中添加数据项；
	可确定列表是否为空；
	可确定列表是否为满；
	可访问列表中的每一个数据项，并对它执行某种操作。
	可以看到，这个列表确实很简单，例如，它不允许插入或删除数据
	项。
	请设计一个List类来表示这种抽象类型。您应提供头文件list.h和实
	现文件list.cpp，前者包含类定义，后者包含类方法的实现。您还应创建
	一个简短的程序来使用这个类。
	该列表的规范很简单，这主要旨在简化这个编程练习。可以选择使
	用数组或链表来实现该列表，但公有接口不应依赖于所做的选择。也就
	是说，公有接口不应有数组索引、节点指针等。应使用通用概念来表达
	创建列表、在列表中添加数据项等操作。对于访问数据项以及执行操
	作，通常应使用将函数指针作为参数的函数来处理：
	其中，pf指向一个将Item1引用作为参数的函数（不是成员函数），
	Item1是列表中数据项的类型。visit( )函数将该函数用于列表中的每个数
	据项
*/

void function_10_8(void);

#ifndef LIST_H_
#define LIST_H_

typedef int Item1;

class List
{
public:
	List();
	void add_data(Item1 Item);
	bool is_empty();
	bool is_full();
	void visit(void (*pf)(Item1&));

private:
	static const int MAX = 10;
	Item1 Item1s[MAX];
	int index;

};

#endif // !LIST_H_

/*
	11.1
	修改程序清单11.5，使之将一系列连续的随机漫步者位置写入
	到文件中。对于每个位置，用步号进行标示。另外，让该程序将初始条
	件（目标距离和步长）以及结果小结写入到该文件中。该文件的内容与
	下面类似
*/

/*
	11.3
	修改程序清单11.15，使之报告N次测试中的最高、最低和平均
	步数（其中N是用户输入的整数），而不是报告每次测试的结果。

*/


#ifndef VECT_H_
#define VECT_H_

namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode { RECT, POL };

	private:

		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();

	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode from = RECT);
		~Vector();
		double xval()const { return x; }
		double yval()const { return y; }
		double magval()const { return mag; }
		double angval()const { return ang; }

		void polar_mode();
		void rect_mode();

		Vector operator+(const Vector& b)const;
		Vector operator-(const Vector& b)const;
		Vector operator-()const;
		Vector operator*(double n)const;

		friend Vector operator*(double n, const Vector& a);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
	};
}
#endif // !VECT_H_
void function_11_1(void);
void function_11_3(void);

/*
	11.4
	重新编写最后的Time类示例（程序清单11.10、程序清单11.11和
	程序清单11.12），使用友元函数来实现所有的重载运算符。
*/

#ifndef MYTIME3_H_
#define MYTIME3_H_

class Time
{
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	friend Time operator+(const Time& a, const Time& b);
	friend Time operator-(const Time& a, const Time& b);
	friend Time operator*(const Time& t, double n);
	friend Time operator*(double m, const Time& t) { return t * m; }
	friend std::ostream& operator<<(std::ostream& os, const Time& t);

private:
	int hours;
	int minutes;

};

#endif // !MYTIME3_H_

void function_11_4(void);


/*
	11.5
	重新编写Stonewt类（程序清单11.16和程序清单11.17），使它
	有一个状态成员，由该成员控制对象应转换为英石格式、整数磅格式还
	是浮点磅格式。重载<<运算符，使用它来替换show_stn( )和show_lbs( )
	方法。重载加法、减法和乘法运算符，以便可以对Stonewt值进行加、
	减、乘运算。编写一个使用所有类方法和友元的小程序，来测试这个
	类
*/

/*
	11.6
	重新编写Stonewt类（程序清单11.16和程序清单11.17），重载
	全部6个关系运算符。运算符对pounds成员进行比较，并返回一个bool
	值。编写一个程序，它声明一个包含6个Stonewt对象的数组，并在数组
	声明中初始化前3个对象。然后使用循环来读取用于设置剩余3个数组元
	素的值。接着报告最小的元素、最大的元素以及大于或等于11英石的元
	素的数量（最简单的方法是创建一个Stonewt对象，并将其初始化为11
	英石，然后将其同其他对象进行比较）。
*/


#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
public:

private:
	enum
	{
		Lbs_per_stn = 14 //一英石等于14英镑
	};
	int stone;
	double pds_left;
	double pounds;
	int pounds_int;

public:

	explicit Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	

	bool operator<(const Stonewt& st)const;
	bool operator>(const Stonewt& st)const;
	bool operator<=(const Stonewt& st)const;
	bool operator>=(const Stonewt& st)const;
	bool operator==(const Stonewt& st)const;
	bool operator!=(const Stonewt& st)const;

	friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};

#endif // !STONEWT_H_

void function_11_5_6(void);

/*
	11.7
	复数有两个部分组成：实数部分和虚数部分。复数的一种书写
	方式是：（3.0，4.0），其中，3.0是实数部分，4.0是虚数部分。假设a
	= (A, Bi)，c = (C, Di)，则下面是一些复数运算。
	加法：a + c = (A+C, (B+D)i)。
	减法：a – c = (A−C, (B−D)i)。
	乘法：a * c = (A*C−B*D, (A*D + B*C)i)。
	乘法::x*c = (x * C, x *Di)，其中x为实数。
	共轭：~a = (A, −Bi)。
	请定义一个复数类，以便下面的程序可以使用它来获得正确的结
	果
*/

void function_11_7(void);

#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class complex
{
private:
	double real;
	double imag;

public:
	complex(double r = 0, double i = 0);
	~complex();
	complex operator+(const complex& t)const;
	complex operator-(const complex& t)const;
	complex operator*(const complex& t)const;
	complex operator*(double x)const;
	complex operator~()const;

	friend complex operator*(double x, const complex& t) { return t * x; }
	friend std::istream& operator>>(std::istream& is, complex& t);
	friend std::ostream& operator<<(std::ostream& os, const complex& t);
};

#endif // !COMPLEX0_H_
