﻿#define _CRT_SECURE_NO_WARNINGS 1

#include"function.h"

void function_6_1(char* ch)
{
	cout << "Type,and I shall repeat(@ to qiit)." << endl;
	while (cin.get(*ch) && *ch != '@')
	{
		*ch = (islower(*ch) ? toupper(*ch) : tolower(*ch));

		// int isdigit(int c);
		// ���c��һ�����֣���ú������ط���ֵ�����򷵻�0��

		if (!isdigit(*ch))
		{
			// ������ַ�
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

void value_show_box(box temp);
void address_show_box(box* temp);
void function_7_3(void)
{
	box smallbox = { "Cute box",20,10,30,50 };
	value_show_box(smallbox);
	address_show_box(&smallbox);
	value_show_box(smallbox);

}

void value_show_box(box temp)
{
	cout << "Box informations: " << endl;
	cout << "Name: " << temp.maker << endl;
	cout << "height: " << temp.height << endl;
	cout << "width: " << temp.width << endl;
	cout << "length: " << temp.length << endl;
	cout << "volume: " << temp.volume << endl;
}

void address_show_box(box* temp)
{
	temp->volume = temp->height * temp->width * temp->length;

}

long double probability(unsigned numbers, unsigned picks);
void function_7_4(void)
{
	unsigned total, choices, temp;
	cout << "Enter the total number of choices on the game card and\n";
	cout << "the number of picks allowed and the second section(<= total number):" << endl;

	while ((cin >> total >> choices >> temp) && choices <= total && temp <= total)
	{

		cout << "You have one chance in ";
		cout << probability(total, choices) * probability(temp, 1);
		cout << " of winning.\n";
		cout << "Next three numbers (q to quit): ";
	}

}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
	{
		result *= n / p;
	}
	return result;

}

long long factorial(long long n)
{
	return n > 0 ? n * factorial(n - 1) : 1;
}

void function_7_5(void)
{
	long long temp;
	cout << "Please enter a number (<0 or q to quit): ";
	while (cin >> temp && temp >= 0)
	{
		cout << temp << "! = " << factorial(temp) << endl;
		cout << "Next number (<0 or q to quit ): ";
	}
	cout << "Bye." << endl;

}

const int ArSize_7_6 = 10;

int Fill_array_7_6(double arr[], int n)
{
	int i = 0;
	cout << "You can enter up to " << ArSize_7_6;
	cout << " numbers(q to terminate)." << endl;
	cout << "Number #1: ";
	while (i<n && cin >> arr[i])
	{
		if (++i < ArSize_7_6)
		{
			cout << "Number #" << i + 1 << ": ";
		}
	}

	return i;
}

void Show_array_7_6(const double arr[], int n)
{
	cout << "All numbers: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << endl;
}

void Resver_array_7_6(double arr[], int n)
{
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		swap(arr[i], arr[j]);
	}
}

void function_7_6(void)
{
	double arr[ArSize_7_6];
	int n = Fill_array_7_6(arr, ArSize_7_6);
	Show_array_7_6(arr, n);
	Resver_array_7_6(arr, n);
	Show_array_7_6(arr, n);
	Resver_array_7_6(arr + 1, n - 2);
	Show_array_7_6(arr, n);

	cout << "Bye." << endl;

}

double* fill_array_7_7(double* begin, double* end)
{
	int i;
	double temp;
	double* ptr = nullptr;

	for (i = 0, ptr = begin; ptr < end; i++, ptr++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Bad input;input process terminated.\n";
			break;
		}
		else if (temp < 0)
		{
			break;
		}
		*ptr = temp;
	}
	return begin + i;
}

void show_array_7_7(const double* begin, double* end)
{
	int i;
	const double* ptr = nullptr;

	for (i = 0, ptr = begin; ptr < end; i++, ptr++)
	{
		cout << "Property #" << (i + 1) << ": $";
	}

}

void revalue_7_7(double r, double* begin, double* end)
{
	for (double* pos = begin; pos < end; pos++)
	{
		*pos = r;
	}

}

