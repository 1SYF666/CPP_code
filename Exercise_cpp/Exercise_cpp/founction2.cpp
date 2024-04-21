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
	performers = new char[std::strlen(s1) + 1];
	std::strcpy(performers, s1);
	labels = new char[std::strlen(s2) + 1];
	strcpy(labels, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd& d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	labels = new char[strlen(d.labels) + 1];
	strcpy(labels, d.labels);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers = new char[1];
	performers[0] = '\0';
	labels = new char[1];
	labels[0] = '\0';
	selections = 0;
	playtime = 0.0;
}
Cd::~Cd()
{
	delete[] performers;
	delete[] labels;
}
void Cd::Report()const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << labels << endl;
	cout << "Selections: " << selections << endl;
	cout << "Performers: " << playtime << endl;
}
Cd& Cd::operator=(const Cd& d)  // 重新赋值运算符
{
	if (this == &d)
	{
		return *this;
	}
	delete[] performers;		// 释放原有已分配的内存空间
	delete[] labels;		    // 释放原有已分配的内存空间
	performers = new char[std::strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	labels = new char[std::strlen(d.labels) + 1];
	strcpy(labels, d.labels);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic() :Cd()
{
	cdstr = new char[1];
	cdstr[0] = '\0';
}

Classic::Classic(const char* s, const char* s1, const char* s2, int n, double x)
{
	cdstr = new char[std::strlen(s) + 1];
	strcpy(cdstr, s);
}
Classic::Classic(const char* s, const Cd& d) :Cd(d)
{
	cdstr = new char[strlen(s) + 1];
	strcpy(cdstr, s);
}
Classic::~Classic()
{
	delete[] cdstr;
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
	delete[] cdstr;
	Cd::operator=(cs);
	cdstr = new char[std::strlen(cs.cdstr) + 1];
	cdstr = strcpy(cdstr, cs.cdstr);
	return *this;
}

void Bravo(const Cd& disk)
{
	disk.Report();
}


void function_13_1(void)
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat,Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);

	Cd* pcd = &c1;

	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();

	cout << "Using type cd*pointer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "Testing assignment:\n";
	Classic copy;
	copy = c2;
	copy.Report();

}
void function_13_2(void)
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;

	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();

	cout << "Using type cd * pointer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "Testing assignment:\n";
	Classic copy;
	copy = c2;
	copy.Report();
}


DMA::DMA(const char* cn)
{
	classname = new char[strlen(cn) + 1];
	std::strcpy(classname, cn);
}
DMA::DMA(const DMA& rs)
{
	classname = new char[strlen(rs.classname) + 1];
	std::strcpy(classname, rs.classname);
}
DMA& DMA:: operator=(const DMA& rs)
{
	if (this == &rs)
	{
		return *this;
	}
	delete[]classname;
	classname = new char[strlen(rs.classname) + 1];
	std::strcpy(classname, rs.classname);
	return *this;
}
DMA::~DMA()
{
	delete[] classname;
}


