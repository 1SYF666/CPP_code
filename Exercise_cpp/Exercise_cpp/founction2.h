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