void function_7_7(void)
{
	double properties[Max];

	double* size = fill_array_7_7(properties, properties + Max);
	show_array_7_7(properties, size);

	if (size - properties > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Bad input;Please enter a number: ";
		}
		revalue_7_7(factor, properties, size);

		show_array_7_7(properties, size);

	}

	cout << "Done.\n";
}


const char* Snames[Seasons] = { "Spring","Summer","Fall","Winter" };
void fill_7_8_a(double pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> pa[i];
	}
}
void show_7_8_a(const double pa[], int n)
{
	double total = 0.0;
	std::cout << "EXPENSES\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << Snames[i] << ":$" << pa[i] << endl;
		total += pa[i];
	}
	std::cout << "Total: $" << total << '\n';
}


void function_7_8_a(void)
{
	double expenses[Seasons];
	fill_7_8_a(expenses, Seasons);
	show_7_8_a(expenses, Seasons);
}


void fill_7_8_b(epending* temp)
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> temp->expenses[i];
	}

}
void show_7_8_b(epending* temp)
{
	double total = 0.0;
	std::cout << "EXPENSES\n";

	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Snames[i] << ": $" << temp->expenses[i] << endl;
		total += temp->expenses[i];
	}
	std::cout << "Total: $" << total << endl;
}

void function_7_8_b(void)
{
	epending temp;
	fill_7_8_b(&temp);
}


int getinfo_7_9(student pa[], int n)
{
	int i;

	cout << "You can enter up to " << n;
	cout << " students' messages (enter to terminate)." << endl;

	for (i = 0; i < n; i++)
	{
		cout << "Student #" << i + 1 << ": " << endl;
		cout << "Enter the fullname(a blank Line to quit): ";
		cin.getline(pa[i].fullname, SLEN);
		if ('\0' == pa[i].fullname[0])
		{
			break;
		}
		cout << "Enter the hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "Enter the ooplevel: ";
		while (!(cin >> pa[i].ooplevel))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Please enter an number: ";
		}
		cin.get();
	}

	return i;
}


void display1_7_9(student st)
{
	cout << "\nName: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Ooplevel: " << st.ooplevel << endl;
}
void display2_7_9(const student* ps)
{
	cout << "\nName: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->ooplevel << endl;

}
void display3_7_9(const student pa[], int n)
{
	if (n > 0)
	{
		cout << "\nAll students' information: " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "\nName: " << pa[i].fullname << endl;
			cout << "Hobby: " << pa[i].hobby << endl;
			cout << "Ooplevel: " << pa[i].ooplevel << endl;
		}
	}
}

void function_7_9(void)
{
	cout << "Enter class size: ";
	int class_size = 0;
	cin >> class_size;
	while (cin.get() != '\n')
	{
		continue;
	}

	student* ptr_stu = new student[class_size];

	int entered = getinfo_7_9(ptr_stu, class_size);

	for (int i = 0; i < entered; i++)
	{
		display1_7_9(ptr_stu[i]);
		display2_7_9(&ptr_stu[i]);
	}
	display3_7_9(ptr_stu, entered);
	cout << "Done\n";

	delete[] ptr_stu;


}


double calculate(double a, double b, double(*p)(double a, double b))
{
	return (*p)(a, b);
}
double add(double a, double b)
{
	return a + b;
}
double subtract(double a, double b)
{
	return a - b;
}
double multiply(double a, double b)
{
	return a * b;
}



void function_7_10(void)
{
	double a, b;
	double(*pf[3])(double a, double b) = { add,subtract,multiply };

	cout << "Enter two numbers (q to quit): ";
	while (cin >> a >> b)
	{
		for (int i = 0; i < 3; i++)
		{
			switch (i)
			{
			case 0:
			{
				cout << "The " << a << " + " << b << " answer is: " << (*pf[i])(a, b) << endl;
				break;
			}
			case 1:
			{
				cout << "The " << a << " - " << b << " answer is: " << (*pf[i])(a, b) << endl;
				break;
			}
			case 2:
			{
				cout << "The " << a << " * " << b << " answer is: " << (*pf[i])(a, b) << endl;
				break;
			}
			}
		}//for
		cout << "Next two numbers (q to quit) : ";

	}//while

	cout << "Done!" << endl;
}