baseDMA::baseDMA(const char* l, int r, const char* cn) :DMA(cn)
{
	label = new char[strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}

baseDMA::baseDMA(const char* l, int r, const DMA& rs) :DMA(rs)
{
	label = new char[strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}
baseDMA::baseDMA(const baseDMA& rs) :DMA(rs)
{
	label = new char[strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}
baseDMA::~baseDMA()
{
	delete[]label;
}
baseDMA& baseDMA:: operator=(const baseDMA& rs)
{
	if (this == &rs)
	{
		return *this;
	}
	delete[]label;
	DMA::operator=(rs);
	label = new char[strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}
void baseDMA::View() const
{
	std::cout << "Classname: " << show_classname() << std::endl; //调用基类protected中的show_classname方法显示基类数据成员;
	std::cout << "Label: " << label << std::endl;
	std::cout << "Rating: " << rating << std::endl;
}


lacksDMA::lacksDMA(const char* c, const char* cn) :DMA(cn)
{
	strncpy(color, c, COL_LEN - 1);
	color[COL_LEN] = '\0';

}
lacksDMA::lacksDMA(const char* c, const DMA& rs) :DMA(rs)
{
	strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}
lacksDMA::lacksDMA(const lacksDMA& rs) : DMA(rs)
{
	strncpy(color, rs.color, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';

}
lacksDMA::~lacksDMA()
{

}
lacksDMA& lacksDMA:: operator=(const lacksDMA& rs)
{
	if (this == &rs)
	{
		return *this;
	}
	DMA::operator=(rs); //调用基类DMA的赋值运算符方法初始化派生类lackDMA的基类数据成员
	strncpy(color, rs.color, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
	return *this;
}

void lacksDMA::View()const
{
	std::cout << "Classname: " << show_classname() << std::endl; //调用基类protected中的show_classname方法显示基类数据成员;
	std::cout << "Color: " << color << std::endl;
}


hasDMA::hasDMA(const char* s, const char* cn) :DMA(cn)
{
	style = new char[strlen(s) + 1];
	std::strcpy(style, s);

}

hasDMA::hasDMA(const char* s, const DMA& rs) :DMA(rs)
{
	style = new char[strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& rs) :DMA(rs)
{
	style = new char[strlen(rs.style) + 1];
	std::strcpy(style, rs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}
hasDMA& hasDMA:: operator=(const hasDMA& rs)
{
	if (this == &rs)
	{
		return *this;
	}
	delete[]style;
	DMA::operator=(rs);
	style = new char[strlen(rs.style) + 1];
	std::strcpy(style, rs.style);
	return *this;
}
void hasDMA::View()const
{
	std::cout << "Classname: " << show_classname() << std::endl; //调用基类protected中的show_classname方法显示基类数据成员;
	std::cout << "Style: " << style << std::endl;
}


const int LEN = 3;

void function_13_3(void)
{
	DMA* temp[LEN];
	char label[50];
	int rating;
	char color[40];
	char style[50];
	char kind;

	cout << "Here are the process for creating 3 objects" << endl;
	for (int i = 0; i < LEN; i++)
	{
		cout << "Enter 1 for baseDMA,2 for lacksDMA or 3 for hasDMA:";
		while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Please enter 1,2 or 3: ";
		}
		if (kind == '1')
		{
			cout << "Please enter the label: ";
			cin >> label;
			cout << "Please enter the rating:";
			cin >> rating;
			temp[i] = new baseDMA(label, rating, "baseDMA");
		}
		else if (kind == '2')
		{
			cout << "Please enter the color: ";
			cin >> color;
			temp[i] = new lacksDMA(color, "lacksDMA");
		}
		else
		{
			cout << "Please enter the style:";
			cin >> style;
			temp[i] = new hasDMA(style, "hasDMA");
		}
	}

	cout << "\nThe results after creating 3 objects" << endl;
	for (int i = 0; i < LEN; i++)
	{
		temp[i]->View();
	}

	for (int i = 0; i < LEN; i++)
	{
		delete temp[i];
	}
	cout << "Done.\n";

}




Port::Port(const char* br, const char* st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strncpy(style, st, 20);
	style[19] = '\0';    //保证字符串是等效的
	bottles = b;
}
Port::Port(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strncpy(style, p.style, 20);
	style[19] = '\0';
	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if (this == &p)
	{
		return *this;
	}
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strncpy(style, p.style, 20);
	style[19] = '\0';
	bottles = p.bottles;
	return *this;
}
Port& Port:: operator+=(int b)
{
	bottles += b;
	return *this;//返回调用对象的引用
}
Port& Port:: operator-=(int b)
{
	bottles -= b;
	return *this; //返回调用对象的引用
}

void Port::Show()const
{
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}
ostream& operator<<(ostream& os, const Port& p)
{
	os << p.brand << "," << p.style << "," << p.bottles;
	return os;
}


VintagePort::VintagePort() :Port("none", "vintage", 0)
{
	nickname = new char[1];
	nickname[0] = '\0';
	year = 0;
}
VintagePort::VintagePort(const char* br, int b, const char* nn, int y) :Port(br, "vintage", b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}
VintagePort::VintagePort(const VintagePort& vp) :Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort:: operator=(const VintagePort& vp)
{
	if (this == &vp)
	{
		return *this;
	}
	delete[]nickname;
	Port::operator=(vp);
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}
void VintagePort::Show()const
{
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year:" << year << endl;
}
ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << (const Port&)vp;
	os << "," << vp.nickname << "," << vp.year;
	return os;
}

void function_13_4(void)
{
	Port wine1("Gallo", "tawny", 20);
	VintagePort wine2("Lafei", 10, "strong wine", 1876);
	VintagePort wine3("Merlot", 50, "middle wine", 1976);
	cout << "Here is the Port object:\n";
	wine1.Show();          //调用基类Show方法;
	cout << wine1 << endl; //调用基类重载输出流运算符;

	cout << "\nHere are the VintagePort objects:\n";
	wine2.Show();          //调用派生类Show方法;
	cout << wine2 << endl; //调用派生类重载输出流运算符;
	wine3.Show();          //调用派生类Show方法;
	cout << wine3 << endl; //调用派生类重载输出流运算符;

	cout << "\nGallo add 20 bottles:\n";
	wine1 += 20; //调用基类重载+=运算符;
	wine1.Show();

	cout << "\nLafei add 10 bottles:\n";
	wine2 += 10; //调用派生类重载+=运算符;
	wine2.Show();

	cout << "\nMerlot minus 10 bottles:\n";
	wine3 -= 10; //调用派生类重载-=运算符;
	wine3.Show();

}


Wine::Wine(const char* l, int y):string(l)
{
	//wine_name = 1;
	//year_and_bottle.Set(ArrayInt(y), ArrayInt(y));
	//使用隐式运算符调用私有对象构造函数进行初始化
	PairArray::operator=(PairArray(ArrayInt(y), ArrayInt(y)));
	year = y;
}
Wine::Wine(const char* l, int y, const int yr[], const int bot[]):string(l)
{
	//wine_name = l;
	//year_and_bottle.Set(ArrayInt(yr, y), ArrayInt(bot, y));
	// 使用隐式赋值运算符调用私有对象构造函数进行初始化
	PairArray::operator=(PairArray(ArrayInt(yr, y), ArrayInt(bot, y)));

	year = y;
}
Wine::~Wine()
{

}
void Wine::GetBottles()
{
	ArrayInt yr(year);
	ArrayInt bt(year);

	//cout << "Enter " << wine_name;
	cout << "Enter " << (const string&)*this;
	cout << "data for " << year << " year(s):" << endl;

	for (int i = 0; i > year; i++)
	{
		cout << "Enter year: ";
		cin >> yr[i];
		cout << "Enter bottles for that year: ";
		cin >> bt[i];
	}
	//year_and_bottle.Set(yr, bt);
	PairArray::operator=(PairArray(yr, bt));
}
string& Wine::Label()
{
	//return wine_name;
	return (string&)*this;
}
int Wine::sum()const
{
	//return year_and_bottle.Sum();
	return PairArray::Sum();
}
void Wine::Show()const
{
	cout << "Wine: " << (const string&)(*this) << endl;
	cout << "\tYear\tBottles" << endl;
	PairArray::Show(year);
}

void function_14_1_2(void)
{
	cout << "Enter name of wine: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years: ";
	int yrs;
	cin >> yrs;

	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();

	const int YRS = 3;
	int y[YRS] = { 1993,1995,1998 };
	int b[YRS] = { 48,60,72 };

	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << "Total bottles for " << more.Label();
	cout << ": " << more.sum() << endl;
	cout << "Bye\n";
}


Worker::~Worker()
{

}

void Worker::Set()
{
	cout << "Enter worker's name: ";
	getline(cin, fullname);
	cout << "Enter worker's ID";
	cin >> id;
	while (cin.get() != '\n')
	{
		continue;
	}
}


void Worker::Show()const
{
	cout << "Worker name: " << fullname << endl;
	cout << "Worker ID: " << id << endl;
}

const int SIZE = 5;

void function_14_3(void)
{
	int ct;
	Worker* temp;
	QueueTp<Worker*>lolas(SIZE);

	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the menu order:" << endl;
		cout << "a:add a worker to queue." << endl;
		cout << "d: delete a worker from queue." << endl;
		cout << "q: quit." << endl;
		cin >> choice;
		while (NULL == strchr("adq", choice))
		{
			cout << "Please enter a,d,or q: ";
			cin >> choice;
		}
		if ('q' == choice)
		{
			break;
		}
		switch (choice)
		{
		case 'a':
		{
			temp = new Worker;
			cin.get();
			if (lolas.isfull()) //若是队列已满则打印信息并释放new分配的内存;
			{
				cout << "Queue is full!" << endl;
				delete temp;
			}
			else
			{
				temp->Set();
				lolas.enqueue(temp);
			}
			break;
		}
		case 'd':
		{
			if (lolas.isempty())
			{
				cout << "Queue is empty!" << endl;
			}
			else
			{
				lolas.dequeue(temp);
			}
			break;
		}
		default:
			break;
		}
	}
	ct = lolas.queuecount();
	cout << "\nHere is " << ct << " worker(s) in queue:" << endl;

	for (int i = 0; i < ct; i++)
	{
		lolas.dequeue(temp);
		temp->Show();
	}

	cout << "Done.\n";
}


Person::~Person()
{

}

void Person::Data()const
{
	cout << "First name: " << firstname << endl;
	cout << "last name: " << lastname << endl;
}

void Person::Get()
{
	cout << "Please enter your first name:";
	getline(cin, firstname);
	cout << "Please enter your last name: ";
	getline(cin, lastname);
}

void Gunslinger::Data()const
{
	cout << "Gunslinger nicks:" << nicks << endl;
}

void Gunslinger::Get()
{
	cout << "Please enter the nicks for gunslinger:";
	cin >> nicks;
	while (cin.get() != '\n')
	{
		continue;
	}
}

void Gunslinger::Set()
{
	cout << "enter  gunslinger name:" << endl;
	Person::Get();
	Get();
}



void Gunslinger::Show()const
{
	cout << "Category:Gunslinger" << endl;
	Person::Data();
	Data();
}

double Gunslinger::Draw() const
{
	return double(rand() % 5 + 1); //枪手的拔枪时间设置为1到5之间的值；
}

void PokerPlayer::Data()const
{
	cout << "The cards:" << Draw() << endl;
}

void PokerPlayer::Set()
{
	cout << "Enter PokerPlayer name" << endl;
	Person::Get();
}

void PokerPlayer::Show()const
{
	cout << "Category:PokerPlayer" << endl;
	Person::Data();
	Data();
}

int PokerPlayer::Draw()const  //扑克牌的值
{
	return rand() % 52 + 1;
}

void BadDude::Data()const
{
	Gunslinger::Data();
	PokerPlayer::Data();
	cout << "The time for a bad guy to draw his gun is " << Gdraw() << endl;
	cout << "The next card is " << Cdraw() << endl;
}

void BadDude::Get()
{
	Gunslinger::Get();
}

void BadDude::Set()
{
	cout << "Enter BadDude name" << endl;
	Person::Get();
	Get();
}

void BadDude::Show() const
{
	cout << "Category:BadDube" << endl;
	Person::Data();
	Data();
}

double BadDude::Gdraw() const
{
	return Gunslinger::Draw();
}

int BadDude::Cdraw()const
{
	return PokerPlayer::Draw();
}

const int SIZE1 = 5;
void function_14_4(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;

	int i, ct;
	Person* people[SIZE1];

	for (ct = 0; ct < SIZE1; ct++)
	{
		char choice;
		cout << "Enter the person category:" << endl;
		cout << "g: gunslinger" << endl;
		cout << "p: pokerplayer" << endl;
		cout << "b: baddude" << endl;
		cout << "q: quit" << endl;
		cin >> choice;

		while (NULL==strchr("bgpq",choice))
		{
			cout << "Please enter b , g , p or q: ";
			cin >> choice;
		}

		if ('q' == choice)
		{
			break;
		}
		switch (choice)
		{
			case 'b':
			{
				people[ct] = new BadDude;
				break;
			}
			case 'g':
			{
				people[ct] = new Gunslinger;
				break;
			}
			case 'p':
			{
				people[ct] = new PokerPlayer;
				break;
			}

			default:
				break;
		}

		cin.get();
		people[ct]->Set();

	}

	cout << "\nHere is your message for some people:" << endl;

	for (i = 0; i < ct; i++)
	{
		cout << endl;
		people[i]->Show();
	}

	for (i = 0; i < ct; i++)
	{
		delete people[i];
	}
	cout << "Bye.\n";

}



abstr_emp::abstr_emp() :fname("no"), lname("one"), job("none")
{

}
abstr_emp::abstr_emp(const string& fn, const string& ln, const string& j) : fname(fn), lname(ln), job(j)
{

}

void abstr_emp::ShowAll()const
{
	cout << "First name: " << fname << endl;
	cout << "last name: " << fname << endl;
	cout << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
	cout << "Please enter your first name: ";
	getline(cin, fname);
	cout << "Please enter your last name: ";
	getline(cin, lname);
	cout << "Please enter your job: ";
	getline(cin, job);
}

ostream& operator<<(ostream& os, const abstr_emp& e)
{
	os << "First name: " << e.fname << endl;
	os << "Last name: " << e.lname << endl;
	os << "Job: " << e.job;
	return os;
}

abstr_emp::~abstr_emp()
{

}

employee::employee() :abstr_emp()
{

}

employee::employee(const string& fn, const string& ln, const string& j)
{

}

void employee::ShowAll()const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}


manager::manager() :abstr_emp(), inchargeof(0)
{

}
manager::manager(const string& fn, const string& ln, const string& j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{

}
manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico)
{

}
manager::manager(const manager& m) : abstr_emp(m), inchargeof(m.inchargeof)
{

}
void manager::ShowAll()const
{
	abstr_emp::ShowAll();
	cout << "In charge of: " << inchargeof << endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "Please enter a number for inchargerof: ";
	cin >> inchargeof;

	while (cin.get() != '\n')
	{
		continue;
	}

}

fink::fink() :abstr_emp(), reportsto("none")
{

}
fink::fink(const string& fn, const string& ln, const string& j, const string& rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{

}
fink::fink(const abstr_emp& e, const string& rpo) : abstr_emp(e), reportsto(rpo)
{

}
fink::fink(const fink& e) : abstr_emp(e), reportsto(e.reportsto)
{

}
void fink::ShowAll()const
{
	abstr_emp::ShowAll();
	cout << "Reports to: " << endl;
}
void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Please enter a string for reportsto: ";
	getline(cin, reportsto);
}

highfink::highfink() :abstr_emp(), manager(), fink()
{

}
highfink::highfink(const string& fn, const string& ln, const string& j, const string& rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{

}
highfink::highfink(const abstr_emp& e, const string& rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{

}
highfink::highfink(const fink& f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
{

}
highfink::highfink(const manager& m, const string& rpo) : abstr_emp(m), manager(m), fink(m, rpo)
{

}
highfink::highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h)
{

}
void highfink::ShowAll()const
{
	abstr_emp::ShowAll();
	cout << "In charge of: " << manager::InChargeOf() << endl;
	cout << "Reports to: " << fink::ReportsTo() << endl;
}
void highfink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Please enter a number for inchargerof: ";
	cin >> InChargeOf();

	while (cin.get() != '\n')
	{
		continue;
	}

	cout << "Please enter a string for reportsto: ";
	getline(cin, ReportsTo());
}

void function_14_5(void)
{
	employee em("Trip", "Harris", "Thumper");
	cout << em << endl;
	em.ShowAll();
	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	cout << ma << endl;

	ma.ShowAll();

	fink fi("Matt", "Oggs", "Olier", "Juno Barr");
	cout << fi << endl;

	fi.ShowAll();
	highfink hf(ma, "Curly Kew");
	hf.ShowAll();


	cout << "Press a key for next phase:\n";
	cin.get();

	highfink hf2;
	hf2.SetAll();


	cout << "Using an abstr_emp * pointer:\n";
	abstr_emp* tri[4] = { &em,&fi,&hf,&hf2 };

	for (int i = 0; i < 4; i++)
	{
		tri[i]->ShowAll();
	}
}


bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	return false;
}
bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	return false;

}
void Tv::chanup()
{
	channel = channel < maxchannel ? 1 + channel : 1;
}
void Tv::chandown()
{
	channel = channel > 1 ? channel - 1 : maxchannel;
}
void Tv::settings()const
{
	cout << "TV is " << (state == Off ? "Off" : "On") << endl;
	if (state == On)
	{
		cout << "Volume setting = " << volume << endl;
		cout << "Channel setting = " << channel << endl;
		cout << "Mode = ";
		cout << (mode == Antenna ? "antenna" : "cable") << endl;
		cout << "Input == ";
		cout << (input == TV ? "TV" : "DVD") << endl;
	}

}


void function_15_1(void)
{
	Tv s42;
	cout << "Initial settings for 42\"TV:\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\nAdjusted setting for 42\"TV:\n";
	s42.settings();

	Remote grey;
	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	s42.set_status(grey);
	cout << "\n42\" settings after using remote:\n";
	s42.settings();
	grey.show_status();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58, 28);
	s58.set_status(grey);
	cout << "\n58\" settings :\n";
	s58.settings();
	grey.show_status();
}


double hmean(double a, double b)
{
	if (a == -b)
	{
		bad_hmean temp("hmean", a, b);
		temp.mesg();
		throw temp;
	}
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
	{
		bad_gmean temp("gmean", a, b);
		temp.mesg();
		throw temp;
	}
	return sqrt(a * b);
}

void function_15_2_3(void)
{
	double x, y, z;

	cout << "Enter two numbers: ";

	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y;
			cout << " is " << z << endl;
			z = gmean(x, y);
			cout << "Geometric mean of " << x << " and " << y;
			cout << " is " << z << endl;
			cout << "Enter next set of numbers <q to quit>: ";
		}

		catch (mean& m)
		{
			cout << "Sorry,you don't get to play and more.\n";
			break;
		}

	}
	cout << "Bye!\n";
}


