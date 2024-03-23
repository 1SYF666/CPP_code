#define _CRT_SECURE_NO_WARNINGS 1

#include"founction2.h"


Cow::Cow()
{
	std::strcpy(name, "\0");
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0.0;
}
Cow::Cow(const char* nm, const char* ho, double wt)
{
	std::strncpy(name, nm, 20);
	name[19] = '\0';
	hobby = new char[strlen(ho) + 1];
	std::strcpy(hobby, ho);
	weight = wt;
}
Cow::Cow(const Cow& c)
{
	std::strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{
	delete[] hobby;
}
Cow& Cow::operator=(const Cow& c)
{
	if (this != &c)
	{
		delete[] hobby;
		std::strcpy(name, c.name);
		hobby = new char[strlen(c.hobby) + 1];
		std::strcpy(hobby, c.hobby);
		weight = c.weight;
	}
	return *this;
}
void Cow::ShowCow()const
{
	std::cout << "Cow name: " << name << std::endl;
	std::cout << "Cow hobby: " << hobby << std::endl;
	std::cout << "Cow weight: " << weight << "\n\n";
}

void function_12_1(void)
{
	using std::cout;
	using std::endl;

	Cow temp1;
	Cow temp2("MZZDX", "Programming", 30);
	Cow temp3(temp2);

	cout << "Here are some cows:" << endl;
	cout << "The first:" << endl;
	temp1.ShowCow();
	cout << "The second:" << endl;
	temp2.ShowCow();
	cout << "The third:" << endl;
	temp3.ShowCow();
	temp1 = temp3;
	cout << "After assignment for temp1:" << endl;
	temp1.ShowCow();
}



int String::num_strings = 0;

int String::Howmany()
{
	return num_strings;
}

String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_strings++;
}
String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
String::String(const String& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
}
String::~String()
{
	--num_strings;
	delete[] str;
}

String& String::operator=(const String& st)
{
	if (this == &st)
	{
		return *this;
	}
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}
String& String::operator=(const char* s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}
String String::operator+(const char* s)
{
	int length = strlen(s) + len;
	char* temp = new char[length + 1];
	strcpy(temp, str);
	strcat(temp, s);
	String new_str(temp);
	delete[] temp;
	return new_str;
}
char& String::operator[](int i)
{
	return str[i];
}
const char& String:: operator[](int i)const
{
	return str[i];
}
bool operator<(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String& st1, const String& st2)
{
	return st2 < st1;
}
bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}
ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}
istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
	{
		st = temp;
	}
	while (is && is.get() != '\n')
		continue;
	return is;
}

String operator+(const char* s, const String& st)
{
	int length = strlen(s) + st.len;
	char* temp = new char[length + 1];
	strcpy(temp, s);
	strcat(temp, st.str);
	String new_str(temp);
	delete[] temp;
	return new_str;
}
String operator+(const String& st1, const String& st2)
{
	int length = st1.len + st2.len;
	char* temp = new char[length + 1];
	strcpy(temp, st1.str);
	strcat(temp, st2.str);
	String new_str(temp);
	delete[] temp;
	return new_str;
}
void String::stringlow()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = tolower(str[i]);
	}
}
void String::stringup()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = toupper(str[i]);
	}
}

unsigned String::has(const char s)const
{
	unsigned count = 0;

	for (int i = 0; i < len; i++)
	{
		count += (s == str[i]);
	}
	return count;
}


void function_12_2(void)
{
	String s1(" and I am a C++ student.");
	String s2 = "Please enter your name: ";
	String s3;

	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();
	cout << "The string \n";
	cout << s2 << "\ncontains " << s2.has('A');
	cout << " 'A' characters in it.\n";
	s1 = "red";

	String rgb[3] = { String(s1), String("green"), String("blue") };
	cout << "Enter the name of a primary color for mixing light: ";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
		{
			break;
		}
		else
		{
			cout << "Try again!\n";
		}
	}
	cout << "Bye\n";
}