void print_string(const char* str, int n = 0)
{
	static int count = 1;

	for (int i = 0; i < count; i++)
	{
		cout << str << endl;
	}

	++count;
}

void function_8_1(void)
{
	const char* str = "This is a test.";
	cout << "Only one parameter,print 1 times:" << endl;
	print_string(str);
	cout << "Having two parameter,can print 2 times:" << endl;
	print_string(str, 3);
	cout << "Bye." << endl;
}

void initialize_candybar(CandyBar& temp, const char* str = "Millennium Munch", double w = 2.85, int c = 350);
void show_candybar(const CandyBar& temp);

void function_8_2(void)
{
	CandyBar mycandybar;

	initialize_candybar(mycandybar);
	show_candybar(mycandybar);
}

void initialize_candybar(CandyBar& temp, const char* str, double w, int c)
{
	strcpy(temp.brand, str);
	temp.weight = w;
	temp.calorie = c;
}

void show_candybar(const CandyBar& temp)
{
	cout << "CandyBar information:" << endl;
	cout << "Brand: " << temp.brand << endl;
	cout << "Weight: " << temp.weight << endl;
	cout << "Calorie: " << temp.calorie << endl;
}

void print_upper_string(string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}
}


void function_8_3(void)
{
	string str;

	cout << "Enter a string (q to quit): ";
	while (getline(cin, str) && str != "q")
	{
		print_upper_string(str);
		cout << str << endl;
		cout << "Next string (q to quit): ";
	}
	cout << "Bye." << endl;

}

void function_8_5(void)
{
	int test1[5] = { 1,3,5,7,9 };
	double test2[5] = { 10.0,20.0,15.0,12.0,30.0 };
	cout << "The max of int array is :" << max5(test1) << endl;
	cout << "The max of double array is :" << max5(test2) << endl;
}

template<typename T>
T max5(const T* array)
{
	T maxv = array[0];

	for (int i = 1; i < 5; i++)
	{
		maxv = max(maxv, array[i]);
	}

	return maxv;
}


void function_8_6(void)
{
	int test1[6] = { 1,3,5,7,9,11 };
	double test2[4] = { 10.0,20.0,15.0,12.0 };
	const char* test3[5] = { "123","12345","123456","abcdefg","xio" };

	cout << "The max of int array is: " << maxn(test1, 6) << endl;
	cout << "The max of double array is: " << maxn(test2, 4) << endl;
	cout << "The max of string array is: " << maxn(test3, 5) << endl;
}

template<typename T>
T maxn(T* arr, int n)
{
	T maxv = arr[0];
	for (int i = 0; i < n; i++)
	{
		maxv = max(maxv, arr[i]);
	}
	return maxv;
}

template<>
const char* maxn(const char* str[], int n)
{
	const char* maxv = *str;

	for (int i = 1; i < n; i++)
	{
		if (strlen(maxv) < strlen(str[i]))
			maxv = str[i];
	}

	return maxv;
}

void function_8_7(void)
{
	int things[6] = { 13,31,103,301,310,130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe",2400.0},
		{"Ura Foxe",1300.0},
		{"Iby Stout",1800.0},
	};

	double* pd[3];
	for (int i = 0; i < 3; i++)
	{
		pd[i] = &mr_E[i].amount;
	}
	cout << "Listing Mr.E's total of things:\n";

	cout << SumArray(things, 6) << endl;
	cout << "Listing Mr.E's total of debts:\n";

	cout << SumArray(pd, 3) << endl;
}

