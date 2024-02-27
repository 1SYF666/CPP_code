#define _CRT_SECURE_NO_WARNINGS 1

#include"function.h"

void function_6_1(char* ch)
{
	cout << "Type,and I shall repeat(@ to qiit)." << endl;
	while (cin.get(*ch) && *ch != '@')
	{
		*ch = (islower(*ch) ? toupper(*ch) : tolower(*ch));

		// int isdigit(int c);
		// 如果c是一个数字，则该函数返回非零值，否则返回0。

		if (!isdigit(*ch))
		{
			// 输出非字符
			cout.put(*ch);
		}
	}

	cout << "\nPlease excuse the slight confusion." << endl;



}

const int ArSize = 10;
void function_6_2(void)
{
	int i = 0, j = 0;

	unsigned int count = 0;

	array<double, ArSize> donations;
	double total = 0.0, average = 0.0;

	cout << "You may enter up to " << ArSize;
	cout << "donation (q to terminate)." << endl;
	cout << "donation #1: ";

	while (i<ArSize && cin >> donations[i])
	{
		if (++i < ArSize)
		{
			cout << "donation #" << i + 1 << ": ";
		}
	}

	for (j = 0; j < i; j++)
	{
		total += donations[j];
	}
	average = total / i;

	for (j = 0; j < i; j++)
	{
		count += (average < donations[j] ? 1 : 0);
	}

	if (i > 0)
	{
		cout << "Average of " << i << " donations is " << average << endl;
		cout << count << " number" << (count > 1 ? "s are " : " is ") << "greater than the average." << endl;
	}
	else
	{
		cout << "No donation!" << endl;
	}

}

void show_menu()
{
	cout << "Please enter one of the following choices: " << endl;
	cout << "c)carnivore p)pianist" << endl;
	cout << "t)tree      g)game" << endl;
}
void function_6_3(void)
{
	char ch;
	show_menu();

	while (cin >> ch)
	{
		switch (ch)
		{
		case 'c':
		{
			cout << "Pandas are also carnovores." << endl;
			break;
		}
		case 'p':
		{
			cout << "Mozart is an excellent pianist." << endl;
			break;
		}
		case 't':
		{
			cout << "A maple is a tree" << endl;
			break;
		}
		case 'g':
		{
			cout << "Playing game can relax yourself." << endl;
			break;
		}
		default:
		{
			cout << "Please enter c,p,t,or g: ";
			break;
		}
		}

		if ('c' == ch || 'p' == ch || 't' == ch || 'g' == ch)
		{
			break;
		}
	}

}