Stock::Stock()
{
	company = new char[1];
	company[0] = '\0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const char* s, long n, double pr)
{
	company = new char[strlen(s) + 1];
	std::strcpy(company, s);
	if (n < 0)
	{
		std::cout << "Number of students can't be nagative;";
		std::cout << company << " shares set to 0.\n";
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_hot();
}

Stock::~Stock()
{
	delete[] company;
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative.";
		std::cout << "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_hot();
	}
}
void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative.";
		cout << "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have!";
		cout << "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_hot();
	}
}
void Stock::update(double price)
{
	share_val = price;
	set_hot();
}

std::ostream& operator<<(std::ostream& os, const Stock& st)
{
	os << "Company:" << st.company << std::endl;
	os << "Shares:" << st.shares << std::endl;
	os << "Share Price: " << st.share_val << std::endl;
	os << "Total Worth: " << st.total_val << std::endl;
	return os;
}

const Stock& Stock::topval(const Stock& s)const
{
	return s.total_val > total_val ? s : *this;
}


const int STKS = 4;
void function_12_3(void)
{
	Stock stock[STKS] =
	{
		Stock("NanoSmart",12,20.0),
		Stock("Boffo Object",200.0,2.0),
		Stock("Monolithic Obelisks",130,3.25),
		Stock("Fleep Enterprises",60,6.5)
	};
	std::cout << "Stock holdings;\n";
	for (int st = 0; st < STKS; st++)
	{
		std::cout << stock[st] << std::endl;
	}
	const Stock* top = &stock[0];
	for (int st = 1; st < STKS; st++)
	{
		top = &top->topval(stock[st]);
	}
	std::cout << "\nMost valuable holding:\n";
	std::cout << *top;
}


Stack1::Stack1(int n)
{
	top = 0;
	if (n > MAX)
	{
		cout << "The length of Stack1 can't exceed 10.\n";
		cout << "So initialize the length to 10.\n";
		size = MAX;
	}
	else if (n < 0)
	{
		cout << "The length of Stack1 can't less than 0.\n";
		cout << "So initialize the length to 10.\n";
		size = MAX;
	}
	else
	{
		size = n;
	}
	pItem2s = new Item2[size];
}

Stack1::Stack1(const Stack1& st)
{
	size = st.size, top = st.top;
	pItem2s = new Item2[size];
	for (int i = 0; i < top; i++)
	{
		pItem2s[i] = st.pItem2s[i];
	}
}
Stack1::~Stack1()
{
	delete[] pItem2s;
}

bool Stack1::isempty()const
{
	return top == 0;
}
bool Stack1::isfull()const
{
	return top == size;
}
bool Stack1::push(const Item2& Item2)
{
	if (top < size)
	{
		pItem2s[top++] = Item2;
		return true;
	}
	else
	{
		return false;
	}
}
bool Stack1::pop(Item2& Item2)
{
	if (top > 0)
	{
		Item2 = pItem2s[--top];
		return true;
	}
	else
	{
		return false;
	}

}
Stack1& Stack1::operator=(const Stack1& st)
{
	if (this == &st)
	{
		return *this;
	}
	delete[]pItem2s;
	size = st.size;
	top = st.top;
	pItem2s = new Item2[size];
	for (int i = 0; i < top; i++)
	{
		pItem2s[i] = st.pItem2s[i];
	}
	return *this;
}
std::ostream& operator<<(std::ostream& os, const Stack1& st)
{
	for (int i = st.top - 1; i >= 0; i--)
	{
		os << st.pItem2s[i] << std::endl;
	}
	return os;
}

void function_12_4(void)
{
	using namespace std;
	Stack1 st;
	Item2 temp = 1000UL;
	st.push(temp);
	temp = 2000UL;
	st.push(temp);
	temp = 3000UL;
	st.push(temp);
	Stack1 st1(st);
	Stack1 st2;
	st2 = st1;
	cout << "Here are some Stack1 countents:" << endl;
	cout << "Stack1 st:" << endl;
	cout << st;
	cout << "Stack1 st1:" << endl;
	cout << st1;
	cout << "Stack1 st2:" << endl;
	cout << st2;
	cout << "Bye\n";

}