template <typename T>
T SumArray(T arr[], int n)
{
	cout << "template A\n";
	double sum = 0.0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <typename T>
T SumArray(T* arr[], int n)
{
	cout << "template B\n";
	double sum = 0.0;
	for (int i = 0; i < n; i++)
	{
		sum += *arr[i];
	}
	return sum;
}

void function_9_2(void)
{
	string input;
	cout << "Enter a Line:\n";

	while (getline(cin, input), input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
	}

	cout << "Bye" << endl;
}

void strcount(const string& str)
{
	static int total = 0;

	cout << "\"" << str << "\"contains";
	total += str.size();
	cout << str.size() << " characters\n";
	cout << total << " characters total\n";
}

void function_9_3(void)
{
	char temp[20];
	chaff* str = new (buffer)chaff[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "Enter the content of dross #" << i + 1 << ": ";
		cin.getline(temp, 20);
		strcpy(str[i].dross, temp);
		cout << "Enter the content of slag #" << i + 1 << ": ";

		while (!(cin >> str[i].slag))
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

	for (int i = 0; i < 2; i++)
	{
		cout << "Chaff #" << i + 1 << ": " << endl;
		cout << "Dross #" << str[i].dross << ": " << endl;
		cout << "slag #" << str[i].slag << ": " << endl;
	}


}

void function_10_1(void)
{
	using std::cout;
	using std::endl;

	BankAccount temp("MZZDX", "1002", 666);

	cout << "Information of depositors:" << endl;
	temp.show();
	cout << "\nDeposit -1 dollar:" << endl;
	temp.deposit(-1);
	cout << "\nDeposit 100 dollars:" << endl;
	temp.deposit(100);
	cout << "\nWithdraw 6666 dollars:" << endl;
	temp.withdraw(6666);
	cout << "\nWithdraw 99 dollars:" << endl;
	temp.withdraw(99);
	cout << "\nNow information of depositors:" << endl;
	temp.show();
	cout << "Bye." << endl;


}


BankAccount::BankAccount()//Ĭ�Ϲ��캯��
{
	name = "no name";
	acctnum = "no acctnum";
	balance = 0.0;
}

BankAccount::BankAccount(const std::string& client, const std::string& num, double bal) //�û����캯��
{
	name = client;
	acctnum = num;
	balance = bal;
}

void BankAccount::show()const
{
	using std::cout;
	using std::endl;

	cout << "Name: " << name << endl;
	cout << "Acctum: " << acctnum << endl;
	cout << "Balance: " << balance << endl;
}

void BankAccount::deposit(double cash)
{
	using std::cout;
	using std::endl;

	if (cash <= 0)
	{
		cout << "Your deposit amount can't be less than 0!" << endl;
		return;
	}
	balance += cash;
	cout << "You deposit $" << cash << " successfully." << endl;
}

void BankAccount::withdraw(double cash)
{
	using std::cout;
	using std::endl;

	if (balance < cash)  // ȡ�������ڵ�ǰ�˻����ʱ�����
	{
		cout << "You can't withdraw more than your deposit!" << endl;
		return;
	}
	else if (cash <= 0)
	{
		cout << "Your witdrawal amount can't be less than 0!" << endl;
		return;
	}
	balance -= cash;
	cout << "You withdraw $" << cash << " successfully." << endl;
}



Person1::Person1()
{
	lname = "";
	fname[0] = '\0';
}



Person1::Person1(const string& ln, const char* fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person1::show_10_2()const
{
	std::cout << "The name format is:" << endl;
	std::cout << fname << "(firstname),";
	std::cout << lname << "(lastname).";
}

void Person1::FormalShow_10_2()const
{
	std::cout << "The name format is:" << endl;
	std::cout << lname << "(lastname),";
	std::cout << fname << "(firstname)." << endl;;
}

void function_10_2(void)
{
	using std::cout;
	using std::endl;

	Person1 one;
	Person1 two("Smythecraft");
	Person1 three("Dimwiddy", "Sam");

	one.show_10_2();
	cout << endl;
	one.FormalShow_10_2();

	two.show_10_2();
	cout << endl;
	two.FormalShow_10_2();

	three.show_10_2();
	cout << endl;
	three.FormalShow_10_2();

}

Golf::Golf(const char* name, int hc)
{
	strncpy(this->fullname, name, 40);
	this->fullname[39] = '\0';
	this->handicap = hc;
}

Golf::Golf()
{
	using std::cout;
	using std::cin;
	char tempname[40];
	int temphandicap;

	cout << "Please enter the fullname(enter to quit): ";
	cin.getline(tempname, Len);
	cout << "Please enter the handicap: ";
	while (!(cin >> temphandicap))
	{
		cin.clear();
		while (cin.get() != '\n')
		{
			continue;
		}
		cout << "Please enter an number: ";
	}
	cin.get();
	*this = Golf(tempname, temphandicap);

}

void Golf::set_handicap(int hc)
{
	this->handicap = hc;
}

void Golf::showgolf()const
{
	using namespace std;
	cout << "Name: " << this->fullname << endl;
	cout << "Handicap: " << this->handicap << endl;

}
void function_10_3(void)
{
	using std::cout;
	using std::endl;

	Golf temp1;
	Golf temp2("MZZDX", 666);

	cout << "The starting information1:" << endl;
	temp1.showgolf();
	temp1.set_handicap(998);
	cout << "After changing the handicap1:" << endl;
	temp1.showgolf();
	cout << "The starting information2:" << endl;
	temp2.showgolf();
	temp2.set_handicap(888);
	cout << "After changing the handicap2:" << endl;
	temp2.showgolf();
}


namespace SALES
{
	Sales::Sales(double ar[], int n)
	{
		double total = 0.0, max = ar[0], min = ar[0];
		for (int i = 1; i < n; i++)
		{
			this->sales[i] = ar[i],
				total += ar[i];
			max = ar[i] > max ? ar[i] : max;
			min = ar[i] < min ? ar[i] : min;
		}
		this->min = min;
		this->max = max;
		this->average = total / n;
	}

	Sales::Sales()
	{
		using namespace std;
		int len;
		cout << "Enter the length of sales(<=4 and >0): ";
		while (!(cin >> len) || len > 4 || len <= 0)
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Please enter a number (<=4 and >0):";
		}

		double* temp = new double[len];
		cout << "Please enter the sales:" << endl;

		for (int i = 0; i < len; i++)
		{
			cout << "Please enter the content #" << i + 1 << ":";
			while (!(cin >> temp[i]))
			{
				cin.clear();
				while (cin.get() != '\n')
				{
					continue;
				}
				cout << "Please enter a number: ";
			}
		}

		*this = Sales(temp, len);
		delete[] temp;
	}


	void Sales::show_sales()const
	{
		std::cout << "Sales average:" << this->average << std::endl;
		std::cout << "Sales max:" << this->max << std::endl;
		std::cout << "Sales min:" << this->min << std::endl;
	}

}


void function_10_4(void)
{
	using namespace SALES;
	double temp[4] = { 1.0,2.0,3.0,4.0 };
	Sales objects[2] =
	{
		Sales(temp,4),Sales()
	}; //��Ԫ��Ĭ�ϳ�ʼ������Ԫ���û���ʼ��

	std::cout << "The first object information:" << endl;
	objects[0].show_sales();
	std::cout << "The second object information:" << endl;
	objects[1].show_sales();
	std::cout << "Bye." << std::endl;


}


Stack::Stack()
{
	top = 0;
}

bool Stack::isempty()const
{
	return 0 == top;
}

bool Stack::isfull()const
{
	return MAX == top;
}

bool Stack::push(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
	{
		return false;
	}

}


void function_10_5(void)
{
	using namespace std;
	char ch;
	Stack st;
	Item temp;
	double total = 0.0;

	cout << "a to add a customer." << endl;
	cout << "d to delete a customer." << endl;
	cout << "q to exit a customer." << endl;
	cout << "Please enter your choice: ";

	while (cin >> ch && tolower(ch) != 'q')
	{
		while (cin.get() != '\n')
		{
			continue;
		}
		if (tolower(ch) != 'a' && tolower(ch) != 'd')
		{
			cout << "Please enter a,d,or q: ";
			continue;
		}

		switch (tolower(ch))
		{
		case 'a':
		{
			cout << "Enter the customer's fullname: ";
			cin.getline(temp.fullname, 35);
			cout << "Enter the customer's payment: ";
			while (!(cin >> temp.payment))
			{
				cin.clear();
				while (cin.get() != '\n')
				{
					continue;
				}
				cout << "Please enter an number: ";
			}

			if (st.isfull())
			{
				cout << "Can't add new customer." << endl;
			}
			else
			{
				st.push(temp);
			}
			break;
		}

		case 'd':
		{
			if (st.isempty())
			{
				cout << "No any customer.\n";
			}
			else
			{
				st.pop(temp);
				total += temp.payment;
				cout << "Customer " << temp.fullname << "will quit." << endl;
				cout << "Now the total payment are: " << total << endl;
			}
			break;
		}

		default:
			break;
		}

		cout << "\n\n\n";
		cout << "a to add a customer." << endl;
		cout << "d to delete a customer." << endl;
		cout << "q to exit the menu." << endl;
		cout << "Please enter your choice: ";
	}

	cout << "Bye." << endl;

}


Move::Move(double a, double b)
{
	x = a, y = b;
}

void Move::showmove()const
{
	std::cout << "x=" << x << std::endl;
	std::cout << "y=" << y << std::endl;
}


Move Move::add(const Move& m)const
{
	return Move(m.x + x, m.y + y);
}

void Move::reset(double a, double b)
{
	x = a, y = b;
}


void function_10_6(void)
{
	using std::cout;
	using std::endl;

	Move temp;

	cout << "Starting values:" << endl;
	temp.showmove();
	cout << "After x=2,y+5:" << endl;
	temp.reset(2, 5);
	temp.showmove();
	cout << "After adding new object value:" << endl;
	temp = temp.add(temp);
	temp.showmove();

}



Plorg::Plorg()
{
	strcpy(fullname, "Plorga");
}

void ::Plorg::reset_ci()
{
	using std::cin;
	using std::cout;

	int my_ci;

	cout << "Please enter an new ci number: ";

	while (!(cin >> my_ci))
	{
		cin.clear();
		while (cin.get() != '\n')
		{
			continue;
		}
		cout << "Please enter an number: ";
	}
	this->ci = my_ci;
}

void Plorg::show_plorg()const
{
	using std::cout;
	using std::endl;

	cout << "The plorg name is: " << this->fullname << endl;
	cout << "The plorg ci is: " << this->ci << endl;
}


void Plorg::creat_new_plorg(const char* newname)
{
	strncpy(fullname, newname, 19);
	fullname[19] = '\0';
	this->ci = 50;
}

void function_10_7(void)
{
	using std::cout;
	using std::endl;
	Plorg temp;

	cout << "The starting plorg information: " << endl;
	temp.show_plorg();
	temp.creat_new_plorg("MZZDX");

	cout << "\nAfter changing name and ci:" << endl;
	temp.show_plorg();
	temp.reset_ci();

	cout << "\nAfter changing ci:" << endl;
	temp.show_plorg();
	cout << "Bye." << endl;
}


List::List()
{
	index = 0;
}

void List::add_data(Item1 Item)
{
	Item1s[index++] = Item;
}

bool List::is_empty()
{
	return 0 == index;
}

bool List::is_full()
{
	return MAX == index;
}

void List::visit(void (*pf)(Item1&))
{
	for (int i = 0; i < this->index; i++)
	{
		(*pf)(this->Item1s[i]);
	}

}

void traverse(Item1& Item)
{
	std::cout << Item << ' ';
}

void function_10_8(void)
{
	using namespace std;
	char ch;
	Item1 temp;
	List mylist;

	cout << "The list include following functions:" << endl;
	cout << "a to add an number." << endl;
	cout << "v to visit every number." << endl;
	cout << "q to exit the menu." << endl;
	cout << "Please enter your choice: ";

	while (cin >> ch && tolower(ch) != 'q')
	{
		while (cin.get() != '\n')
		{
			continue;
		}

		if (tolower(ch) != 'a' && tolower(ch) != 'v')
		{
			cout << "Please enter a,v,or q: ";
			continue;
		}

		switch (tolower(ch))
		{
		case 'a':
		{
			cout << "Please enter an number: ";
			while (!(cin >> temp))
			{
				cin.clear();
				while (cin.get() != '\n')
				{
					continue;
				}
				cout << "Please enter an number again:";
			}
			if (mylist.is_full())
			{
				cout << "The list is full. Can't add new number." << endl;
			}
			else
			{
				mylist.add_data(temp);
				cout << "Add number " << temp << " successfuly." << endl;
			}
			break;
		}

		case 'v':
		{
			if (mylist.is_empty())
			{
				cout << "No number.\n";
			}
			else
			{
				cout << "Visit every number:" << endl;
				mylist.visit(traverse);
			}
			break;
		}

		default:
			break;
		}


		cout << "\n\n\n";
		cout << "The list include following functions:" << endl;
		cout << "a to add an number." << endl;
		cout << "v to visit every number." << endl;
		cout << "q to exit the menu." << endl;
		cout << "Please enter your choice: ";
	}

	cout << "Bye." << endl;


}


using std::atan;
using std::atan2;
using std::cos;
using std::cout;
using std::sin;
using std::sqrt;

namespace VECTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);

	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}

	void Vector::set_ang()
	{
		if (x == 0.0 && y == 0.0)
		{
			ang = 0.0;
		}
		else
		{
			ang = atan2(y, x);
		}

	}

	void Vector::set_x()
	{
		x = mag * cos(ang);
	}

	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to vector() --";
			cout << "vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}

	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n1;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{

	}

	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+(const Vector& b)const
	{
		return Vector(x + b.x, y + b.y);

	}

	Vector Vector::operator-(const Vector& b)const
	{
		return Vector(x - b.x, y - b.y);

	}

	Vector Vector::operator-()const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n)const
	{
		return Vector(n * x, n * y);
	}

	Vector operator*(double n, const Vector& a)
	{
		return a * n;
	}

	std::ostream& operator<<(std::ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
		{
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		}
		else if (v.mode == Vector::POL)
		{
			os << "(m,a)=(" << v.mag << ", ";
			os << v.ang * Rad_to_deg << ")";

		}
		else
		{
			os << "Vector object mode is invalid";
		}

		return os;
	}

}
void function_11_1(void)
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));

	double direction;
	Vector step;
	Vector result(0.0, 0.0);

	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream fout;

	fout.open("temp.txt");
	cout << "Enter target distance(q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
		{
			break;
		}
		fout << "Target Distance: " << target;
		fout << ",Step Size: " << dstep << endl;
		fout << "0: " << result << endl;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			fout << steps << ": " << result << endl;
		}
		fout << "After " << steps << "steps,the subject ";
		fout << "has the following location:\n ";
		fout << result << endl;

		result.polar_mode();
		fout << " or\n";
		fout << result << endl;
		fout << "Average outward distance per step = ";
		fout << result.magval() / steps << endl;
		fout << endl;

		cout << "After " << steps << " steps,the subject ";
		cout << "has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n";
		cout << result << endl;
		cout << "Average outward distance per step = ";
		cout << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit):";
	}

	cin.clear();
	while (cin.get() != '\n')
	{
		continue;
	}
	fout.close();
	cout << "Bye!\n";
}

