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