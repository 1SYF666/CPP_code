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