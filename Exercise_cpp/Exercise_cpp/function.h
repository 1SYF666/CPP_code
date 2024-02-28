#pragma once
#include<iostream>
#include<cctype>
#include<array>
#include<string> //getline
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
	6.6．
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