Salestwo::bad_index::bad_index(int ix, const string& s) :logic_error(s), bi(ix)
{


}
Salestwo::Salestwo(int yy)
{
	year = yy;
	for (int i = 0; i < MONTHS; i++)
	{
		gross[i] = 0;
	}
}
Salestwo::Salestwo(int yy, const double* gr, int n)
{
	year = yy;
	int lim = (n < MONTHS) ? n : MONTHS;
	int i;
	for (i = 0; i < lim; i++)
	{
		gross[i] = gr[i];
	}
	for (; i < MONTHS; i++)
	{
		gross[i] = 0;
	}
}

double Salestwo::operator[](int i)const
{
	if (i = 0 || i >= MONTHS)
	{
		throw bad_index(i);
	}
	return gross[i];
}
double& Salestwo::operator[](int i)
{
	if (i < 0 || i >= MONTHS)
	{
		throw bad_index(i);
	}
	return gross[i];
}

LabeledSales::nbad_index::nbad_index(const string& lb, int ix, const string& s) :Salestwo::bad_index(ix, s)
{
	lbl = lb;
}

LabeledSales::LabeledSales(const string& lb, int yy) : Salestwo(yy)
{
	label = lb;
}

LabeledSales::LabeledSales(const string& lb, int yy, const double* gr, int n) : Salestwo(yy, gr, n)
{
	label = lb;
}

