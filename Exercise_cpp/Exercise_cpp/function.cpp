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

void show_menu_6_3()
{
	cout << "Please enter one of the following choices: " << endl;
	cout << "c)carnivore p)pianist" << endl;
	cout << "t)tree      g)game" << endl;
}
void function_6_3(void)
{
	char ch;
	show_menu_6_3();

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





void show_menu_6_4()
{
	cout << "Benevolent Order of programmers Report" << endl;
	cout << "a. display by name	b. display by title " << endl;
	cout << "c. display by bopname	d. display by preference" << endl;
	cout << "q. quit" << endl;
}

void function_6_4(void)
{
	char ch;
	bop people[NUM] =
	{
		{"Wimp Macho","Teacher","WMA",0},
		{"Raki Rhodes","Junior Programmer","RHES",1},
		{"Celia Laiter","Professor","MIPS",2},
		{"Hoppy Hipman","Analyst Trainee","HPAN",1},
		{"Pat Hand","Animal Keeper","LOOPY",2},

	};
	show_menu_6_4();
	cout << "Enter your choice: ";
	while (cin >> ch && ch != 'q')
	{
		switch (ch)
		{
		case 'a':
		{
			for (int i = 0; i < NUM; i++)
			{
				cout << people[i].fullname << endl;
			}
			break;
		}
		case 'b':
		{
			for (int i = 0; i < NUM; i++)
			{
				cout << people[i].title << endl;
			}
			break;
		}
		case 'c':
		{
			for (int i = 0; i < NUM; i++)
			{
				cout << people[i].bopname << endl;
			}
			break;
		}
		case 'd':
		{
			for (int i = 0; i < NUM; i++)
			{
				switch (people[i].perference)
				{
				case 0:
				{
					cout << people[i].fullname << endl;
					break;
				}
				case 1:
				{
					cout << people[i].title << endl;
					break;
				}
				case 2:
				{
					cout << people[i].bopname << endl;
					break;
				}
				}
			}
		}

		default:
		{
			cout << "Illegal input!" << endl;
			break;
		}
		}
		cout << "Next choice: ";
	}
	cout << "Bye!" << endl;


}

const double TVARPS_5000 = 0.0;
const double TVARPS_5001_to_15000 = 0.1;
const double TVARPS_15001_to_35000 = 0.15;
const double TVARPS_35000 = 0.2;

void function_6_5(void)
{
	double wage, tax;
	cout << "Please enter your wage (q or <0 to quit): ";
	while (cin >> wage && wage > 0)
	{
		cout << "You wage: " << wage << " tvarps.\n";
		if (wage < 5000)
		{
			tax = 0.0;
		}
		else if (wage < 15000)
		{
			tax = (wage - 5000) * TVARPS_5001_to_15000;
		}
		else if (wage < 35000)
		{
			tax = (wage - 15000) * TVARPS_15001_to_35000 + 10000 * TVARPS_5001_to_15000;
		}
		else
		{
			tax = (wage - 35000) * TVARPS_35000 + 20000 * TVARPS_15001_to_35000 + 10000 * TVARPS_5001_to_15000;
		}
		cout << "Your tax: " << tax << " tvarps.\n";
		cout << "Next wage (q or <0 to quit): ";
	}
	cout << "Bye." << endl;


}





void function_6_6(void)
{
	int i, num;
	unsigned int patrons = 0;
	unsigned int grand_patrons = 0;

	cout << "Please enter the number of donators: ";
	(cin >> num).get();
	corporation* people = new corporation[num];

	for (i = 0; i < num; i++)
	{
		cout << "Please enter name #" << i + 1 << ": ";
		getline(cin, people[i].name);
		cout << "Please enter the amount of donation #" << i + 1 << ": ";
		while (!(cin >> people[i].money))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Please enter a number: ";
		}
		cin.get();
	}

	for (i = 0; i < num; i++)
	{
		(HIGH_MONEY < people[i].money) ? ++grand_patrons : ++patrons;
	}
	cout << "\nGrand Patrons:" << endl;
	if (grand_patrons != 0)
	{
		for (i = 0; i < num; i++)
		{
			if (people[i].money > HIGH_MONEY)
			{
				cout << "Name: " << people[i].name;
				cout << "\nMoney: " << people[i].money << endl;

			}
		}
	}
	else
	{
		cout << "none" << endl;
	}
	cout << "\nPatrons:" << endl;
	if (patrons != 0)
	{
		for (i = 0; i < num; i++)
		{
			if (people[i].money < HIGH_MONEY)
			{
				cout << "Name: " << people[i].name;
				cout << "\nMoney: " << people[i].money << endl;
			}
		}
	}
	else
	{
		cout << "none" << endl;
	}
	delete[] people;


}