Queue::Queue(int qs) :qsize(qs)
{
	front = rear = NULL;
	items = 0;
}
Queue::~Queue()
{
	Node* temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
bool Queue::isempty()const
{
	return items == 0;
}
bool Queue::isfull()const
{
	return items == qsize;
}
int Queue::queuecount()const
{
	return items;
}
bool Queue::enqueue(const Item3& item)
{
	if (isfull())
	{
		return false;
	}
	Node* add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)
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
bool Queue::dequeue(Item3& item)
{
	if (front == NULL)
	{
		return false;
	}
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
	{
		rear = NULL;
	}
	return true;
}

void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive;
}

using namespace std;
const int MIN_PER_HR = 60;
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}

void function_12_5(void)
{
	srand(time(0));

	cout << "Cse Study:Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line1(qs);	//构造第一台ATM机
	Queue line2(qs);	//构造第二台ATM机

	cout << "Enter the number of simulation hours:";
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HR * hours;

	cout << "Enter the average number of customers per hour: ";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;

	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	long wait_time1 = 0; // 第一台ATM机的等待时间
	long wait_time2 = 0; // 第二台ATM机的等待时间
	long line_wait = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		Item3 temp;
		if (newcustomer(min_per_cust))
		{
			if (line1.isfull() && line2.isfull())
			{
				turnaways++;
			}
			else
			{
				customers++;
				temp.set(cycle);
				if (line1.queuecount() < line2.queuecount())
				{
					line1.enqueue(temp);
				}
				else
				{
					line2.enqueue(temp);
				}
			}
		}

		if (wait_time1 <= 0 && !line1.isempty())
		{
			line1.dequeue(temp);
			wait_time1 = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}

		if (wait_time1 > 0)
		{
			wait_time1--;
		}

		sum_line += line1.queuecount();

		if (wait_time2 <= 0 && !line2.isempty())
		{
			line2.dequeue(temp);
			wait_time2 = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time2 > 0)
		{
			wait_time2--;
		}
		sum_line += line2.queuecount();
	}

	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average wait time: ";
		cout << (double)line_wait / served << " minutes\n";
	}
	else
	{
		cout << "No customers!\n";
	}

	cout << "Done!\n";
}

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	std::strncpy(performers, s1, 50);
	performers[49] = '\0';
	strncpy(labels, s2, 20);
	labels[19] = '\0';
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd& d)
{
	strncpy(performers, d.performers, 50);
	performers[49] = '\0';
	strncpy(labels, d.labels, 50);
	labels[49] = '\0';
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers[0] = '\0';
	labels[0] = '\0';
	selections = 0;
	playtime = 0.0;
}
Cd::~Cd()
{

}
void Cd::Report()const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << labels << endl;
	cout << "Selections: " << selections << endl;
	cout << "Performers: " << playtime << endl;
}
Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
	{
		return *this;
	}
	strncpy(performers, d.performers, 50);
	performers[49] = '\0';
	strncpy(labels, d.labels, 20);
	performers[19] = '\0';
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}



Classic::Classic(const char* s, const char* s1, const char* s2, int n, double x)
{
	strncpy(cdstr, s, 50);
	cdstr[49] = '\0';
}
Classic::Classic(const char* s, const Cd& d) :Cd(d)
{
	strncpy(cdstr, s, 50);
	cdstr[49] = '\0';
}
Classic::~Classic()
{

}
void Classic::Report()const
{
	Cd::Report();
	cout << "Major acticle in the CD is: " << cdstr << endl;
	cout.put('\n');
}
Classic& Classic::operator=(const Classic& cs)
{
	if (this == &cs)
	{
		return *this;
	}
	Cd::operator=(cs);
	strncpy(cdstr, cs.cdstr, 50);
	cdstr[49] = '\0';
	return *this;
}