double LabeledSales::operator[](int i)const
{
	if (i < 0 || i >= MONTHS)
	{
		throw nbad_index(Label(), i);
	}
	return Salestwo::operator[](i);
}

double& LabeledSales::operator[](int i)
{
	if (i < 0 || i >= MONTHS)
	{
		throw nbad_index(Label(), i);
	}
	return Salestwo::operator[](i);
}

void function_15_4(void)
{
	double vals1[12] = {
	1220,1100,1122,2212,1232,2334,
	2884,2393,3302,2922,3002,3544,
	};

	double vals2[12] = {
		12,11,22,21,32,34,
		28,29,33,29,32,35,
	};

	Salestwo sales1(2011, vals1, 12);
	LabeledSales sales2("Blogstar", 2012, vals2, 12);

	cout << "First try block:\n";

	try
	{
		int i;
		cout << "Year = " << sales1.Year() << endl;
		for (i = 0; i < 12; ++i)
		{
			cout << sales1[i] << ' ';
			if (i % 6 == 5)
			{
				cout << endl;
			}
		}
		cout << "Year = " << sales2.Year() << endl;
		cout << "Label = " << sales2.Label() << endl;
		for (i = 0; i <= 12; i++)
		{
			cout << sales2[i] << ' ';
			if (i % 6 == 5)
			{
				cout << endl;
			}
		}

		cout << "End of try block 1.\n";
	}
	catch (Salestwo::bad_index& bad)
	{
		cout << bad.what();
		LabeledSales::nbad_index* ni = nullptr;
		if (ni = dynamic_cast<LabeledSales::nbad_index*>(&bad))  //RTTI识别类型
		{
			cout << "Company: " << ni->label_val() << endl;
			cout << "bad index: " << ni->bi_val() << endl;
		}
		else
		{
			cout << "bad index: " << bad.bi_val() << endl;
		}

	}
	cout << "\n Next try block:\n";

	try
	{
		sales2[2] = 37.5;
		sales1[20] = 23345;
		cout << "End of try block 2.\n";
	}
	catch (Salestwo::bad_index& bad)
	{
		cout << bad.what();
		LabeledSales::nbad_index* ni = nullptr;

		if (ni = dynamic_cast<LabeledSales::nbad_index*>(&bad)) // RTTI识别类型
		{
			cout << "Company: " << ni->label_val() << endl;
			cout << "bad index: " << ni->bi_val() << endl;
		}
		else
		{
			cout << "bad index: " << bad.bi_val() << endl;
		}
	}

	cout << "done\n";
}