void function_6_7(void)
{
	string words;
	unsigned int vowels = 0;
	unsigned int consonants = 0;
	unsigned int others = 0;

	cout << "Enter words (q to quit): " << endl;
	while (cin >> words, words != "q")
	{
		if (isalpha(words[0]))
		{
			switch (tolower(words[0]))
			{
			case 'a':
			case 'b':
			case 'i':
			case 'o':
			case 'u':
			{
				++vowels;
				break;
			}
			default:
			{
				++consonants;
				break;
			}

			}
		}
		else
		{
			++others;
		}

	}
	cout << vowels << "words beginning with vowels" << endl;
	cout << consonants << "words beginning with consonants" << endl;
	cout << others << "others" << endl;

}


void function_6_8(void)
{
	char ch;
	ifstream infile;
	string filename;
	unsigned int count = 0;
	cout << "Please enter name of data file: ";
	getline(cin, filename);
	infile.open(filename);

	if (!infile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating. " << endl;
		exit(EXIT_FAILURE);
	}
	while (infile.get(ch), infile.good())
	{
		++count;
		cout.put(ch);
	}
	if (count > 0)
	{
		cout << count << " characters in the file " << filename << endl;
	}
	else
	{
		cout << "No data processed." << endl;
	}

	infile.close();

}


void function_6_9(void)
{
	int i, num;
	string filename;
	ifstream infile;
	unsigned int patrons = 0;
	unsigned int grand_patrons = 0;

	cout << "Please enter name of data file: ";
	getline(cin, filename);
	infile.open(filename);

	if (!infile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating." << endl;
		exit(EXIT_FAILURE);
	}

	(infile >> num).get();

	corporation* people = new corporation[num];

	for (i = 0; i < num && infile.good(); i++)
	{
		getline(infile, people[i].name);
		while (!(infile >> people[i].money))
		{
			infile.clear();
			while (infile.get() != '\n')
			{
				continue;
			}

		}
		while (infile.get() != '\n')
		{
			continue;
		}
	}
	infile.close();

	for (i = 0; i < num; i++)
	{
		(HIGH_MONEY < people[i].money) ? ++grand_patrons : ++patrons;
	}
	cout << "\nGrand Patrins:" << endl;

	if (grand_patrons != 0)
	{
		for (i = 0; i < num; i++)
		{
			if (people[i].money > HIGH_MONEY)
			{
				cout << "Name: " << people[i].name;
				cout << "\nMoney: " << people[i].money << endl;
			}
		}
	}
	else
	{
		cout << "none" << endl;
	}
	cout << "\nPatrins:" << endl;

	if (patrons != 0)
	{
		for (i = 0; i < num; i++)
		{
			if (people[i].money < HIGH_MONEY)
			{
				cout << "Name: " << people[i].name;
				cout << "\nMoney: " << people[i].money << endl;
			}
		}
	}
	else
	{
		cout << "none" << endl;
	}


}

double harmonic_mean_7_1(double x, double y)
{
	return 2.0 * x * y / (x + y);
}
void function_7_1(void)
{
	double a, b;
	cout << "Please enter two numbers(0 to quit): ";
	while (cin >> a >> b && a && b)
	{
		cout << "The harmonic mean of " << a;
		cout << " and " << b << " is ";
		cout << harmonic_mean_7_1(a, b) << endl;
		cout << "Next two numbers (0 to quit): ";
	}
	cout << "Bye." << endl;

}

const int ArSize_7_2 = 10;
int initiliza_array(double arr[], int n);
void show_array_7_2(const double arr[], int n);
void count_average_7_2(const double arr[], int n);

void function_7_2(void)
{
	double golf[ArSize_7_2];
	int n = initiliza_array(golf, ArSize_7_2);
	show_array_7_2(golf, n);
	count_average_7_2(golf, n);
	cout << "Bye." << endl;

}

int initiliza_array(double arr[], int n)
{
	int i = 0;
	cout << "You can enter up to " << ArSize_7_2;
	cout << " golf scores (q to terminate)." << endl;
	cout << "Golf scores #1: ";
	while (i<n && cin >> arr[i])
	{
		if (++i < ArSize_7_2)
		{
			cout << "Golf scores #" << i + 1 << ": ";
		}
	}
	return i;
}

void show_array_7_2(const double arr[], int n)
{
	cout << "All golf scores:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}


void count_average_7_2(const double arr[], int n)
{
	double aver = 0.0;
	for (int i = 0; i < n; i++)
	{
		aver += arr[i];
	}
	aver /= n;
	cout << "Average golf scores: " << aver << endl;
}