void function_11_3(void)
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);

	unsigned long steps = 0;
	double target = 50.0;
	double dstep = 2.0;
	unsigned long i, n, maxv, minv;
	double average = 0.0;

	cout << "target distance :" << target << endl;;
	cout << "Step length: " << dstep << endl;
	cout << "Please you enter running time:";

	while (!(cin >> n))
	{
		cin.clear();
		while (cin.get() != '\n')
		{
			continue;
		}
		cout << "Please enter an number: ";
	}

	i = 0, maxv = 0, minv = ULONG_MAX;

	while (i < n)
	{
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}

		maxv = maxv < steps ? steps : maxv;
		minv = minv > steps ? steps : minv;
		average += steps;

		cout << "Time #" << i + 1 << ':' << endl;
		cout << "After " << steps << " steps, the subject ";
		cout << "has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n";
		cout << result << endl;
		cout << "Average outward distance per step = ";
		cout << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		++i;

	}

	cout << "The maximum steps are: " << maxv << endl;
	cout << "The minimum steps are: " << minv << endl;
	cout << "The average steps are: " << average / n << endl;
	cout << "Bye!\n";
}

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::AddHr(int h)
{
	hours += h;
}
void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}
Time operator+(const Time& a, const Time& b)
{
	Time sum;
	sum.minutes = a.minutes + b.minutes;
	sum.hours = a.hours + b.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
Time operator-(const Time& a, const Time& b)
{
	Time diff;
	int tot1, tot2;
	tot1 = a.minutes + 60 * a.hours;
	tot2 = b.minutes + 60 * b.hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}
Time operator*(const Time& t, double mult)
{
	Time result;
	long totalminutes = t.hours * mult * 60 + t.minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

std::ostream& operator<<(std::ostream& os, const Time& t)
{
	os << t.hours << "hours," << t.minutes << "minutes";
	return os;
}

void function_11_4(void)
{
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida and Tosca:\n";
	cout << aida << ";" << tosca << endl;
	temp = aida + tosca;
	cout << "Aida+Tosca: " << temp << endl;
	temp = aida * 1.17;
	cout << "Aida*1.17: " << temp << endl;
	cout << "10.0*tosca: " << 10.0 * tosca << endl;
}

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn, pds_left = lbs;
	pounds = stn * Lbs_per_stn;
}
Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt()
{

}


bool Stonewt::operator<(const Stonewt& st)const
{
	return pounds < st.pounds;
}
bool Stonewt::operator>(const Stonewt& st)const
{
	return pounds > st.pounds;
}
bool Stonewt::operator<=(const Stonewt& st)const
{
	return pounds <= st.pounds;
}
bool Stonewt::operator>=(const Stonewt& st)const
{
	return pounds >= st.pounds;
}
bool Stonewt::operator==(const Stonewt& st)const
{
	return pounds == st.pounds;
}
bool Stonewt::operator!=(const Stonewt& st)const
{
	return pounds != st.pounds;
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st)
{
	os << st.pounds << " pounds.\n";
	return os;
}


void function_11_5_6(void)
{
	using std::cin;
	using std::cout;
	using std::endl;

	double val;
	Stonewt minv, maxv;
	Stonewt temp(11, 0.0);
	Stonewt wt[6] = { Stonewt(285.7),Stonewt(21,8),Stonewt(12.0) };

	int count = 0;

	for (int i = 3; i < 6; i++)
	{
		cout << "Please enter an number for pounds: ";
		while (!(cin>>val))
		{
			cin.clear();
			while (cin.get()!='\n')
			{
				continue;
			}
			cout << "Illegal input! Enter an number: ";
		}
		wt[i] = Stonewt(i + 1, val);
	}
	minv = maxv = wt[0];
	for (int i = 0; i < 6; i++)
	{
		minv = wt[i] < minv ? wt[i] : minv;
		maxv = wt[i] > maxv ? wt[i] : maxv;
		count += wt[i] >= temp;
	}

	cout << "The minimum pounds are: " << minv;
	cout << "The maximum pounds are: " << maxv;
	cout << "There are " << count << " elements more than 11 stones." << endl;

}


complex::complex(double r, double i)
{
	real = r, imag = i;
}
complex::~complex()
{

}
complex complex::operator+(const complex& t)const
{
	return complex(real + t.real, imag + t.imag);
}
complex complex::operator-(const complex& t)const
{
	return complex(real - t.real, imag - t.imag);
}
complex complex::operator*(const complex& t)const
{
	return complex(real * t.real - imag * t.imag, real * t.imag + imag * t.imag);
}
complex complex::operator*(double x)const
{
	return complex(x * real, x * imag);
}
complex complex::operator~()const
{
	return complex(real, -imag);
}


std::istream& operator>>(std::istream& is, complex& t)
{
	std::cout << "real";
	if (is >> t.real)
	{
		std::cout << "imaginary:";
		is >> t.imag;
	}
	return is;
}
std::ostream& operator<<(std::ostream& os, const complex& t)
{
	os << "(" << t.real << "," << t.imag << ")" << endl;
	return os;
}

void function_11_7(void)
{
	complex a(3.0, 4.0);
	complex c;

	cout << "Enter a complex number (q to quit):\n";

	while (cin >> c)
	{
		cout << "c is " << c << '\n';
		cout << "complex connjugate is " << ~c << '\n';
		cout << "a is" << a << '\n';
		cout << "a + c is" << a + c << '\n';
		cout << "a - c is " << a - c << '\n';
		cout << "a * c is " << a * c << '\n';
		cout << "2 * c is " << 2 * c << '\n';
		cout << "Enter a complex number (q to quit):\n";
	}
	cout << "Done!\n";
}