bool ispalindrome(const string& s)
{
	return s == string(s.rbegin(), s.rend());
}

void function_16_1(void)
{
	string s;
	cout << "Please enter a string (q to quit):";
	while (getline(cin, s) && s != "q")
	{
		cout << "\"" << s << "\"";
		cout << (ispalindrome(s) ? " is " : " isn't ");
		cout << "a palindrome string." << endl;
		cout << "You can enter again (q to quit):";
	}
	cout << "Done." << endl;
}


string ToLower(string& st)
{
	string s;
	for (auto& x : st)
	{
		if (!isspace(x) && !ispunct(x))
		{
			s += tolower(x);
		}
	}
	return s;
}

void function_16_2(void)
{
	string s;

	cout << "Please enter a string (q to quit): ";
	while (getline(cin, s) && s != "q")
	{
		s = ToLower(s);
		cout << "\"" << s << "\"";
		cout << (ispalindrome(s) ? " is " : " isn't ");
		cout << "a palindrome string." << endl;
		cout << "You can enter again (q to quit):";
	}

	cout << "Done." << endl;
}

void function_16_3(void)
{
	srand(time(0));
	char play;
	string temp;
	ifstream infile;
	vector<string>wordlist;
	infile.open("wordlist.txt");

	if (!infile.is_open()) //检测文件是否成功打开
	{
		cout << "Can't open file wordlist.txt" << endl;
		cout << "Program terminating." << endl;
		exit(EXIT_FAILURE);
	}
	while (infile >> temp)
	{
		wordlist.push_back(temp);
	}

	cout << "Will you play a word game?<y/n>";
	cin >> play;
	play = tolower(play);

	while (play == 'y')
	{
		string target = wordlist[rand() % wordlist.size()];
		int length = target.length();
		string attempt(length, '-');
		string badcharts;
		int guesses = 6;

		cout << "Guess my secret word. It has " << length;
		cout << " letters,and you guess\n";
		cout << "one letter at a time. You get " << guesses;
		cout << " wrong guesses.\n";
		cout << "Your word: " << attempt << endl;

		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badcharts.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "You already guessed that.try again.\n";
				continue;
			}

			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "Oh,bad guess!\n";
				--guesses;
				badcharts += letter;
			}
			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Your word: " << attempt << endl;
			if (attempt != target)
			{
				if (badcharts.length() > 0)
				{
					cout << "Bad choices: " << badcharts << endl;
				}
				cout << guesses << "bad guesses left\n";
			}
		}

		if (guesses > 0)
		{
			cout << "That's right!\n";
		}
		else
		{
			cout << "Sorry,the word is " << target << ".\n";
		}
		cout << "Will you play another?<y/n>";
		cin >> play;
		play = towlower(play);
	}
	infile.close();
	cout << "Bye\n";

}