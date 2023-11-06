#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"function.h"



//int main()
//{
//	//第一
//	printf("Shen Yifu\n");
//	
//	//第二
//	printf("Shen\nYifu\n");
//
//	//第三
//	printf("Shen ");
//	printf("Yifu\n");
//
//
//	return 0;
//}


//int main()
//{
//	
//	printf("姓名：SHEN YIFU\n");
//	printf("地址：BENGBU CITY OF ANHUI PROVINCE\n");
//
//	return 0;
//}


//int main()
//{
//	//获得一个年龄
//	int age;
//	int tianshu;
//	printf("请输入年龄：");
//	scanf("%d" , &age);
//	//年龄转化天数
//	tianshu = age * 365;
//	
//	//打印输出
//	printf("年龄为：%d\n", age);
//	printf("转化天数为：%d\n", tianshu);
//	
//
//	return 0;
//}

//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}

//int main()
//{
//	br();
//	ic();
//	printf("India,China\n");
//	printf("Brazil,Russia\n");
//	return 0;
//}

//int main()
//{
//	int toes = 10;
//	int doubletoes = toes * 2;
//	int squretoes = toes * toes;
//	printf("%d 的两倍是：%d，平方是：%d\n", toes, doubletoes, squretoes);
//
//	return 0;
//}

//int main()
//{
//	Smile();Smile();Smile();
//	printf("\n");
//	Smile(); Smile();
//	printf("\n");
//	Smile();
//	return 0;
//}


//*******************2023/7/31 19:12*********************//

//int main()
//{
//	printf("starting now:\n");
//	one_three();
//	printf("done\n");
//	return 0;
//}

//*******************2023/8/1 21:16*********************//
/*超出系统允许的最大int值*/
//int main()
//{
//	int i = 2147483647; 
//	unsigned int j = 4294967295; //2^32-1
//	float toobig = 3.4E38 * 100.0f;
//	float toosmall = (3.4E-38) / (100.0E100);
//	
//
//	printf("%d %d %d\n", i, i + 1, i + 2); //整数上溢
//	printf("%u %u %u\n", j, j + 1, j + 2); //整数上溢
//	printf("%e\n", toobig);//浮点数上溢
//	printf("%e", toosmall);//浮点数下溢
//
//	return 0;
//}


/*显示ASCLL码值对应的字符*/
//int main()
//{
//	int a;
//	printf("请输入一个ASCLL码值");
//	scanf("%d", &a);
//	printf("ASCLL码值%d对应的字符为:%c\n", a, a);
//
//	return 0;
//}


//*******************2023/8/2 19:05*********************//
//int main()
//{
//	printf("\a");
//	printf("Startled by the sudden sound,Sally shouted,\n");
//	printf("“Startled by the sudden sound,Sally shouted”\n");
//	return 0;
//}

//int main()
//{
//	float i;
//	printf("Enter a floating-point value:");
//	scanf("%f", &i);
//	printf("fixed-point notation:%f\n", i);
//	printf("exponential notation:%e\n", i);
//	printf("p notation:%a\n", i);
//
//	return 0;
//}

//int main()
//{
//	int age=0;
//	float yearsconde = 3.156E7;
//	float agesconde=0;
//	printf("请输入年龄：");
//	scanf("%d", &age);
//	agesconde = age * yearsconde;
//	printf("年龄%d对应的秒数是：%f\n", age, agesconde);
//	printf("年龄%d对应的秒数是：%e\n", age, agesconde);
//
//	return 0;
//}


//*******************2023/8/3 19:24*********************//

//int main()
//{
//	//int water=0;
//	//float H2O = 3.156E-23;
//	//float H2Osum = water * H2O;
//	//printf("请输入水的夸脱数：");
//	//scanf("%d", &water);
//	//printf("%d的夸脱数水含有的水分子为：%a\n", water, H2Osum);
//
//	float quantity_mol = 3.0E-23;
//	float quantity_qt = 950;
//	float quarts;
//	float molecules;
//	printf("请输入水的跨脱数：");
//	scanf("%f", &quarts);
//	molecules = quarts * quantity_qt / quantity_mol;
//	printf("水分子的数量为：%e", molecules);
//
//	return 0;
//}

//int main()
//{
//	float inch_to_cm=2.54;
//	float height_inch;
//	float height_cm;
//	printf("请输入身高：(单位英寸)");
//	scanf("%f", &height_inch);
//	height_cm = height_inch * inch_to_cm;
//	printf("身高为：%f(厘米)", height_cm);
//	return 0;
//}


//int main()
//{
//	//加入pint用整数类型的话，若杯数是5.5杯，那么pint就会舍去小数位的数字，从而不会那么精确
//	float cup;
//	float pint; //一品脱等于两杯
//	float ounce; //一杯等于8盎司
//	float tablespoon;//一盎司等于两大汤勺
//	float teaspoon;  //一大汤勺等于三茶勺
//	printf("一品脱等于两杯\n");
//	printf("一杯等于8盎司\n");
//	printf("一盎司等于两大汤勺\n");
//	printf("一大汤勺等于三茶勺\n");
//	printf("请输入杯数：");
//	scanf("%f", &cup);
//	pint = cup / 2;
//	printf("%f等价于%f品脱\n", cup, pint);
//	ounce = cup * 8;
//	printf("%f等价于%f盎司\n", cup, ounce);
//	tablespoon = ounce * 2;
//	printf("%f等价于%f大汤勺\n", cup, tablespoon);
//	teaspoon = tablespoon * 3;
//	printf("%f等价于%f茶勺\n", cup, teaspoon);
//	return 0;
//}


//*******************2023/8/4 20:00*********************//

//int main()
//{
//	char name[20];
//	char surname[20];
//	printf("请输入你的名字和姓：\n");
//	printf("请输入你的名字：");
//	scanf("%s", &name);
//	printf("请输入你的姓：");
//	scanf("%s", &surname);
//
//	printf("名：%s;	姓：%s\n", name, surname);
//
//	return 0;
//}

//int main1()
//{
//	char name[20];
//	char surname[20];
//
//	int fname_length = 0;
//	int lname_length = 0;
//	
//	printf("请输入你的名字和姓：\n");
//	printf("请输入你的名字：");
//	scanf("%s", &name);
//	printf("请输入你的姓：");
//	scanf("%s", &surname);
//
//	//printf("“%s%s”\n", surname, name);
//	//printf("“********************%s%s”\n", surname, name);
//	//printf("“%s%s********************”\n", surname, name);
//	//printf("“****************%s%s”\n", surname, name);
//
//    fname_length = strlen(surname);
//    lname_length = strlen(name);
//    printf("\"%s%s\"\n", surname, name);  //转义序列(\"),用于打印(")字符
//    printf("\"%20s%20s\"\n", surname, name);
//    printf("\"%-20s%-20s\"\n", surname, name);
//    printf("%*s%*s", fname_length + 3, surname, lname_length + 3, name);
//
//	return 0;
//}


//*******************2023/8/7 18:48*********************//

//int main()
//{
//	float a = 21.3;
//
//	printf("The input is %3.1f or %2.1e\n", a, a);
//	printf("The input is %5.3f or %4.3e\n", a, a);
//
//
//	return 0;
//}
// 
//int main()
//{
//	float height;
//	char name[20];
//	printf("please input your name： ");
//	scanf("%s", name);
//	printf("please input your height in inches： ");
//	scanf("%f", &height);
//
//	printf("%s ,you are %.3f feet tall\n",name,height/12.0);
//
//	return 0;
//}

//int main()
//{
//	float downspeed;
//	float filesize;
//	printf("please input the loaddown speed in Mb/s : ");
//	scanf("%f", &downspeed);
//	printf("please input the file size in MB : ");
//	scanf("%f", &filesize);
//
//	printf(" At %.2f megabits per second,a file of %.2f megabytes\n",downspeed,filesize);
//	printf(" download in %.2f second\n",filesize*8.0/downspeed);
//	return 0;
//}

//int main1()
//{
//	char name[20];
//	char surname[20];
//	int length_name = 0;
//	int length_surname = 0;
//
//	printf("please input your name:");
//	scanf("%s", name);
//	printf("please input your surname:");
//	scanf("%s", surname);
//	length_name = strlen(name);
//	length_surname = strlen(surname);
//
//	printf("%s %s\n", name, surname);
//	printf("%*d %*d\n", length_name,length_name, length_surname,length_surname);
//	printf("%-*d %-*d\n", length_name,length_name, length_surname,length_surname);
//	printf("%d %*d\n", length_name, length_name, length_surname);
//	
//
//	return 0;
//}

//#include<float.h>
//int main()
//{
//	double d_value = 1.0 / 3.0;
//	float f_value = 1.0 / 3.0;
//	
//	printf("FLT_DIG:%d DBL_DIG:%d\n", FLT_DIG, DBL_DIG);
//
//	printf("display after point six: %.6f(double) %.6f(float)\n", d_value,f_value);
//	printf("display after point twelve: %.12f(double) %.12f(float)\n", d_value,f_value);
//	printf("display after point sixteen: %.16f(double) %.16f(float)\n", d_value,f_value);
//
//	return 0;
//}

//*******************2023/8/9 23:29*********************//

//int main()
//{
//	float miles;
//	float petrol;
//	float kilome;
//	float liter;
//	printf("please input travel miles in mile:");
//	scanf("%f", &miles);
//	printf("please input petrol in gallon:");
//	scanf("%f", &petrol);
//	printf("miles per gallon:%.1f\n", miles / petrol);
//	kilome = miles * 1.609;
//	liter = petrol * 3.785;
//
//	
//	printf("liter per hundred kilometers :%.1f\n", liter / kilome*100);
//
//	
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define LITRE_PER_GALLON 3.785 //1加仑大约3.785升
//#define KM_PER_MILE 1.609      //1英里大约为1.609千米
//int main()
//{
//    float mileage;              //历程数（千米）
//    float gasoline;             //消耗的汽油量（升）
//    float mile_per_gallon;      //英里/加仑
//    float litre_per_hundred_km; //升/100公里
//    printf("请输入旅行总旅程数（千米）：");
//    scanf("%f", &mileage);
//    printf("请输入旅行消耗的汽油量（升）：");
//    scanf("%f", &gasoline);
//    mile_per_gallon = (mileage / KM_PER_MILE) / (gasoline / LITRE_PER_GALLON);
//    litre_per_hundred_km = gasoline / mileage * 100;
//    printf("消耗每加仑汽油行驶的英里数：%.1f\n", mile_per_gallon);
//    printf("每行驶100公里消耗的汽油数（升）：%.1f", litre_per_hundred_km);
//    return 0;
//}

//#include"SqList.h"
//#include<stdlib.h>
//int main()
//{
//	SqList L;
//	L.elem = (Book*)malloc(sizeof(Book) * MAXSIZE);
//
//	int* p1 = new int;
//
//	return 0;
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//#define MINUTES_PER_HOUR 60
//
//int main()
//{
//	int minute;
//	int time_h;
//	int time_m;
//
//	while (1)
//	{
//		printf("Please enter a number for minute (<= 0 to quit):");
//		scanf("%d", &minute);
//		if (minute <= 0)
//		{
//			break; //quit the programmer
//		}
//		time_h = minute / MINUTES_PER_HOUR;
//		time_m = minute % MINUTES_PER_HOUR;
//		printf("minute:%d equivalent hour:%d and minute:%d\n", minute, time_h, time_m);
//		printf("You can enter again (<= 0 to quit):\n");
//	}
//	printf("Done.\n");
//
//	return 0;
//}


//#include <stdio.h>
//#define MINUTES_PER_HOUR 60
//
//int main(void)
//{
//	int m = 0, hour, minutes;
//
//	printf("Please enter a number for minute (<= 0 to quit): ");
//	while ((scanf("%d", &m) == 1) && (m > 0))
//	{
//		hour = m / MINUTES_PER_HOUR;
//		minutes = m % MINUTES_PER_HOUR;
//		printf("%d minutes = %d hours and %d minutes.\n", m, hour, minutes);
//		printf("You can enter again (<= 0 to quit): ");
//	}
//	printf("Done.\n");
//
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	int i = 0;
//	printf("please input the integer:");
//	scanf("%d", &input);
//	printf("display:\n");
//	for (i = input; i <= input + 10; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	printf("Done.\n");
//	return 0;
//}

//#define DAYS_PER_WEEK  7

//int main()
//{
//	int day_num;
//	int day_total;
//	int week_num;
//	printf("please input the day(<=0 to quit):");
//	while (1)
//	{
//		scanf("%d", &day_total);
//		if (day_total > 0)
//		{
//			week_num = day_total / DAYS_PER_WEEK;
//			day_num = day_total % DAYS_PER_WEEK;
//			printf("%d days are %d weeks, %d days\n", day_total, week_num, day_num);
//			printf("You can enter again (<=0 to quit): ");
//		}
//		else
//		{
//			printf("input error!exit!\n");
//			break;
//		}
//	}
//
//	return  0;
//}


//#define FEET_TO_INCH  12
//#define INCH_TO_cm  2.54
//
//int main()
//{
//	float centimeters =0.0;
//	float inches =0.0;
//	float inches_total =0.0;
//	int feet = 0;
//
//	while (1)
//	{
//		printf("Enter a height in centimeters(<=0 to quit): ");
//		scanf("%f", &centimeters);
//		if (centimeters <= 0)
//		{
//			printf("bye\n");
//			break;
//		}
//	    inches_total = centimeters /  INCH_TO_cm;
//		feet = inches_total / FEET_TO_INCH;
//		inches = inches_total - feet * FEET_TO_INCH;
//		printf("%.1f cm = %d feet, %.1f inches\n", centimeters, feet, inches);
//	}
//
//	return 0;
//}



//int main()
//{
//	float a=10;
//	float b=3;
//	//int b=3;
//	float c=0;
//	int d = 0;
//	int e = 0;
//	c = a / b;  //3.333
//	d = a / b;  //3
//	e = (int)a / b;  //3
//
//
//
//	return 0;
//}

//*******************2023/8/15 22:11*********************//


//int main()
//{
//	int input = 0;
//	int count = 1;
//	int sum_money = 0;
//	printf("enter the day nums:");
//	scanf("%d", &input);
//	while (count<=input)
//	{
//		sum_money = sum_money + count;
//		count++;
//	}
//	printf("%d days earned the money:%d $\n", input, sum_money);
//
//	return 0;
//}

//int main(void)
//{
//	int count;
//	int sum = 0;
//	int n = 0;
//	printf("Enter the integer number : ");
//	scanf("%d", &count);
//	n = count;
//	while (count > 0)
//	{
//		sum += count * count;
//		count--;
//	}
//	printf("the integer number %d squre sum is %d \n", count,sum);
//
//	return 0;
//}

//
//int main()
//{
//	double input;
//	printf("please enter the number in double type: ");
//	scanf("%lf", &input);
//    PrintCube(input);
//
//	return 0;
//}



//#include <stdio.h>
//
//void cube(double c);
//
//int main(void)
//{
//    double n;
//
//    printf("Please you enter a double number: ");
//    scanf("%lf", &n);
//    cube(n);
//
//    return 0;
//}
//
//void cube(double c)
//{
//    printf("The cube of %g is %g.\n", c, c * c * c);
//}

//*******************2023/8/17 14:43*********************//


//int main()
//{
//	int input2 = 0;
//	int input1 = 0;
//	
//	printf("Enter an integer to serve as the second operand:");
//	scanf("%d", &input2);
//	printf("Now enter the first operand:");
//
//	while ((scanf("%d", &input1)==1)&(input1>0))
//	{
//		printf("%d %% %d is %d\n", input1, input2, input1%input2);
//		printf("Enter next number for first operand(<= 0 to quit):");
//
//	}
//	printf("Done\n");
//	return 0;
//}


//
//int main()
//{
//	double Fahrenheit;
//	while (true)
//	{
//		int input = 0;
//		printf("enter the Fahrenheit:");
//		input=scanf("%lf", &Fahrenheit);
//		if (input == 1)
//		{
//			Temperatures(Fahrenheit);
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	double Fahrenheit;
//	printf("please enter the Fahrenheit number(q to quit):");
//	
//	while (scanf("%lf", &Fahrenheit) == 1)
//	{
//		Temperatures(Fahrenheit);
//		printf("You can enter again (q to quit):");
//	}
//	printf("Done.\n");
//
//	return 0;
//}


//*******************2023/8/19 8:48*********************//
//int main() {
//	int i = 0;
//	char arr[7] = { 'a','b','c','d','e','f','g' };
//	for (i = 0; i < 7; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}


//int main() {
//	int i = 0;
//	char arr[26];
//	
//	for (i = 0; i < 26; i++){
//		arr[i] = 'a' + i;
//	}
//
//	printf("Here are 26 letters:\n");
//
//	for (i = 0; i < 26; i++){
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}


//int main() {
//
//	int i = 0;
//	int j = 0;
//	//row
//	for (i = 0; i < 5; i++) {
//		//column
//		for (j = 0; j <= i; j++) {
//			printf("&");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//int main() {
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 6; i++) {
//
//		for (j = 0; j <= i; j++) {
//			printf("%c", 'F' - j);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}


//int main() {
//
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < 6; i++) {
//
//		for (j = 0; j <= i; j++) {
//
//			printf("%c", 'A'+ i*(i+1)/2 +j);
//		}
//		
//		printf("\n");
//	}
//
//	return 0;
//}

//int main() {
//
//	char ch = 'A';
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 6; i++) {
//		
//		for (j = 1; j <= i; j++) {
//			printf("%c", ch++);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main() {
//
//	printf("hello!\007\n");
//	return 0;
//}


//*******************2023/8/22 19:19*********************//


//int main() {
//	char input;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int z = 0;
//
//	printf("Enter the char character (A-Z):");
//	scanf("%c", &input);
//
//	for (i = 0; i <= (input - 'A'); i++) {
//
//		//handle spaces
//		for (j = 0; j < (input - 'A')-i; j++) {
//
//			printf(" ");
//		}
//
//		//print in ascending order
//		for (k = 0; k <= i; k++) {
//			printf("%c", 'A' + k);
//		}
//		
//		//print in descending order
//		for (z = 1; z <= i; z++) {
//			printf("%c", ('A'+i) - z);
//		}
//
//		printf("\n");
//	}
//
//
//	return 0;
//}


//nice
//int main() {
//
//	char ch;
//
//	printf("Please enter a upper letter:");
//	scanf("%c", &ch);
//
//	int length = ch - 'A';
//	printf("The pyramid of %c is :\n", ch);
//
//	for (int i = 0; i <= length; i++) {
//
//		char t = 'A' - 1;
//		
//		for (int j = 0; j < length - i; j++) {
//			printf(" ");
//		}
//
//		for (int j = 0; j <= i; j++) {
//			printf("%c", ++t);
//		}
//
//		for (int j = 0; j < i; j++) {
//			printf("%c", --t);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//*******************2023/8/23 22:15*********************//
//int main() {
//
//	int upper = 0;
//	int lower = 0;
//	printf("Enter the form the upper limits:");
//	scanf("%d", &upper);
//	printf("Enter the form the lower limits:");
//	scanf("%d", &lower);
//
//	printf("%s\t%s\t%s\t\n", "number", "square", "cube");
//	for (int i = lower; i <= upper; i++) {
//
//		printf("%d\t%d\t%d\t\n", i, i * i, i * i * i);
//	}
//	printf("Done.\n");
//	
//	return 0;
//}


//*******************2023/8/23 17:29*********************//

//int main() {
//
//	int i = 0;
//	int length = 0;
//	char in_arr[20] = { 0 };
//	char out_arr[20] = { 0 };
//	printf("please enter the words:");
//	scanf("%s", in_arr);
//	length = strlen(in_arr);
//	for (i = 0; i < length; i++) {
//		out_arr[i] = in_arr[i];
//	}
//	printf("reverse printing:");
//	for (i = length-1; i >=0; i--) {
//		printf("%c", out_arr[i]);
//	}
//
//	return 0;
//}




//#include<stdio.h>
//#include<string.h>
//#define LEN 20
//
//int main() {
//	char str[LEN];
//
//	printf("Please enter a word:");
//	scanf("%19s", str);
//	printf("the word is:\n");
//	printf("%s\n", str);
//
//	printf("Reversing the word is: \n");
//	for (int i = strlen(str) - 1; i >= 0; i--) {
//
//		printf("%c", str[i]);
//	}
//
//	return 0;
//}

//*******************2023/8/26 17:29*********************//

//int main() {
//	float input1;
//	float input2;
//	float output;
//
//	printf("Enter two number(no float type to quit)\n");
//	
//	while (scanf("%f",&input1)&& scanf("%f", &input2)){
//
//		output = (input1 - input2) / input1 * input2;
//		
//		printf("%f\n", output);
//
//		printf("Enter the number again(no float to quit)\n");
//	
//	}
//
//	return 0;
//}

//int main() {
//
//	double a, b;
//
//	printf("Please enter two numbers(q to quit)：");
//	
//	while (scanf("%lf %lf", &a, &b) == 2) {
//		
//		//%g reprsents automatically selecting the appropriate notion for output 
//		output_0826(a, b);
//	}
//
//	return 0;
//}


//
//int main() {
//
//	int i = 0;
//	
//	int input1 = 0;
//	int input2 = 0;
//	printf("Enter lower and upper integer limits:");
//	
//	while (scanf("%d %d", &input1, &input2)==2&&input1<input2)
//	{
//		int sum = 0;
//		for (i = input1; i <= input2; i++) {
//
//			sum += i * i;
//		}
//		printf("The sums of the squares");
//		printf("from % d to % d is % d\n", input1*input1, input2*input2, sum);
//		printf("Enter next set of limits:");
//	}
//	printf("Done\n");
//	return 0;
//}



//*******************2023/8/29 19:33*********************//

//int main() {
//
//	int arr[8] = { 0 };
//	int i = 0;
//	printf("Enter the number:\n");
//	
//	for (i = 0; i < 8; i++) {
//
//		scanf("%d", &arr[i]);
//
//	}
//	printf("back print:\n");
//
//	for (i = 7; i >=0; i--) {
//
//		printf("%d ", arr[i]);
//	
//	}
//	return 0;
//}



//int main() {
//
//	float i = 0;
//	float times = 0;
//	float sum1=0;
//	float sum2=0;
//	float coefficients = -1;
//	printf("Please enter the times (<0 to quit) :");
//	while (scanf("%f", &times)==1&&times>0){
//		sum1 = 0;
//		sum2 = 0;
//		for (i = 1; i <= times; i++) {
//			coefficients = coefficients * (-1);
//			sum1 = sum1+1.0 / i;
//			sum2 = sum2+1.0 / i * coefficients;
//		}
//		printf("sum1+sum2=%f:\n", sum1 + sum2);
//		printf("Please enter again (<0 to quit) :");
//	}
//	return 0;
//}

//
//int main() {
//	int n = 0;
//
//	printf("Please enter a number (<=0 to quit):");
//
//	while ((scanf("%d", &n) == 1) && (n > 0)) {
//		int i = 1;
//		int flag = 1;
//		double res1 = 0.0;
//		double res2 = 0.0;
//
//		for (i = 1,flag = 1; i <= n; i++, flag *= -1) {
//			res1 += 1.0 / i;
//			res2 += (1.0 / i) * flag;
//		}
//
//		printf("1.0+ 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...");
//		printf("sum are %g\n", res1);
//		printf("1.0- 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...");
//		printf("sum are %g\n", res2);
//
//		printf("The sum of the first %d items of the two sequences is %g\n", n, res1 + res2);
//		
//		printf("\nYou can enter again (<=0 to quit): ");
//	}
//	printf("Done.\n");
//
//
//	return 0;
//}

//#include"stack.h"
//
//int main(){
//	struct SqStack S;
//	InitStack(S);
//
//	//S.base = NULL;
//	//S.top = NULL;
//	//S.stacksize = 0;
//
//	conversion(S);
//	
//	return 0;
//}


//*******************2023/8/30 19:22*********************//

//int main() {
//	int i = 0;
//	int arr[8] = { 0 };
//	int val = 2;
//	for (i = 0; i < 8; i++) {
//		arr[i] = val;
//		val *= 2;
//	}
//	i = 0;
//	printf("Here are the results for array:\n");
//	do
//	{
//		printf("%d ", arr[i++]);
//	} while (i<8);
//	printf("\nDnoe.\n");
//
//	return 0;
//}


//int main(){
//	
//	double arr1[8] = { 0 };
//	double arr2[8] = { 0 };
//	int i = 0;
//	printf("Please enter the number:\n");
//	while (i<8){
//		scanf("%lf", &arr1[i++]);
//	}
//	double sum = 0;
//	for (i = 0; i < 8; i++) {
//		sum += arr1[i];
//		arr2[i]=sum;
//	}
//
//	for (i = 0; i < 8; i++) {
//		printf("%lf		", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 8; i++) {
//		printf("%lf		", arr2[i]);
//	}
//	printf("\nDone.\n");
//	return 0;
//}

//#define N 8
//
//int main() {
//	int i = 0;
//	double a[N];
//	double b[N];
//
//	printf("Please enter %d numbers:\n", N);
//	for (i = 0; i < N; i++) {
//		scanf("%lf", &a[i]);
//	}
//
//	b[0] = a[0];
//	for (i = 1; i < N; i++) {
//		b[i] = a[i] + b[i - 1];
//	}
//
//	printf("Here are the results for array a:\n");
//	for (i = 0; i < N; i++) {
//		printf("%-3g", a[i]);
//	}
//	printf("\nHere are the results for array b:\n");
//	for (i = 0; i < N; i++) {
//		printf("%-3g", b[i]);
//	}
//	printf("\nDone.\n");
//	return 0;
//}

//#define LEN 255
//int main() {
//
//	int i = 0;
//
//	char arr[LEN] = { 0 };
//	printf("please enter a string :\n");
//	while (scanf("%c",&arr[i])&&arr[i]!='\n'&&i+1<255){
//		i++;
//	}
//
//	printf("Reversing print the string is :\n");
//	for (i--; i >= 0; i--) {
//
//		printf("%c", arr[i]);
//	}
//	printf("\nDone\n");
//	return 0;
//}


//#include"queue.h"
//
//int main()
//{
//	Queue q;
//	QueueInit(&q);
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	QueuePush(&q, 3);
//	QueuePush(&q, 4);
//
//	printf("%d\n", QueueFront(&q)); //1
//	QueuePop(&q);//出队列
//	printf("%d\n", QueueFront(&q));//2   此时队首为2
//
//	printf("%d\n", QueueBack(&q));//4  队尾为4
//
//	return 0;
//}



//*******************2023/9/03 19:52*********************//

//#define COST 100.0
//#define DAP_INTERST_RATE 0.1
//#define DEI_INTERST_RATE 0.05
//
//int main() {
//	
//	float balance_Daphne = COST;
//	float balance_Deirdre = COST;
//	int year = 0;
//	
//
//	for (year = 1; balance_Deirdre <= balance_Daphne; year++) {
//		balance_Daphne += COST * DAP_INTERST_RATE;
//		balance_Deirdre *= (1.0 + DEI_INTERST_RATE);
//	}
//	//printf("Deirdre balance over Daphne in the %d-th year\n",--year);
//	//printf("Deirdre balance :%d		Daphne balance:%d\n",balance_Deirdre,balance_Daphne);
//	printf("Investment values after %d years:\n", --year);
//	printf("Daphne: $%.2f\n", balance_Daphne);
//	printf("Deirdre: $%.2f\n", balance_Deirdre);
//	printf("Deirdre(invest) > Daphne(invest)\n");
//
//	return 0;
//}


//int main(void)
//{
//    int years = 0;
//    double daphne = 100.0, deirdre = 100.0;
//
//    while (deirdre <= daphne)
//    {
//        daphne += 0.10 * 100.0;
//        deirdre += 0.05 * deirdre;
//        ++years;
//    }
//    printf("Investment values after %d years:\n", years);
//    printf("Daphne: $%.2f\n", daphne);
//    printf("Deirdre: $%.2f\n", deirdre);
//    printf("Deirdre(invest) > Daphne(invest)\n");
//
//    return 0;
//}

//#define COST 100.0 
//#define INTERST_RATE 0.08 
//#define TAKE_MONEY 10.0 
//
//int main() {
//	int years = 0;
//	float balance = COST;
//	for (years = 1; balance > 9; years++) {
//		balance *= (1.0 + INTERST_RATE); 
//		balance -= TAKE_MONEY;         //balance after take off the 100000$
//		printf("After %d years remains $%g.\n", years, balance);
//	}
//
//	printf("take over the moeny after %d years:\n", years);
//
//
//	return 0;
//}


//int main(void)
//{
//    int years = 0;
//    double chuckie = 100.0;
//
//    while (chuckie > 9)
//    {
//        ++years, chuckie += chuckie * 0.08, chuckie -= 10;
//        printf("After %d years remains $%g.\n", years, chuckie);
//    }
//    printf("After %d years:\n", years + 1);
//    printf("Chuckie has taken all of the money!\n");
//
//    return 0;
//}

//
//#define DUNBAR_NUMBER 150
//
//int main() {
//
//	int i = 0;
//	int total_friends = 5;
//
//	for (i = 1; total_friends < DUNBAR_NUMBER;i++) {
//
//		total_friends = (total_friends - i) * 2;
//	}
//	printf("After %d weeks:\n", --i);
//    printf("total_friends has taken all of the 150!\n");
//
//	return 0;
//}


//int main(void)
//{
//    int i = 1;
//    int friends = 5;
//
//    while (friends < 150)
//    {
//        printf("At %d weeks, Rabnud has", i);
//        friends = 2 * (friends - i++);
//        printf("%4d friends.\n", friends);
//    }
//    printf("At %d weeks, over Dunbar's number(150).\n", --i);
//
//    return 0;
//}



//*******************2023/9/05 18:59*********************//


//int main1() {
//
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	char arr[] = { 0 };
//	while (scanf("%c",&arr[i])&&arr[i]!='#')
//	{
//		if (arr[i] == ' ') count1++;
//		if (arr[i] == '\n') count2++;
//		i++;
//	}
//	count3 = i - count1 - count2-1;
//
//	printf("space is %d, next cha is %d,others is %d\n", count1, count2, count3);
//
//	return 0;
//}
//
//
//#define STOP '#'
//
//
//int main()
//{
//	int ch, space, enter, others;
//	space = enter = others = 0;
//	printf("Please enter some character (# to quit):\n");
//
//	while ((ch=getchar())!=STOP)
//	{
//		(ch == ' ' ? ++space : (ch == '\n' ? ++ enter : ++others));
//	}
//
//	printf("Here are the contents\n");
//	printf("Space:%d\n", space);
//	printf("Linefeed:%d\n", enter);
//	printf("Others:%d\n", others);
//
//
//	return 0;
//}




//*******************2023/9/08 8:31*********************//

//#define STOP '#' 
//
//int main() {
//
//	int ch = 0;
//	int i = 0;
//	int count = 0;
//	char buffer[30];
//	
//	printf("Please enter some character (# to quit):\n");
//	
//	for (i = 0; (ch = getchar()) != STOP; i++) {
//			
//		buffer[i] = (char)ch;
//
//	}
//
//	count = i;  //record the total numbers in buffer;
//	printf("Here are the characters :\n");
//	
//	for (i = 0; i < count; i++) {
//		
//		printf("%c ", buffer[i]);
//		
//		if ((i % 8)==7) printf("\n");
//	}
//	printf("\n");
//	printf("Here are the characters corresponding ASCII:\n");
//
//	for (i = 0; i < count; i++) {
//
//		printf("the character is %c  --  ASCLL is %d\n", buffer[i], (int)buffer[i]);
//	
//	}
//	return 0;
//}

//#define STOP '#'
//
//int main1() {
//
//	int ch;
//	int i = 0;
//
//	printf("Enter some characters('#' to quit):\n");
//
//	while ((ch=getchar())!=STOP){
//
//		if (i++ % 8 == 0){
//			putchar('\n');
//		}
//		if (ch == '\n') {
//			printf("'\\n'-%3d", ch);
//		}
//		else if (ch == '\t') {
//			printf("'\\t'-%3d", ch);
//		}
//		else{
//			printf("'%c'-%3d", ch);
//		}
//	}
//	printf("Done.\n");
//
//	return 0;
//}


//int main() {
//	int ch;
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}

//#include<stdio.h>
//#define SPACE ' '
//int main() {
//
//	char ch;
//	ch = getchar();
//	while (ch!='\n'){
//
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//
//	return 0;
//}

//int main() {
//
//	int i = 0;
//	int evens = 0;
//	int sum_even = 0;
//	int odds = 0;
//	int sum_odd = 0;
//
//	int buffer[30];
//
//	printf("Please enter the integer( 0 to quit):\n");
//	
//	while (scanf("%d",&buffer[i])&&buffer[i]!=0){
//		
//		if (!(buffer[i] % 2)){
//
//			sum_even += buffer[i];
//			evens++;
//		}
//		else{
//			sum_odd += buffer[i];
//			odds++;
//		}
//		i++;
//	}
//
//	printf("the even numbers is %d,the average evens is %f\n", evens, ((float)sum_even / evens));
//	printf("the odd numbers is %d,the average odds is %f\n", odds, ((float)sum_odd / odds));
//
//	return 0;
//}



//int main(void)
//{
//    int n, odd = 0, even = 0;
//    int e_sum = 0, o_sum = 0;
//
//    printf("Please enter a integer (0 to quit): ");
//    while (scanf("%d", &n) == 1 && n)
//    {
//        (n % 2 ? (++odd, o_sum += n) : (++even, e_sum += n));
//        printf("You can enter again (0 to quit): ");
//    }
//    printf("Even number: %d\n", even);
//    if (even > 0)
//    {
//        printf("The average of even: %g\n", (float)e_sum / even);
//    }
//    printf("Odd number: %d\n", odd);
//    if (odd > 0)
//    {
//        printf("The average of odd: %g\n", (float)o_sum / odd);
//    }
//    printf("Done.\n");
//
//    return 0;
//}


//*******************2023/9/09 21:34*********************//

//int main1() {
//
//	int ch;
//	int n = 0;
//	printf("Enter some character('#' to quit):\n");
//	while ((ch = getchar())!='#'){
//
//		if (ch == '.') {
//			putchar('!');
//			n++;
//		}
//		else if (ch == '!') {
//			printf("!!");
//			n++;
//		}
//		else{
//			putchar(ch);
//
//		}
//
//	}
//
//	printf("\nTotal replaced %d times.\n", n);
//	printf("('.'->'!')or('!'->'!!').\n");
//
//	return 0;
//}
//
//int main2() {
//
//	int ch;
//	int n = 0;
//	printf("Enter some character('#' to quit):\n");
//	while ((ch=getchar())!='#'){
//		
//		switch (ch){
//
//			case '.':{
//
//				putchar('!');
//				n++;
//				break; 
//			}
//			case '!':{
//
//				printf("!!");
//				n++;
//				break;
//			}
//			default:{
//
//				putchar(ch);
//				break;
//			}
//		}
//
//	}
//
//	printf("\nTotal replaced %d times.\n", n);
//	printf("('.'->'!')or('!'->'!!').\n");
//
//	return 0;
//}
//
//int main3() {
//
//	int ch;
//	int n = 0;
//	while ((ch=getchar())!='#')	{
//
//	
//		if (ch=='e'){
//			putchar(ch);
//			if (ch == 'i')
//			{
//				putchar(ch);
//				n++;
//			}
//				
//		}
//		else{
//			putchar(ch);
//		}
//		
//		
//	}
//	printf("\nTotal 'ei' is %d times.\n", n);
//
//	return 0;
//}
//
//int main() {
//
//	int cur, pre = '#', n = 0;
//	printf("Enter some characters('#' to quit):\n");
//	while ((cur=getchar())!='#')
//	{
//		if (pre == 'e' && cur == 'i')++n;
//		pre = cur;
//	}
//
//	printf("\nTotal 'ei' is %d times.\n", n);
//
//	return 0;
//}


//*******************2023/9/10 21:34*********************//
//
//#define BASIC_SALARY 10.00  //1000$ per hour
//#define OVERTIME 1.5    //multiple
//#define BASEWORKTIME 40
//#define TXA_RATE_300 0.15
//#define TXA_RATE_450 0.20
//#define TXA_RATE_LATER 0.25
//
//int main1() {
//
//	float work_times=0;
//	float total_basesalary=0;
//	float total_overtime_salary=0;
//	float total_salary=0;
//	float tax=0;
//	float net_income =0;
//
//	printf("Please enter the working hours a week:\n");
//	scanf("%f", &work_times);
//
//	//base salary
//	if (work_times <= BASEWORKTIME) {
//		
//		total_basesalary = work_times * BASIC_SALARY;
//		total_overtime_salary = 0;
//		total_salary = total_basesalary + total_overtime_salary;
//	}
//	//overtime salary
//	else {
//		total_basesalary = BASEWORKTIME * BASIC_SALARY;
//		total_overtime_salary = (work_times - BASEWORKTIME) * OVERTIME * BASIC_SALARY;
//		total_salary = total_basesalary + total_overtime_salary;
//	}
//
//	//pay taxes
//	if (total_salary <= 300) {
//		tax = total_basesalary* TXA_RATE_300;
//	}
//	else if(total_salary>300&&total_salary<=450){
//		tax = 300 * TXA_RATE_300 + (total_basesalary - 300) * TXA_RATE_450;
//	}
//	else{
//
//		tax = 300 * TXA_RATE_300 + 150 * TXA_RATE_450 + (total_salary - 450) * TXA_RATE_LATER;
//	}
//
//	//net income
//	net_income = total_salary - tax;
//
//	printf("the total salary :%.2f\n", total_salary);
//	printf("the pay tax :%.2f\n", tax);
//	printf("the net income :%.2f\n", net_income);
//
//
//	return 0;
//}


//*******************2023/9/11 20:37*********************//

//int main() {
//
//	int choice = 0;   //chose the option
//	double hours =0.0;
//
//	double base_salary=0.0 ;
//
//	choice=Menu_salary_0910();
//
//	base_salary=Chose_salary(&choice);
//
//	hours=Work_time();
//
//	Salary_statistic(&base_salary, &hours);
//
//	return 0;
//}




//int main1() {
//
//	double hours;
//
//	printf("Enter the working hours a week:");
//	while (scanf("%lf", &hours) != 1 || (hours < 0)) {
//
//		while ((getchar() != '\n')) {
//			continue;
//		}
//		printf("Please enter a number(>=0):");
//	}
//
//	return 0;
//}


//*******************2023/9/12 22:42*********************//

//int main1() {
//
//	unsigned int input = 0;
//	printf("Please enter the integer(only the positive integer):");
//	while ((scanf("%ud", &input))!=1||input<0){
//
//		while ((getchar()!='\n')){
//
//			continue;
//		}
//		printf("Please re-enter the integer:");
//	}
//
//
//	for (int i = 2; i <= input; i++) {
//
//		int j = 0;
//		for (j = 2; j < i; j++){
//			if (i % j == 0)
//				break;
//		}
//		if (j >= i)
//			printf("%d ",i);
//		
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int isprime(int x)
//{
//    for (int i = 2; i <= x / i; ++i)
//    {
//        if (x % i == 0) return 0;
//    }
//    return 1;
//}
//
//int main(void)
//{
//    int number;
//
//    printf("Please enter a number (<= 0 to quit): ");
//    while (scanf("%d", &number) == 1 && (number > 0))
//    {
//        if (number == 1)
//        {
//            printf("1 isn't a prime!\n");
//        }
//        else
//        {
//            printf("Here are the prime (<= %d):\n", number);
//            for (int i = 2; i <= number; i++)
//            {
//                if (isprime(i))
//                {
//                    printf("%d ", i);
//                }
//            }
//        }
//        printf("\nYou can enter again (<= 0 to quit): ");
//    }
//    printf("Done.\n");
//
//    return 0;
//}
//



//*******************2023/9/13 22:07*********************//

//int main() {
//	
//	int choice = 0;
//	double tax_line = 0;
//	double salary;
//	while (1)
//	{
//		choice = Show_menu0913();
//
//		if (!choice) break;
//
//		tax_line = Tax_line(&choice);
//
//		salary = Salary_input();
//
//		Pay_tax(&salary, &tax_line);
//
//		printf("\n");
//
//	}
//
//	printf("quit\n");
//
//	return 0;
//}



//*******************2023/9/14 20:45*********************//

//#include <stdio.h>
//#define PLAN1 17850
//#define PLAN2 23900
//#define PLAN3 29750
//#define PLAN4 14875
//#define RATE1 0.15
//#define RATE2 0.28
//
//void eatline(void);
//
//int main(void)
//{
//    int n = 0;
//    double wage, tax;
//
//    while (1)
//    {
//        printf("********************************\n");
//        printf("1) single\n");
//        printf("2) householder\n");
//        printf("3) married\n");
//        printf("4) married but divorced\n");
//        printf("5) quit\n");
//        printf("********************************\n");
//        printf("Please you choose: ");
//        while (scanf("%d", &n) != 1 || (n > 5 || n < 1))
//        {
//            eatline();
//            printf("Please enter 1, 2, 3, 4 or 5: ");
//        }
//        if (n == 5)
//        {
//            break;
//        }
//        printf("Please enter your wage: ");
//        while (scanf("%lf", &wage) != 1 || (wage < 0))
//        {
//            eatline();
//            printf("Please enter a number(>= 0): ");
//        }
//        eatline();
//        switch (n)
//        {
//        case 1:
//        {
//            tax = (wage <= PLAN1 ? wage * RATE1 : PLAN1 * RATE1 + (wage - PLAN1) * RATE2);
//            break;
//        }
//        case 2:
//        {
//            tax = (wage <= PLAN2 ? wage * RATE1 : PLAN2 * RATE1 + (wage - PLAN2) * RATE2);
//            break;
//        }
//        case 3:
//        {
//            tax = (wage <= PLAN3 ? wage * RATE1 : PLAN3 * RATE1 + (wage - PLAN3) * RATE2);
//            break;
//        }
//        case 4:
//        {
//            tax = (wage <= PLAN4 ? wage * RATE1 : PLAN4 * RATE1 + (wage - PLAN4) * RATE2);
//            break;
//        }
//        }
//        printf("Your tax: %g\n\n", tax);
//    }
//    printf("Done.\n");
//
//    return 0;
//}
//
//void eatline()
//{
//    while (getchar() != '\n')
//        continue;
//}


//int main() {
//
//
//	char choice;
//	char x;
//	int times = 0;
//	int i = 0;
//	double yj_pound = 0;
//	double beet_pound = 0;
//	double carrot_pound = 0;
//
//	double sum_yj_pound ;
//	double sum_beet_pound ;
//	double sum_carrot_pound ;
//
//	sum_yj_pound = 0;
//	sum_beet_pound = 0;
//	sum_carrot_pound = 0;
//
//	Show_menu0914();
//	
//	printf("Please enter the choice(a、b、c or q ):");
//	do
//	{
//		while ((choice = getchar()) != 'q')
//		{
//			switch (choice)
//			{
//				case 'a': {
//					printf("请输入样蓟的磅数:> ");
//					scanf("%lf", &yj_pound);
//					sum_yj_pound += yj_pound;
//					break;
//				}
//				case 'b': {
//					printf("请输入甜菜的磅数:> ");
//					scanf("%lf", &beet_pound);
//					sum_beet_pound += beet_pound;
//					break;
//				}
//				case 'c': {
//					printf("请输入胡萝卜的磅数:> ");
//					scanf("%lf", &carrot_pound);
//					sum_carrot_pound += carrot_pound;
//					break;
//				}
//
//			}
//
//			if (choice == 'a') {
//				
//				break;
//			}
//			if (choice == 'b') {
//				
//				break;
//			}
//			if (choice == 'c') {
//				break;
//			}
//		}
//
//		if (choice == 'q') {
//			printf("quit\n");
//			break;
//		}
//
//		printf("please re-enter the choice(a,b,c,q to quit):\n");
//		
//	} while (1);
//
//	printf("样蓟买了%.3lf磅\n", sum_yj_pound);
//	printf("甜菜买了%.3lf磅\n", sum_beet_pound);
//	printf("胡萝卜买了%.3lf磅\n", sum_carrot_pound);
//
//	return 0;
//}

//
//#include <stdio.h>
//#include <ctype.h>
//
//int main(void)
//{
//    const double price_artichokes = 2.05;
//    const double price_beets = 1.15;
//    const double price_carrots = 1.09;
//    const double DISCOUNT_RATE = 0.05;
//    const double under5 = 6.50;
//    const double under20 = 14.00;
//    const double base20 = 14.00;
//    const double extralb = 0.50;
//
//    int ch;
//    double lb_artichokes = 0;
//    double lb_beets = 0;
//    double lb_carrots = 0;
//    double lb_temp;
//    double lb_total;
//
//    double cost_artichokes;
//    double cost_beets;
//    double cost_carrots;
//    double cost_total;
//    double final_total;
//    double discount;
//    double shipping;
//
//    printf("Enter a to buy artichokes, b for beets, ");
//    printf("c for carrots, q to quit: ");
//    while ((ch = tolower(getchar())) != 'q')
//    {
//        if (isspace(ch))
//        {
//            continue;
//        }
//        while (getchar() != '\n')
//            continue;
//        switch (ch)
//        {
//        case 'a':
//        {
//            printf("Enter pounds of artichokes: ");
//            scanf("%lf", &lb_temp);
//            lb_artichokes += lb_temp;
//            break;
//        }
//        case 'b':
//        {
//            printf("Enter pounds of beets: ");
//            scanf("%lf", &lb_temp);
//            lb_beets += lb_temp;
//            break;
//        }
//        case 'c':
//        {
//            printf("Enter pounds of carrots: ");
//            scanf("%lf", &lb_temp);
//            lb_carrots += lb_temp;
//            break;
//        }
//        default:
//        {
//            printf("%c is not a valid choice.\n", ch);
//        }
//        }
//        printf("Enter a to buy artichokes, b for beets, ");
//        printf("c for carrots, q to quit: ");
//    }
//
//    cost_artichokes = price_artichokes * lb_artichokes;
//    cost_beets = price_beets * lb_beets;
//    cost_carrots = price_carrots * lb_carrots;
//    cost_total = cost_artichokes + cost_beets + cost_carrots;
//    lb_total = lb_artichokes + lb_beets + lb_carrots;
//
//    if (lb_total <= 0)
//    {
//        shipping = 0.0;
//    }
//    else if (lb_total < 5.0)
//    {
//        shipping = under5;
//    }
//    else if (lb_total < 20.0)
//    {
//        shipping = under20;
//    }
//    else
//    {
//        shipping = base20 + extralb * (lb_total - base20);
//    }
//    if (cost_total > 100.0)
//    {
//        discount = DISCOUNT_RATE * cost_total;
//    }
//    else
//    {
//        discount = 0.0;
//    }
//    final_total = cost_total + shipping - discount;
//
//    printf("Your order:\n");
//    printf("%.2f lbs of artichokes at $%.2f per pound:$ %.2f\n",
//        lb_artichokes, price_artichokes, cost_artichokes);
//    printf("%.2f lbs of beets at $%.2f per pound: $%.2f\n",
//        lb_beets, price_beets, cost_beets);
//    printf("%.2f lbs of carrots at $%.2f per pound: $%.2f\n",
//        lb_carrots, price_carrots, cost_carrots);
//    printf("Total cost of vegetables: $%.2f\n", cost_total);
//    if (cost_total > 100)
//    {
//        printf("Volume discount: $%.2f\n", discount);
//    }
//    printf("Shipping: $%.2f\n", shipping);
//    printf("Total charges: $%.2f\n", final_total);
//
//    return 0;
//}



//*******************2023/9/16 23:47*********************//

//int main() {
//
//	char input = 0;
//	int a=0;
//	printf("Please enter the character:(a,b,c)：");
//
//	do
//	{
//		while (a=(scanf("%c", &input)) != 1 || (input != 'a' && input != 'b' && input != 'c')) {
//
//			while (getchar() != '\n') {
//				continue;
//			}
//
//			printf("Please re-enter the character:(a,b,c)：");
//
//		}
//
//
//	} while (1);
//
//	return 0;
//}




//*******************2023/9/17 19:56*********************//

//int main() {
//	
//	//下面一些程序要求输入以EOF终止。如果你的操作系统很难或根本无法使用重定向，请使用一些其他的测试来终止输入，如读到&字符时停止。
//	//设计一个程序，统计在读到文件结尾之前读取的字符数
//
//	//int ch;
//	//int ct = 0;
//	//printf("Please enter some characters:\n");
//
//	//while ((ch=getchar())!=EOF)
//	//{
//	//	ct++;
//	//}
//	//printf("Charaters:%d\n", ct);
//
//	//return 0;
//	//
//	
//	//编写一个程序，在遇到EOF之前，把输入作为字符流读取。程序要打印每个输入的字符及其相应的ASCII十进制。
//	//注意，在ASCII序列中，空格字符前面的字符都是非打印字符，要特殊处理这些字符。
//	//如果非打印字符是换行符或制表符，则分别打印\n或者\t，
//	//否则，使用控制字符表示法。例如，ASCII的I是Ctrl+A，可显示为^A。注意，A的ASCII值是Ctrl+A的值加上64。
//	//其他字符也有类似的关系。除每次遇到换行符打印新的一行之外，每行打印10对值。（注意：不同的操作系统其控制字符可能不同）
//
//	int ch;
//	int i = 0;
//	 
//	printf("Please enter some characters:\n");
//
//	while ((ch=getchar())!=EOF)
//	{
//		if (i++ == 10) {
//			putchar('\n');
//			i = 1;
//		}
//
//		if (ch >= 32) {
//
//			printf("\'%c\'-%3d", ch, ch);
//		}
//		else if (ch == '\n') {
//			printf(" \\n - \\n\n");
//			i = 0;
//		}
//		else if (ch == '\t') {
//
//			printf(" \\t - \\t");
//		}
//		else
//		{
//			
//			printf(" \'%c\' - ^%c", ch, ch + 64);
//
//		}
//
//	}
//	puts("Done.");
//
//	return 0;
//}



//*******************2023/9/19 22:56*********************//

//int main() {
//
//	int ch;
//	int small_count1 = 0;
//	int big_count2 = 0;
//	printf("Please enter the string:\n");
//
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			small_count1++;
//		if (ch >= 'A' && ch <= 'Z')
//			big_count2++;
//	}
//
//	printf("Lowercase letters :%d\n", small_count1);
//	printf("majuscule letters :%d\n", big_count2);
//
//	return 0;
//}


//#include<stdio.h>
//#include<ctype.h>
//
//int main() {
//
//	int ch;
//	unsigned int uct = 0;
//	unsigned int lct = 0;
//	unsigned int oct = 0;
//
//	printf("Please enter some characters:\n");
//
//	while ((ch=getchar())!=EOF)
//	{
//		(isupper(ch)) ? ++uct : islower(ch) ? ++lct : ++oct;
//	}
//
//	printf("Upper:%u\n", uct);
//	printf("Lower:%u\n", lct);
//	printf("Others:%u\n", oct);
//
//	return 0;
//}


//C语言isupper函数介绍、示例和实现----from CSDN
//C语言isupper函数用于判断字符是否为大写字母（A - Z）
//#include <ctype.h>  包含的头文件
//int isupper(int c);  函数声明
//判断参数c是否为大写字母，您可能会问：isupper函数的参数是int c，是整数，不是字符，在C语言中，字符就是整数，请补充学习一下基础知识。
//返回值：0 - 不是大写字母，非0 - 是大写字母

//#include <stdio.h>
//#include<ctype.h>
//
//int main()
//{
//	printf("isupper('-')=%d\n", isupper('-'));
//	printf("isupper('0')=%d\n", isupper('0'));
//	printf("isupper('a')=%d\n", isupper('a'));
//	printf("isupper('A')=%d\n", isupper('A'));
//}

/*
 * 程序名：book.c，此程序演示C语言自定义的isupper函数。
 * 作者：C语言技术网(www.freecplus.net) 日期：20190525
*/
//#include <stdio.h>
//
//// 自定义的isupper函数。
//int _isupper(int c)
//{
//	if (c >= 'A' && c <= 'Z') return 256;
//
//	return 0;
//}
//
//int main()
//{
//	printf("_isupper('-')=%d\n", _isupper('-'));
//	printf("_isupper('0')=%d\n", _isupper('0'));
//	printf("_isupper('a')=%d\n", _isupper('a'));
//	printf("_isupper('A')=%d\n", _isupper('A'));
//}






//int main() {
//
//	char S[100];
//	char t[100];
//	printf("请输入主串\n");
//	scanf("%s", S);
//	printf("请输入子串\n");
//	scanf("%s", t);
//
//	//printf("%d\n", strlen(S));
//	//printf("%d\n", strlen(t));
//	
//	int ret=BF(S, t);
//
//	if (ret == 0)
//	{
//		printf("匹配失败，没有在主串中找到子串的相关信息\n");
//	}
//	else
//	{
//		printf("匹配成功，匹配成功的位置为:%d\n", ret);
//	}
//
//	return 0;
//}


//
//int main() {
//
//	char S[100];
//	char t[100];
//
//	while (1)
//	{
//		printf("请输入主串\n");
//		scanf("%s", S);
//		printf("请输入子串\n");
//		scanf("%s", t);
//
//		int ret = KMP(S, t, 0);
//
//		if (ret == -1)
//		{
//			printf("匹配失败，在主串中未找到相关的子串位置\n");
//		}
//		else
//		{
//			printf("匹配成功，它的位置为：%d\n", ret);
//		}
//
//	}
//
//
//
//	return 0;
//}

///* guess.c  -- 一个低效且错误的猜数程序 */
//int main1()
//{
//	int guess = 1;
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//
//	while (getchar()!='y') /*获取用户响应并和y比较*/
//	{
//		printf("Well, then ,is it %d?\n", ++guess);
//	}
//
//	printf("I knew I could do it!\n");
//
//	return 0;
//}
//
//
///* guess.c  -- 一个低效且错误的猜数程序 */
//int main2()
//{
//	int guess = 1;
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//
//	while (getchar() != 'y') /*获取用户响应并和y比较*/
//	{
//		printf("Well, then ,is it %d?\n", ++guess);  
//
//		while (getchar()!='\n')     /*跳过输入行的剩余部分*/
//		{
//			continue;
//		}
//
//	}
//
//	printf("I knew I could do it!\n");
//
//	return 0;
//}
//
//
///* guess.c  -- 一个低效且错误的猜数程序 */
//int main()
//{
//	int guess = 1;
//	char response;
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//
//	while ((response = getchar()) != 'y') /*获取用户响应并和y比较*/
//	{
//		if (response == 'n')
//		{
//			printf("Well, then ,is it %d?\n", ++guess);
//		}
//		else
//		{
//			printf("Sorry, I understand only y or n.\n");
//		}
//
//		while (getchar() != '\n')     /*跳过输入行的剩余部分*/
//		{
//			continue;
//		}
//
//	}
//
//	printf("I knew I could do it!\n");
//
//	return 0;
//}


//void display(char cr, int lines, int width);
//
//int main1()
//{
//	int ch;					/* 要打印的字符 */
//	int rows, cols;			/* 行数和列数 */
//
//	printf("Enter a character and two integers:\n");
//
//	while ((ch=getchar())!='\n')
//	{
//		scanf("%d %d", &rows, &cols);
//		
//		display(ch,rows,cols);
//		
//		printf("Enter another character and two integers:\n");
//		
//		printf("Enter a newline to quit.\n");
//	}
//
//	printf("Bye.\n");
//
//	return 0;
//}
//
//int main()
//{
//	int ch;					/* 要打印的字符 */
//	int rows, cols;			/* 行数和列数 */
//
//	printf("Enter a character and two integers:\n");
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (scanf("%d %d", &rows, &cols) != 2)
//			break;
//		
//		display(ch, rows, cols);
//
//		while (getchar()!='\n')
//		{
//			continue;
//		}
//
//		printf("Enter another character and two integers:\n");
//
//		printf("Enter a newline to quit.\n");
//	}
//
//	printf("Bye.\n");
//
//	return 0;
//}
//
//
//void display(char cr, int lines, int width)
//{
//	int row, col;
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)
//		{
//			putchar(cr);
//		}
//
//		putchar('\n');/* 结束本行，开始新的一行 */
//	}
//}


//#include<stdbool.h>
//int main()
//{
//	const int MIN = -1000;  //范围的下界限制
//	const int MAX = 1000;   //范围的上界限制
//
//	int start;              //范围的下界
//	int stop;              //范围的上界
//	double answer;
//
//	printf("This program computers the sum of the squares of "
//		"integers in a range.\nThe lower bound should not "
//		"be less than -1000 and \nthe upper bound should not "
//		"be more than +1000.\nEnter the limits (enter 0 for  "
//		"both limits to quit): \nlower limit:");
//
//	start = get_int();				//确认输入了一个整数
//	printf("upper limit:");			
//	stop = get_int();
//	while (start!=0||stop!=0)
//	{
//		if (bad_Iimits(start, stop, MIN, MAX))  //确认范围的上下界是否有效
//			printf("Please try again.\n");
//		else
//		{
//			answer = sum_squares(start, stop);  //计算a 到 b 之间的整数的平方和
//			printf("The sum of the squares of the integer from ");
//			printf("from %d to %d is %g\n",start,stop,answer);
//		}
//
//		printf("Enter the limits (Enter 0 for both limits to quit):\n");
//		printf("lower limit:");
//		start = get_int();
//		printf("upper limit:");
//		stop = get_int();
//
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//



//*******************2023/9/22 17:05*********************//

//编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告平均每个单词的字母数。
//不要把空白统计为单词的字母。实际上，标点符号也不应该统计，但是现在暂时不用考虑这么多
//如果你在意这点，考虑使用ctype.h系列中的ispunct()函数
//#include<ctype.h>
//int main()
//{
//	bool inword = false;
//	int ch, words = 0;
//	int letter = 0;
//
//	printf("Please enter some words(EOF to quit):\n");
//	while ((ch = getchar())!=EOF)
//	{
//		putchar(ch);
//		//C 库函数 int ispunct(int c) 检查所传的字符是否是标点符号字符，并统计标点字符的个数。
//		//如果 c 是一个标点符号字符，则该函数返回非零值（true），否则返回 0（false）
//		if (ispunct(ch))
//		{
//			continue;
//		}
//
//		//isalpha函数用于判断字符是否为字母（a - z和A - Z）
//		//返回值：0-不是字母，非0-是字母。
//		if (isalpha(ch))
//		{
//			letter++;
//		}
//
//		//判断字符ch是否为空白符
//		//当ch为空白符时，返回非零值，否则返回零。（空白符指空格、水平制表、垂直制表、换页、回车和换行符。）
//		//下面两个if语句是判断是否是一个单词
//		if (!isspace(ch) && !inword)
//		{
//			inword = true;
//			words++;
//		}
//		if (isspace(ch) && inword)
//		{
//			inword = false;
//		}
//
//	}
//	double count = letter / words;
//	printf("Total words:%d\n", words);
//	printf("Total letters:%d\n", letter);
//	printf("Average letters of words :%g\n", count);
//
//
//	return 0;
//}


//*******************2023/9/24 11:39*********************//


/* guess.c  -- 一个低效且错误的猜数程序 */
//int main()
//{
//	int guess = 50;
//	int temp_max = 100;
//	int temp_min = 1;
//
//	char response;
//	char response2;
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//
//	while ((response = getchar()) != 'y') /*获取用户响应并和y比较*/
//	{
//		if (response == 'n')
//		{
//			printf("the %d is biger or smaller", guess);
//			printf("\nRespond with b s or c if my guess is biger 、");
//			printf("\n my guess is smaller or my guess is correct:(input b,s or c):");
//			while ((response2 = getchar()) != 'c')
//			{
//
//				if (response2 == 'b')
//				{
//
//					//猜大了
//					temp_max = guess;  //更新最大值
//					guess = (temp_max + temp_min) / 2;
//					printf("Well, then ,is it %d?\n", guess);
//					printf("my guess:%d is bigger smaller:(input b or s):", guess);
//
//				}
//
//				if (response2 == 's')
//				{
//					//猜小了
//					temp_min = guess; ////更新最小值
//					guess = (temp_min + temp_max) / 2;
//					printf("Well, then ,is it %d?\n", guess);
//					printf("my guess:%d is bigger smaller:(input b or s):", guess);
//				}
//			}
//
//				if (response2 == 'c')
//				{
//					break;
//				}
//
//				else
//				{
//					printf("Sorry, I understand only b 、s or c.\n");
//				}
//				
//				while (getchar() != '\n')     /*跳过输入行的剩余部分*/
//				{
//					continue;
//				}
//			
//		}
//		else
//		{
//			printf("Sorry, I understand only y or n.\n");
//		}
//
//		while (getchar() != '\n')     /*跳过输入行的剩余部分*/
//		{
//			continue;
//		}
//
//	}
//
//	printf("I knew I could do it!\n");
//
//	return 0;
//}

//#include<ctype.h>
//
//int main()
//{
//	int high = 100;
//	int low = -1;
//	int guess = (high + low) / 2;
//	char response;
//
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right, with");
//	printf("\na h if it is high,and with an l if it is low.\n");
//	printf("Uh...is your number %d\n", guess);
//
//	while ((response = getchar()!='y'))
//	{
//		if (response == '\n')
//		{
//			continue;
//		}
//
//		if (tolower(response) != 'h' && tolower(response) != 'l')
//		{
//			printf("I don't understand that response. Please enter h for \n");
//			printf("high, l for low, y for correct.\n");
//			continue;
//		}
//
//		if (tolower(response) == 'h')
//		{
//			high = guess - 1;
//		}
//		else if (towlower(response) == 'l')
//		{
//			low = guess + 1;
//		}
//		guess = (high + low) / 2;
//		printf("Well, then, is it %d?\n", guess);
//	}
//
//	printf("I knew I could do it!\n");
//
//	return 0;
//}


#include<ctype.h>

//返回读取第一个非空白字符，否则返回  0；
//char get_first()
//{
//	int ch;
//
//	while ((ch = getchar())!='\n')
//	{
//		//当ch为空白符时，返回非零值，否则返回零。（空白符指空格、水平制表、垂直制表、换页、回车和换行符。）
//		if (!isspace(ch))
//		{
//			return ch;
//		}
//	}
//
//	while (getchar()!='\n')
//	{
//		continue;
//	}
//	return 0;
//}

//
//#define STOP '#'
//
//int get_first()
//{
//	int ch;
//	do
//	{
//		ch = getchar();
//	} while (isspace(ch));
//
//	while (getchar()!='\n')
//	{
//		continue;
//	}
//
//	return ch;
//}
//
//
//int main()
//{
//	int ch;
//	printf("Please enter some characters('#' to quit):\n");
//
//	while ((ch = get_first())!=STOP)
//	{
//		printf("Result:%c\n", ch);
//		printf("You can enter again('#' to quit):\n");
//
//	}
//	printf("Done.\n");
//
//
//	return 0;
//}



//*******************2023/9/25 21:22*********************//
//修改第7章编程练习8，用字符代替数字标记菜单的选项。用q代替5作为结束输入的标记
//
//#define EXTER_HOUR 1.5
//#define BASE_TAX 0.15
//#define EXTRA_TAX 0.2
//#define EXCEED_TAX 0.25
//
//int show_menu();
//void show_salary(double base_salary, double hours);
//
//int main()
//{
//	
//	int ch;
//	double n;
//
//	while ((ch = show_menu()) != 'q')
//	{
//		printf("Enter the working hours a week:");
//		while (scanf("%lf",&n)!=1||(n<0))
//		{
//			while (getchar()!='\n')
//			{
//				continue;
//			}
//
//			printf("Enter a positive number:");
//
//		}
//
//		switch (ch)
//		{
//			case 'a':
//			{
//				show_salary(8.75, n);
//				break;
//			}
//			case 'b':
//			{
//				show_salary(9.33, n);
//				break;
//			}
//			case 'c':
//			{
//				show_salary(10.00, n);
//				break;
//			}
//			case 'd':
//			{
//				show_salary(11.20, n);
//				break;
//			}
//			default:
//				break;
//
//
//		}
//
//		putchar('\n');
//		
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}
//
//int get_choice()
//{
//	int ch;
//	do
//	{
//		ch = getchar();
//	} while (isspace(ch));
//
//	while (getchar()!='\n')
//	{
//		continue;
//	}
//	return ch;
//}
//
//
//int show_menu()
//{
//	int ch;
//
//	printf("*****************************************************************\n");
//	printf("Enter the number corresponding to the desired pay rate or action:\n");
//	printf("a)  $8.75/hr                                           b)&9.33/hr\n");
//	printf("c)  $10.00/hr                                          d)&11.20/hr\n");
//	printf("q) quit\n");
//	printf("*****************************************************************\n");
//	printf("Please your choose:");
//
//	ch = get_choice();
//	
//	while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'q')
//	{
//		printf("Please enter a,b,c,d or q:");
//		ch = get_choice();
//	}
//
//	return ch;
//}
//
//
//void show_salary(double base_salary, double hours)
//{
//	double tax, taxed_salary;
//	double salary = (hours > 40 ? (40 + 1.5 * (hours - 40)) : hours) * base_salary;
//	if (salary < 300)
//	{
//		tax = salary * BASE_TAX;
//	}
//	else if(salary<=450)
//	{
//		tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX;
//	}
//	else
//	{
//		tax = 300 * BASE_TAX + 150 * EXTRA_TAX + (salary - 450) * EXCEED_TAX;
//	}
//
//	taxed_salary = salary - tax;
//	printf("salary(before taxed):$%g\n", salary);
//	printf("tax:$%g\n", tax);
//	printf("salary(after taxed):$%g\n", taxed_salary);
//}

//
//
//int show_menu();
//
//float get_int0925()
//{
//	int ch2;
//	float input1;
//	while (scanf("%f", &input1) != 1)
//	{
//		while ((ch2 = getchar()) != '\n')
//		{
//			putchar(ch2);
//		}
//		printf(" is not an number\n");
//		printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
//	}
//
//	return input1;
//}
//
//void Add(float input1, float input2)
//{
//	printf("%f + %f = %f\n", input1, input2, input1 + input2);
//}
//
//void Subtract(float input1,float input2)
//{
//	printf("%f - %f = %f\n", input1, input2, input1 - input2);
//}
//
//void Multiply(float input1, float input2)
//{
//	printf("%f * %f = %f\n", input1, input2, input1 * input2);
//}
//
//void Divide(float input1,float input2)
//{
//	printf("%f / %f = %f\n", input1, input2, input1 / input2);
//}
//
//
//int main()
//{
//	int ch;
//	float input1;
//	float input2;
//	while ((ch=show_menu())!='q')
//	{
//		switch (ch)
//		{
//		case 'a':
//			{
//				printf("Enter the first number:");
//				input1 = get_int0925();
//				printf("Enter the second number:");
//				input2 = get_int0925();
//				Add(input1, input2);
//				break;
//			}
//		case 's':
//			{
//				printf("Enter the first number:");
//				input1 = get_int0925();
//				printf("Enter the second number:");
//				input2 = get_int0925();
//				Subtract(input1, input2);
//				break;
//			}
//		case 'm':
//			{
//				printf("Enter the first number:");
//				input1 = get_int0925();
//				printf("Enter the second number:");
//				input2 = get_int0925();
//				Multiply(input1, input2);
//				break;
//			}
//		case 'd':
//			{
//				printf("Enter the first number:");
//				input1 = get_int0925();
//				printf("Enter the second number:");
//				while (!(input2 = get_int0925()))
//				{
//					printf("Enter a number other than 0:");
//				}
//				Divide(input1, input2);
//				break;
//			}
//		}
//    
//	}
//
//	printf("Bye.\n");
//	return 0;
//}
//
//
//int get_choice()
//{
//	int ch;
//	do
//	{
//		ch = getchar();
//	} while (isspace(ch));
//
//	while (getchar()!='\n')
//	{
//		continue;
//	}
//	return ch;
//}
//
//
//int show_menu()
//{
//	int ch;
//	
//	printf("Enter the operation choice:\n");
//	printf("a. add          s. subtract\n");
//	printf("m. multiply     d. divide\n");
//	printf("q. quit\n");
//	
//	ch = get_choice();
//		
//	while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
//	{
//		printf("Please enter a,s,m,d or q:");
//		ch = get_choice();
//	}
//	
//	return ch;
//}


//double min(double x, double y)
//{
//	if (x < y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	double x, y;
//	printf("Enter the two numbers('q' to quit):\n");
//
//	while (scanf("%lf %lf",&x,&y)==2)
//	{
//		printf("%lf", min(x, y));
//		putchar('\n');
//		printf("Enter the two numbers('q' to quit):\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}


//void chline(char ch, int col, int row)
//{
//	int i=0;
//	int j=0;
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 1; j <= col; j++)
//			putchar(ch);
//		putchar('\n');
//	
//
//	}
//
//}
//
//
//int main()
//{
//	chline('*', 3, 2);
//	
//	return 0;
//}

//*******************2023/9/27 22:52*********************//

//#define CHAR '#'
//
//void show(int ch, int cols, int rows);
//
//int main()
//{
//	int i, j;
//
//	printf("Please enter two numbers (q to quit):");
//
//	while (scanf("%d %d",&j,&i)==2)
//	{
//		printf("Printing %c in %d rows and %d columns is:\n", CHAR, i, j);
//		show(CHAR, j, i);
//		printf("You can enter two numbers again(q to quit):");
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//
//
//void show(int ch, int cols, int rows)
//{
//	int a, b;
//
//	for (a = 1; a <= rows; a++)
//	{
//		for (b = 1; b <= cols; b++)
//		{
//			putchar(ch);
//		}
//		putchar('\n');
//	}
//
//}

//
//double Harmonic_mean(double x, double y);
//
//
//int main()
//{
//	double i, j;
//
//	printf("Please enter two numbers (q to quit):");
//
//	while (scanf("%lf %lf",&i,&j)==2)
//	{
//		printf("%lf is the harmonic mean with %lf and %lf.\n", Harmonic_mean(i, j), i, j);
//		printf("You can enter two numbers again(q to quit):");
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//
//
//double Harmonic_mean(double x, double y)
//{
//	double mean;
//
//	mean = 1 / ((1 / x + 1 / y) / 2);
//
//	return mean;
//}

//void larget(double* x, double* y);
//
//int main()
//{
//	double x, y;
//
//	printf("Please enter two numbers(q to quit):");
//
//	while (scanf("%lf %lf",&x,&y) == 2)
//	{
//		printf("past: %lf and %lf\n", x, y);
//		larget(&x, &y);
//		printf("now: %lf and %lf\n", x, y);
//		printf("Please enter two numbers again (q to quit):");
//	}
//	
//
//	return 0;
//}
//
//void larget(double* x, double* y)
//{
//	//(*x < *y) ? (*x = *y) : (*y = *x);
//	*x = *y = (*x < *y) ? *y : *x;
//
//}


//void sort0927(double* a, double* b, double* c);
//
//int main()
//{
//
//	double x, y,z;
//	
//	printf("Please enter three numbers(q to quit):");
//	
//	while (scanf("%lf %lf %lf",&x,&y,&z) == 3)
//	{
//		printf("past: %lf 、%lf and %lf\n", x, y, z);
//		sort0927(&x, &y,&z);
//		printf("now: %lf、%lf and %lf \n", x, y, z);
//		printf("Please enter three numbers again (q to quit):");
//	}
//	return 0;
//}
//
//void sort0927(double* a, double* b, double* c)
//{
//	double tp;
//
//	if (*a > *b)
//	{
//		tp = *a;
//		*a = *b;
//		*b = tp;
//	}
//
//	if (*a > *c)
//	{
//		tp = *a;
//		*a = *c;
//		*c = tp;
//	}
//
//	if (*b > *c)
//	{
//		tp = *b;
//		*b = *c;
//		*c = tp;
//
//	}
//
//}

//*******************2023/9/28 21:32*********************//
//从标准输入中读取字符，直到遇到文件结尾，报告每个字符是否为字母。如果是，还要报告该字母
//在字母表中的数值位置。如果该字符是一个字母则返回一个数值位置，否则返回-1
//#include <stdio.h>
//#include <ctype.h>
//
//void attain_pos(void);
//int position(int ch);
//
//int main(void)
//{
//    attain_pos();
//
//    return 0;
//}
//
//void attain_pos(void)
//{
//    int ch;
//    int figure;
//
//    printf("Please enter a character (EOF to quit):\n");
//    while ((ch = getchar()) != EOF)
//    {
//        figure = position(ch);
//        if (figure)
//        {
//            printf("%c is %d in alphabet.\n", ch, figure);
//        }
//        else
//        {
//            printf("%c isn't a letter!\n", ch); //包括回车换行符和空白符;
//        }
//        while (getchar() != '\n')
//            continue;
//        printf("You can enter again (EOF to quit): ");
//    }
//    printf("Done.\n");
//}
//
//int position(int ch)
//{
//    if (isupper(ch))
//    {
//        return (ch - 'A' + 1);
//    }
//    else if (islower(ch))
//    {
//        return (ch - 'a' + 1);
//    }
//    return 0;
//}
//


//#include <stdio.h>
//
//double power(double n, int p);
//
//int main(void)
//{
//    double x, xpow;
//    int exp;
//
//    printf("Enter a number and the integer power");
//    printf(" to which\nthe number will be raised. Enter q");
//    printf(" to quit.\n");
//    while (scanf("%lf %d", &x, &exp) == 2)
//    {
//        xpow = power(x, exp);
//        printf("%.3g to the power %d is %.5g.\n", x, exp, xpow);
//        printf("Enter next pair of numbers or q to quit.\n");
//    }
//    printf("Hope you enjoyed this power trip -- bye!\n");
//
//    return 0;
//}
//
//double power(double n, int p)
//{
//    int i;
//    double pow = 1.0;
//
//    if ((0 == p) && (0 == n)) //指数和底均为0
//    {
//        printf("0 to the 0 undefined, using 1 as the value.\n");
//        return pow;
//    }
//
//    if (0 == n)      //底为0
//    {
//        pow = 0.0;
//        return pow;
//    }
//
//    if (0 == p)      //指数为0
//    {
//        return pow;
//    }
//
//    if (p > 0)       //指数大于0
//    {
//        for (i = 1; i <= p; i++)
//        {
//            pow *= n;
//        }
//        return pow;
//    }
//    else             //指数小于0
//    {
//        // 指数是负数
//
//        for (i = 1; i <= -p; i++)
//        {
//            pow *= 1 / n;
//        }
// 
//        return pow;
//    }
//}

//double power(double n, int p);
//
//int main(void)
//{
//    double x, xpow;
//    int exp;
//
//    printf("Enter a number and the integer power");
//    printf(" to which\nthe number will be raised. Enter q");
//    printf(" to quit.\n");
//    while (scanf("%lf %d", &x, &exp) == 2)
//    {
//        xpow = power(x, exp);
//        printf("%.3g to the power %d is %.5g.\n", x, exp, xpow);
//        printf("Enter next pair of numbers or q to quit.\n");
//    }
//    printf("Hope you enjoyed this power trip -- bye!\n");
//
//    return 0;
//}
//
//double power(double n, int p)
//{
//    double pow = 1.0;
//
//    if ((0 == p) && (0 == n))
//    {
//        printf("0 to the 0 undefined, using 1 as the value.\n");
//        return pow;
//    }
//    if (0 == n)
//    {
//        pow = 0.0;
//        return pow;
//    }
//    if (0 == p)
//    {
//        return pow;
//    }
//    if (p > 0)
//    {
//        return n * power(n, p - 1);
//    }
//    else
//    {
//        return power(n, p + 1) / n;
//    }
//}

//*******************2023/9/30 21:32*********************//

///*recur.c --递归举例*/
//
//void up_and_down(int);
//
//int main(void)
//{
//	up_and_down(1);
//
//	return 0;
//}
//
//void up_and_down(int n)
//{
//	printf("Level %d: n location %p\n", n, &n);   /*1*/
//
//	if (n < 4)
//	{
//		up_and_down(n + 1);
//	}
//	printf("LEVEL %d: n location %p\n", n, &n);
//}



//long fact(int n);
//long rfact(int n);
//
//int main()
//{
//	int num;
//
//	printf("This program calculate factorials.\n");
//	printf("Enter a value in the range 0-12(q to quit):\n");
//	while (scanf("%d",&num)==1)
//	{
//		if (num < 0)
//		{
//			printf("No negative numbers.please.\n");
//		}
//		else if(num>12)
//		{
//			printf("Keep input under 13.\n");
//		}
//		else
//		{
//			printf("loop %d factorial = %d\n", num, fact(num));
//			printf("recursion: %d factorial = %ld\n", num, rfact(num));
//
//		}
//		printf("Enter a value in the range 0-12(q to  quit):\n");
//
//	}
//
//	printf("Bye.\n");
//	return 0;
//}
//
//long fact(int n)
//{
//	long ans;
//
//	for (ans = 1; n > 1; n--)
//		ans *= n;
//
//	return ans;
//}
//
//long rfact(int n) //使用递归计算阶数
//{
//	long ans;
//
//	if (n > 0)
//		ans = n * rfact(n - 1);
//	else
//	{
//		ans = 1;
//	}
//	return ans;
//}
//
//void to_binary(unsigned long n);
//
//int main()
//{
//
//	unsigned long number;
//	printf("Enter an integer (q to quit):\n");
//
//	while (scanf("%ul", &number) == 1)
//	{
//		printf("Binary equivalent:");
//		to_binary(number);
//		putchar('\n');
//		printf("Enter an integer (q to quit):\n");
//
//	}
//
//	printf("Done.\n");
//
//
//	return 0;
//}
//
//void to_binary(unsigned long n)
//{
//	int r;
//	r = n % 2;
//	if (n >= 2)
//		to_binary(n / 2);
//	putchar('0' + r);
//
//}
//


//void to_base_n(unsigned long n,int input);
//void base_print(int input);
//int main()
//{
//	int input = 0;
//	unsigned long number;
//	
//	printf("Enter an integer (q to quit):\n");
//
//	while (scanf("%ul", &number) == 1)
//	{
//
//		printf("Please enter an integer(2-10):");
//		
//		while (scanf("%d", &input) != 1||input<2||input>10)
//		{
//			printf("sorry,should keep input under(2-10):");
//		}
//		base_print(input);
//		to_base_n(number, input);
//		putchar('\n');
//		printf("Enter an integer (q to quit):\n");
//	
//	}
//
//	printf("Done.\n");
//
//
//	return 0;
//}
//
//void base_print(int input)
//{
//	switch (input)
//	{
//	case 2:
//		printf("Binary equivalent:");
//		break;
//	case 3:
//		printf("ternary equivalent:");
//		break;
//	case 4:
//		printf("quaternary equivalent:");
//		break;
//	case 5:
//		printf("quinary equivalent:");
//		break;
//	case 6:
//		printf("senary equivalent:");
//		break;
//	case 7:
//		printf("septenary equivalent:");
//		break;
//	case 8:
//		printf("octal equivalent:");
//		break;
//	case 9:
//		printf("nonary equivalent:");
//		break;
//	case 10:
//		printf("decimal equivalent:");
//		break;
//
//	default:
//		break;
//	}
//
//}
//
//
//void to_base_n(unsigned long n,int input)
//{
//	int r;
//	r = n % input;
//	if (n >= input)
//		to_base_n(n / input,input);
//	putchar('0' + r);
//
//}



//void to_base_n(int x, int base);
//
//int main()
//{
//	int b;
//	long int n;
//
//	printf("Please enter a number(q to quit): ");
//
//	while (scanf("%ld", &n) == 1)
//	{
//		if (n <= 0)
//		{
//			printf("illegal data! Please enter again: ");
//			continue;
//		}
//
//		printf("Please enter a base system number(2-10): ");
//
//		while (scanf("%d",&b)!=1||(b<2||b>10))
//		{
//			while (getchar()!='\n')
//			{
//				continue;
//			}
//			printf("Please enter again(2-10): ");
//			
//		}
//		printf("%d in %d base system is: ", n, b);
//
//		to_base_n(n, b);
//
//		printf("\nYou can enter a number again (q to quit): ");
//	}
//	printf("Done.\n");
//	return 0;
//}
//
//
//
//
//void to_base_n(int x, int base)
//{
//	int r;
//	r = x % base;
//	if (x >= base)
//	{
//		to_base_n(x / base, base);
//	}
//	printf("%d", r);
//}

//void Fibonacci(int len);
//
//int main()
//{
//	int n;
//
//	printf("Please enter a integer (<=0 or q to quit): ");
//
//	while (scanf("%d", &n) == 1)
//	{
//		printf("Top %d items of Fibonacci sequence: \n", n);
//		Fibonacci(n);
//		printf("Please enter a integer (<=0 or q to quit): ");
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}
//
//void Fibonacci(int len)
//{
//	int i;
//	unsigned long t, x, y;
//	x = y = 1;
//
//	for (i = 0; i < len; i++)
//	{
//		printf("%lu ", x);
//		t = x + y;
//		x = y;
//		y = t;
//
//	}
//	printf("\n");
//
//}


//*******************2023/10/02 21:32*********************//


//#define MONTHS 12         // 一年的月份数
//#define YEARS 5			  // 降水量数据的年数
//
//int main1()
//{
//	//把数组初始化为2000年到2004年的降水量数据
//
//	const float rain[YEARS][MONTHS] = {
//	{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//	{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//	{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//	{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//	{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//	};
//
//	int year, month;
//	float subtot, total;
//
//	printf(" YEAR RAINFALL (inches) \n");
//
//	for (year = 0, total = 0; year < YEARS; year++)
//	{
//		//对于每一年，各月的总降水量
//		for (month = 0, subtot = 0; month < MONTHS; month++)
//		{
//			subtot += rain[year][month];
//		}
//
//		printf("%5d %15.1f\n", 2000 + year, subtot);
//
//		total += subtot;  //所有年度的总降水量
//
//	}
//
//	printf("\nThe yearly average is %.lf inches.\n\n", total / YEARS);
//	printf("MONTHLY AVERAGES: \n\n");
//	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
//	printf(" Nov Dec\n");
//
//	for (month = 0, subtot = 0; month < MONTHS; month++)
//	{
//		//对于每一月，各年该月份的总降水量
//		for (year = 0, total = 0; year < YEARS; year++)
//		{
//				subtot += rain[year][month];
//		}
//
//		printf("%4.1f ", subtot/YEARS);
//	}
//	
//	printf("\n");
//	
//	return 0;
//}
//
//int main()
//{
//	//把数组初始化为2000年到2004年的降水量数据
//
//	const float rain[YEARS][MONTHS] = {
//	{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//	{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//	{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//	{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//	{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//	};
//
//	int year, month;
//	float subtot, total;
//
//	printf(" YEAR RAINFALL (inches) \n");
//
//	for (year = 0, total = 0; year < YEARS; year++)
//	{
//		//对于每一年，各月的总降水量
//		for (month = 0, subtot = 0; month < MONTHS; month++)
//		{
//			subtot += *(*(rain + year) + month);
//		}
//
//		printf("%5d %15.1f\n", 2000 + year, subtot);
//
//		total += subtot;  //所有年度的总降水量
//
//	}
//
//	printf("\nThe yearly average is %.lf inches.\n\n", total / YEARS);
//	printf("MONTHLY AVERAGES: \n\n");
//	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
//	printf(" Nov Dec\n");
//
//	for (month = 0, subtot = 0; month < MONTHS; month++)
//	{
//		//对于每一月，各年该月份的总降水量
//		for (year = 0, total = 0; year < YEARS; year++)
//		{
//			subtot += rain[year][month];
//
//			subtot += *(*(rain + year) + month);
//
//		}
//
//		printf("%4.1f ", subtot / YEARS);
//	}
//
//	printf("\n");
//
//	return 0;
//}

//
//void copy_arr(double target1[],const double source[],int num)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		target1[i] = source[i];
//	}
//
//}
//
//void copy_ptr(double* target2, const double* source, int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		*(target2 + i) = *(source + i);
//	}
//
//
//}
//
//void copy_ptrs(double* target3,const double* source, const double* end)
//{
//	while (source<end)
//	{
//		*(target3++) = *(source++);
//	}
//
//}
//
//void show_arr(const double x[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%-5g", x[i]);
//	}
//	putchar('\n');
//}
//
//
//int main()
//{
//	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	double target1[5];
//	double target2[5];
//	double target3[5];
//
//	printf("Source array:\n");
//	show_arr(source, 5);
//
//
//	copy_arr(target1, source, 5);
//	printf("Target1:\n");
//	show_arr(target1, 5);
//
//	copy_ptr(target2, source, 5);
//	printf("Target2:\n");
//	show_arr(target2, 5);
//
//	copy_ptrs(target3, source, source + 5);
//	printf("Target3:\n");
//	show_arr(target3, 5);
//
//	return 0;
//}


//*******************2023/10/03 10:07*********************//

////最大值算法
//void get_max_common(int* arr, int num,int* max,int* location)
//{
//	*max = *arr;
//	*location = 0;
//
//	for (int i = 1; i < num; i++)
//	{
//		if (*max < *(arr + i))
//		{
//			*max = *(arr + i);
//			*location = i;
//		}
//
//	}
//}
//
//int get_max(int* arr, int left, int right)
//{
//	//left 左下标 right 右下标
//	//首先判断，传入的数组是不是空数组
//	if (arr == NULL)
//		return -1;
//	//当数组中只有一个值的时候
//	if (right - left == 0)
//		return arr[left];
//	//此时数组中只有两个值，直接比较即可
//	if ((right - left) <= 1)
//	{
//		if (arr[left] > arr[right])
//			return arr[left];
//		return arr[right];
//	}
//
//	int middle = (right - left) / 2 + left;
//	int max_left = get_max(arr, left, middle);
//	int max_right = get_max(arr, middle + 1, right);
//
//	if (max_left > max_right)
//		return max_left;
//	return max_right;
//}
//
//void show_arr(const int x[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%-5d ", x[i]);
//	}
//	putchar('\n');
//}
//
//int main()
//{
//	int location = 0;
//	int max = 0;
//
//	int arr[] = { 30,4,200,4,5,2,5,67,8 };
//	
//	int length = sizeof(arr) / 4;
//	
//	printf("arr before sort: ");
//	show_arr(arr, length);
//
//	//get_max_common(arr, length, &max, &location);	
//	//printf("the max of the arr is %d: ", max);
//	//printf("\nthe location is %d: ", location+1);
//
//
//	//int left = partition(arr, 0, length - 1);
//	//quickSort(arr, 0, length - 1);
//	//show_arr(arr, length);
//	//printf("the max of the arr is %d: ", arr[length-1]);
//
//	max = get_max(arr, 0, length - 1);
//	printf("the max of the arr is %d: ", max);
//
//
//
//	return 0;
//}

//*******************2023/10/04 10:26*********************//


//void get_max_common(double* arr, int num,double* max,int* location)
//{
//	*max = *arr;
//	*location = 0;
//
//	for (int i = 1; i < num; i++)
//	{
//		if (*max < *(arr + i))
//		{
//			*max = *(arr + i);
//			*location = i;
//		}
//
//	}
//}


//
//
//int main()
//{
//	double max = 0;
//	int location = 0;
//	double arr[] = { 1.2,2.3,3.3,2.3,1.3,1.8,9.8 };
//	int length = sizeof(arr) / sizeof(double);
//
//	show_arr(arr, length);
//
//	get_max_common(arr, length, &max, &location);
//
//	printf("the max of the arr is %lf: ", max);
//	
//	printf("\nthe location is %d: ", location+1);
//
//	return 0;
//}

//int partion1004(double* arr, int left, int right)
//{
//	if (arr == NULL) return -1;
//
//	double pivot = arr[left];
//
//	while (left<right)
//	{
//		while (left<right&&arr[right]<=pivot)
//		{
//			right--;
//		}
//		arr[left] = arr[right];
//
//		while (left < right && arr[left] >= pivot)
//		{
//			left++;
//		}
//
//		arr[right] = arr[left];
//	}
//
//	arr[left] = pivot;
//
//	return left;
//}
//
//void quicksort1004(double* arr, int left, int right)
//{
//	if (arr == NULL) return;
//
//	if (left < right)
//	{
//		int pivot = partion1004(arr, left, right);
//
//		quicksort1004(arr, left, pivot - 1);
//		quicksort1004(arr, pivot + 1, right);
//	}
//}

//void reverse(double a[], int n)
//{
//	for (int i = 0; i < n / 2; i++)
//	{
//		double t = a[i];
//		a[i] = a[n - i - 1];
//		a[n - i - 1] = t;
//	}
//	return;
//}
//
//
//#define ROW 5
//#define COL 12
//
////two_dimensional
//void show_arr_2D(const double (*x)[COL], int row)
////void show_arr_2D(const double x[][COL], int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			printf("%-5g ", *(*(x + i) + j));
//		}
//		putchar('\n');
//	}
//}
//
//void copy_ptr04(double (*target)[COL], const double arr[][COL], int row)
////void copy_ptr04(double target[][COL], const double arr[][COL], int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			*(*(target + i) + j) = *(*(arr + i) + j);
//		}
//	}
//	putchar('\n');
//}

//int main()
//{
//	//double max = 0;
//	//int location = 0;
//	//double arr[] = { 1.2,2.3,3.3,2.3,1.3,1.8,9.8 };
//	//int length = sizeof(arr) / sizeof(double);
//
//	//show_arr(arr, length);
//
//	//reverse(arr, length);
//
//	//show_arr(arr, length);
//
//	//quicksort1004(arr, 0, length - 1);
//	//show_arr(arr, length);
//	//printf("in the arr, max-min=%-5g", arr[0] - arr[length - 1]);
//
//	double target[ROW][COL] = { 0 };
//	const double arr[ROW][COL] = 
//	{
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//	};
//	show_arr_2D(arr, ROW);
//	copy_ptr04(target, arr, ROW);
//	show_arr_2D(target, ROW);
//
//	return 0;
//}

//int main()
//{
//	double a[N][M] =
//	{
//		{1.0,2.0,3.0,4.0,5.0},
//		{6.0,7.0,8.0,9.0,10.0},
//		{11.0,12.0,13.0,14.0,15.0}
//	};
//	double b[N][M] = { 0 };
//
//	printf("Array a:\n");
//	show_array(N, M, a);
//	
//	printf("Array b:\n");
//	show_array(N, M, b);
//	copy_array(N, M, a, b);
//
//	printf("Copy array a to array b:\n");
//	show_array(N, M, b);
//
//	return 0;
//}


//*******************2023/10/06 9:03*********************//

//void copy_add(int* destination, int* source1, int* source2, int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//
//		*(destination + i) = *(source1 + i) + *(source2 + i);
//	}
//	return;
//
//}
//

//#define length 6
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 1,2,3,4,5,6 };
//	int arr3[length] = { 0 };
//	//int length = sizeof(arr1) / sizeof(int);
//	show_arr(arr1, length);
//	show_arr(arr2, length);
//
//	copy_add(arr3, arr2, arr1, length);
//	show_arr(arr3, length);
//	return 0;
//}

//#define ROW 3
//#define COL 5
//

//
//void Double_value(int x[][COL], int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			*(*(x + i) + j) *= 2;
//		}
//	}
//}
//
//int main()
//{
//	int arr[ROW][COL] =
//	{
//		{1,2,3,4,5},
//		{6,7,8,9,10},
//		{11,12,13,14,15},
//	};
//
//	Show_arr_2D(arr, ROW);
//
//	Double_value(arr, ROW);
//
//	Show_arr_2D(arr, ROW);
//
//	return 0;
//}



//#define ROW 3
//#define COL 5
//
//void Enter_arr_2D(double arr[][COL],int row)
//{
//	printf("Please enter (3*5) numbers:\n");
//
//	for (int i = 0; i < row; i++)
//	{
//		printf("Please enter %d-th row  numbers:", i+1);
//		for (int j = 0; j < COL; j++)
//		{
//			scanf("%lf", (*(arr + i) + j));
//		}
//	}
//
//	putchar('\n');
//}
//
//void Show_arr_2D(const double x[][COL], int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			printf("%-5g", *(*(x + i) + j));
//		}
//		putchar('\n');
//	}
//	putchar('\n');
//}
//
//void Mean_arr_2D(double arr[][COL], int row, double* mean_arr,double* mean)
//{
//	double total_row = 0;
//	double total = 0;
//
//	for (int i = 0; i < row; i++)
//	{
//		total_row = 0;
//		for (int j = 0; j < COL; j++)
//		{
//			total_row += *(*(arr + i) + j);
//			total += *(*(arr + i) + j);
//		}
//		
//		*(mean_arr + i) = total_row / COL;
//	}
//
//	*mean = total / (row * COL);
//}
//
//void Get_max_arr_2D(const double(*arr)[COL], int row, double* max)
//{
//	*max = *(*(arr)); //arr[0][0]
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			if (*max < *(*(arr + i) + j))
//				*max = *(*(arr + i) + j);
//		}
//	}
//
//}
//
//
//void show_arr(const double x[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%-5g ", x[i]);
//	}
//	putchar('\n');
//}
//
//int main()
//{
//	double arr[ROW][COL] = { 0 };
//
//	double mean_arr[ROW] = { 0 };
//	
//	double mean = { 0 };
//	double max = { 0 };
//
//	//input
//	Enter_arr_2D(arr, ROW);
//	
//	//display
//	Show_arr_2D(arr, ROW);
//	
//	//mean of each row
//	Mean_arr_2D(arr, ROW, mean_arr, &mean);
//	printf("the mean of row is : ");
//	show_arr(mean_arr, ROW);
//	
//	//mean of the (3*5)array
//	printf("the mean of array is: %-5g\n", mean);
//
//	//get max of array
//	Get_max_arr_2D(arr, ROW, &max);
//	printf("the max of array is: %-5g\n", max);
//
//	return 0;
//}
//

//#define ROWS 3
//#define COLS 5
//
//void store(int n, double stuff[])
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("Please enter a number for position %d: ", i + 1);
//		scanf("%lf", &stuff[i]);
//	}
//
//
//}
//void showarr2(int rows, double stuff[][COLS])
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//
//			printf("%-5g", *(*(stuff + i) + j));
//		}
//		putchar('\n');
//	}
//
//}
//
//double average(int n, const double stuff[])
//{
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += stuff[i];
//	}
//	return n > 0 ? sum / n : 0.0;
//}
//
//double average2d(int rows, double(*stuff)[COLS])
//{
//	double sum = 0.0;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			sum += *(*(stuff + i) + j);
//		}
//	}
//
//	return sum / (rows * COLS);
//}
//
//double  max2d(int rows, double(*stuff)[COLS])
//{
//	double max = *(*(stuff));
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			max = max > *(*(stuff + i) + j) ? max : *(*(stuff + i) + j);
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	double stuff[ROWS][COLS];
//
//	for (int row = 0; row < ROWS; row++)
//	{
//		printf("Please enter %d numbers for %d row\n", COLS, row + 1);
//		store(COLS, stuff[row]);
//	}
//	printf("Array:\n");
//	showarr2(ROWS, stuff);
//
//	for (int row = 0; row < ROWS; row++)
//	{
//		printf("Average for row %d is %g.\n", row + 1, average(COLS, stuff[row]));
//
//	}
//
//	printf("Average is %g.\n", average2d(ROWS, stuff));
//	printf("Maximum is %g.\n", max2d(ROWS, stuff));
//	printf("Done.\n");
//
//
//
//	return 0;
//}

//*******************2023/10/07 22:03*********************//

//void arr_string(char* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("please enter the %d-th character: ", i + 1);
//
//		scanf("%c", (arr + i));
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//	}
//
//}
//
//void show_string(char* arr, int n)
//{
//	printf("enter the characters below: \n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%c ", *(arr + i));
//	}
//}
//
//int main1()
//{
//	int num;
//	char arr[20];
//	printf("Please enter the character numbers: ");
//	scanf("%d", &num);
//	while (getchar()!='\n')
//	{
//		continue;
//	}
//	arr_string(arr, num);
//	show_string(arr, num);
//	return 0;
//}


//#define LEN 10

//void getnchar(char str[], int n)
//{
//	int i = 0;
//	for ( i = 0; i < n - 1; ++i)
//	{
//		str[i] = getchar();
//		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
//			break;
//	}
//	if (i < n - 1)
//	{
//		str[i] = '\0';
//	}
//	else
//	{
//		str[n - 1] = '\0';
//	}
//}

//void getnchar(char str[], int n)
//{
//	int i = 0;
//	while (i < n - 1)
//	{
//		str[i] = getchar();
//		if (isspace(str[i]))
//		{
//			break;
//		}
//		++i;
//	}
//	str[i] = '\0';
//}
//
///*
//   isspace 若判断字符ch为空空格、制表符或换行符，函数返回非零值，否则返回零值。
//*/
//
//int main()
//{
//	char str[LEN];
//
//	printf("Please enter %d characters:\n", LEN - 1);
//	getnchar(str, LEN);
//	printf("Result:\n");
//	puts(str);
//	printf("Done.\n");
//
//	return 0;
//}



//*******************2023/10/09 8:57*********************//

//string.c----使用字符串与用户交互
//#define MSG "You must have many talents.Tell me some."    //一个字符串常量
//
//#define LIM 5
//#define LINELEN 81  //最大字符串长度+1
//
//int main()
//{
//	char name[LINELEN];
//	char talents[LINELEN];
//	int i;
//	const char m1[40] = "Limits yourself to one line's worth.";   //初始化一个大小已经确定的char 数组
//	const char m2[] = "If you can't think of anything,fake it.";  //让编译七计算数组的大小
//	const char* m3 = "\nEnough about me - what's a your name?";
//	const char* mytal[LIM] = { "Adding numbers swiftly",          //初始化一个字符串指针数组,数组存放的是指针元素，指针指向char类型字符串
//								"Multiplying accurately","Stashing data",//*mytal[0]=='A', *mytal[1]=='M',
//								"Following instructions to the letter",
//								"Understanding the C language" };
//
//	printf("Hi! I'm Clyde the computer. I have many talents.\n");
//	printf("Let me tell you some of them.\n");
//	puts("what were they? Ah,yes,here's a partial list.");
//	for (i = 0; i < LIM; i++)
//	{
//		//puts(mytal[i]);   //打印计算机功能的列表
//		puts(*(mytal + i));   //打印计算机功能的列表
//	}
//
//	puts(m3);
//	gets_s(name);
//	
//	printf("Well,%s,%s\n", name, MSG);
//	printf("%s\n%s\n", m1, m2);
//
//	gets_s(talents);
//
//	puts("Let's a see if I've got that list:");
//
//	puts(talents);
//
//	printf("Thanks for the information,%s.\n", name);
//
//	return 0;
//
//}

//int main()
//{
//	const char* mesq = "Don't be a fool";
//	const char* copy;
//
//	copy = mesq;
//
//	printf("%s\n", copy);
//	printf("mesq =%s;&mesq=%p;value=%p\n", mesq, &mesq, mesq);
//	printf("copy =%s;&copy=%p;value=%p\n", copy, &copy, copy);
//
//
//	return 0;
//}



//*******************2023/10/10 20:57*********************//
//int main()
//{
//	char name1[11], name2[11];
//	int count;
//
//	printf("Please enter 2 names.\n");
//	count = scanf("%5s %10s", name1, name2);
//	printf("I read the %d names %s and %s.\n", count, name1, name2);
//
//	return 0;
//}

/* put_out.c -- 使用puts()*/
//#dKefine DEF "I am a #define string."
//int main()
//{
//	char str1[80] = "An array was initialized to me.";
//	const char* str2 = "A pointer was initialized to me.";
//
//	puts("I'm an argument to puts().");
//	puts(DEF);
//	puts(str1);
//	puts(str2);
//	puts(&str1[5]);
//	puts(str2 + 4);
//
//	return 0;
//}

//int main()
//{
//	char side_a[] = 'SIDE A';
//	char dont[] = { 'w','D','W','!' };
//	char side_b[] = 'SIDE B';
//
//	puts(dont); /* dont 不是一个字符串 */
//
//	return 0;
//}


// put1.c -- 不添加换行符打印一个字符串‘
//void put1(const char* string) /*不会改变这个字符串*/
//{
//
//	//当string指向空字符时，*string 的值为0，
//	//while(*string)
//	while (*string!='\0')
//	{
//		putchar(*string++);
//	}
//}
//
///* put2.c -- 打印一个字符串，并统计其中的字符个数 */
//int put2(const char* string)
//{
//	int count = 0;
//	while (*string)
//	{
//		putchar(*string++);
//		count++;
//	}
//	putchar('\n');
//	return(count);
//}
//
//int main()
//{
//	put1("If I'd as much money");
//	put1(" as I could spend,\n");
//
//	printf("I cound %d characters.\n", put2("I never would cry old chairs to mend."));
//
//	return 0;
//}

//int main()
//{
//	char str[20] = {0};  
//	char name[20] = {0};
//
//	fgets(str, 20, stdin);
//	int i = 0;
//	while (*str != '\n' && *str != '\0' && *str != ' ')
//	{
//		 name[i]= *(str+i);
//		 i++;
//	}
//	fputs(name,stdout);
//
//	return 0;
//}


//#define LEN 10
//
//char* getword(char* str,int len)
//{
//	int ch;
//	int n = 0;
//	char* pt = str;
//
//
//	
//	while ((ch = getchar()) != EOF && isspace(ch))  //当从标准输入文件中获取字符不是EOF 且 是空白、制表符或换行符时，
//	{						// 当字符为空白、制表符或换行符时，isspace 返回非0值
//		continue;			// 执行循环体
//	//跳过第一个空白前面的所有字符
//	}
//
//	if (ch == EOF)    // 不执行循环体后，如果获取字符是EOF时 
//	{
//		return NULL;
//		//↑若第一次直接输入Ctrl+Z(Windows)或Ctrl+D(Unix/Linux/Mac os)则返回空指针;
//	}
//	else              // 如何获取字符不是EOF 且 不是 空白、制表符或换行符时
//	{
//		n++;          
//		*str++ = ch;  // 将该字符赋给str指针  
//	    /*↑把第一个非空白字符赋值给str
//		所指向的内存空间内并指向下一个
//		存储空间;*/
//	}
//	
//	while ((ch=getchar())!=EOF&&!isspace(ch)&&(n<len))  //当读取字符不是 空白、制表符或换行符时且长度小于LEN-1
//	{
//		*str++ = ch;
//		/*↑从第2个字符开始赋值直到
//           遇见单词后面第一个空白符;*/
//		n++;
//	}
//	*str = '\0';  //给该字符串赋个结尾符号'\0'
//
//	if (ch == EOF) //该字符是文件末尾标志时
//	{
//		return NULL;
//		/*↑输入Ctrl+Z(Windows)或Ctrl+D(Unix/Linux/Mac os)返回空指针;*/
//	}
//	else
//	{
//		while ((getchar())!='\n')
//		{
//			continue;   //将后面的字符都丢掉
//			//↑从单词后面丢弃输入行中的其它字符;
//		}
//		return pt;
//
//	}
//
//}
//
//int main(int argc,char *argv[])
//{
//	char input[LEN];
//
//	printf("Please enter a word (EOF to quit):\n");
//
//	while (getword(input,LEN-1) != NULL)
//	{
//		printf("Result:\n");
//		puts(input);
//		printf("You can enter a word again (EOF to quit):\n");
//	}
//
//	printf("Done.\n");
//	return 0;
//}


//*******************2023/10/11 22:27*********************//
/*
设计一个函数
1.搜索第1个函数形参指定的字符串
2.在其中查找第二个函数形参指定的字符 首次出现的位置
3.返回该字符的指针 （如果未找到，返回空指针）
*/

//const char* strchr_self(const char* str, char c)
//{
//	if (str == NULL)
//		return NULL;
//	do
//	{
//		if (*str++ == c)
//			break;
//	} while (*str);     //字符串结尾'\0'
//
//	if (*str)
//		return str;//找到了
//	else
//	{
//		return NULL;//没找到
//	}
//}
//
//int main()
//{
//	const char* ptr;
//	const char* str = "isdanfds dgqssaax";
//	printf("%s\n", str);
//	printf("q location?\n");
//	ptr=strchr_self(str, 'q');
//
//	fputs("需要查找字符字符位置为：", stdout);
//	printf("%d\n", ptr - str );
//
//}

//#define LEN 20
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);  // 从标准输入文件中获取字符串，并保留了'\n'
//
//	if (ret_val)
//	{
//		find = strchr(st, '\n');    // 然会'\n'的地址，并给它赋值为字符串结束标志'\0'
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar()!='\n')  
//			{
//				continue;  // 后面输入行中的其它字符;？？？？？？
//			}
//		}
//	}
//	return ret_val;
//}
//
//char* mystrchr(char* str, char ch)
//{
//	while (*str)
//	{
//		if (*str == ch)
//		{
//			return str;
//		}
//		++str;
//	}
//
//	return NULL;
//}
//
//int main()
//{
//	char ch, str[LEN];
//	printf("Please enter a string (EOF to quit):\n");
//
//	while (s_gets(str,LEN)!=NULL)
//	{
//		printf("Please enter a charater:");
//		ch = getchar();
//		while (getchar()!='\n')
//		{
//			continue;
//		}
//
//		printf("String:\n");
//		puts(str);
//
//		if (mystrchr(str, ch) == NULL)
//		{
//			printf("Not exist %c in the section.\n", ch);
//		}
//		else
//		{
//			printf("Exist %c in the string.\n", ch);
//		}
//		printf("You can enter a string (EOF to quit):\n");
//
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}


//*******************2023/10/12 20:33*********************//
//编写 is_within()函数
// 参数：接受一个字符 和 一个指向字符串的指针
// if指定字符在字符串中，返回非零值 ，else 返回 0
// 循环给函数提供输入值
//


//#define LEN 20
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);  // 从标准输入文件中获取字符串，并保留了'\n'
//
//	if (ret_val)
//	{
//		find = strchr(st, '\n');    // 然会'\n'的地址，并给它赋值为字符串结束标志'\0'
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar()!='\n')  
//			{
//				continue;  // 后面输入行中的其它字符;？？？？？？
//			}
//		}
//	}
//	return ret_val;
//}
//
//int is_within(char* str, char ch)
//{
//	while (*str)
//	{
//		if (*str == ch)
//		{
//			return 1;
//		}
//		++str;
//	}
//
//	return 0;
//}
//
//
//int main1()
//{
//	char ch, str[LEN];
//	printf("Please enter a string (EOF to quit):\n");
//	
//	while (s_gets(str, LEN) != NULL)
//	{
//
//		printf("Please enter a charater:");
//		
//		ch = getchar();
//		
//		while (getchar()!='\n')
//		{
//			continue;
//		}
//
//		printf("String:-> ");
//
//		puts(str);
//
//		if (!is_within(str, ch))
//		{
//			printf("Not exist %c in the section.\n", ch);
//		}
//		else
//		{
//			printf("Exist %c in the string.\n", ch);
//		}
//		printf("You can enter a string (EOF to quit):\n");
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//
//// 编写strncpy(s1,s2,n)函数
//// 把s2中的n个字符拷贝至s1中，截断s2，或者有必要的话在末尾添加 空字符
//// if length(s2)>=n s1不能以空字符结尾
//// 
//// strncpy
//char* mystrcpy(char* dest,const char* src, int n)
//{
//	char* ptr = dest;
//
//	do
//	{
//		*dest++ = *src++;
//	} while ((dest - ptr)<n);
//
//	return ptr;
//
//}
//
//int main2()
//{
//	char str[LEN];
//	char dest[LEN];
//	char* ptr;
//
//	int n;
//	printf("Please enter a string (EOF to quit):\n");
//
//	while (s_gets(str,LEN)!=NULL)
//	{
//		printf("Please enter a copy numbers:");
//		scanf("%d", &n);
//
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//
//		printf("src:-> ");
//		puts(str);
//
//		memset(dest, '\0', sizeof(dest));
//		ptr = mystrcpy(dest, str, n);
//
//		printf("dest:-> ");
//		puts(ptr);
//
//		printf("You can enter a string (EOF to quit):\n");
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}
//
//
//void eatline()
//{
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//
//	return;
//}
//
//char* mystrncpy2(char* dest, char* src, int n)
//{
//	int count = 0;
//	while (*src!='\0'&&count<n)
//	{
//		*(dest + count) = *src++; //源字符串不为空且长度小于n时的复制
//		count++;
//	}
//	*(dest + count) = '\0';  //保证字符串有效
//	
//	return dest;
//}
//
//char* s_gets2(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);
//
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			eatline();
//		}
//	}
//	return ret_val;
//}
//
//int main()
//{
//	int len;
//	char target[LEN];
//	char source[LEN];
//
//	printf("Please enter a string (EOF to quit):\n");
//
//	while (s_gets2(source, LEN) != NULL)
//	{
//		printf("Please enter a number for copy(>0): ");
//
//		while (scanf("%d", &len)!=1||len<=0)
//		{
//			eatline();
//			printf("Please enter again: ");
//		}
//
//		eatline();
//
//		printf("Source string: %s\n", source);
//		printf("Target string: %s\n", mystrncpy2(target,source,len));
//
//		printf("You can enter a string again (EOF to quit):\n");
//
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}

//*******************2023/10/13 23:25*********************//
//编写 string_in()函数
//参数是 两个指向字符串的指针
// if 第二个字符串 中 包含第一个字符串，该函数返回 第一个字符串开始的地址
// 否则返回 NULL
// 循环给函数输入输入值
//

//#define LEN 20
//
//char* string_in(char* str1, char* str2)
//{
//	int i = 0; //主串移动标志位
//	int j = 0; //子串移动标志位 
//
//	while (*(str1 + i)!='\0'&& *(str2 + j) != '\0')
//	{
//		if (*(str1 + i) == *(str2 + j))
//		{
//			i++;
//			j++;
//		}
//
//		else
//		{
//			i = i - j + 1;
//			j = 0;
//		}
//
//	}
//
//	if (j)
//	{
//		return str1 + i - j;  //找到了
//	}
//
//	else
//	{
//		return  NULL; //找不到
//	}
//
//}
//
//char* string_in(char* str, char* pt)
//{
//	int i = 0, j = 0;
//	int str_len = strlen(str), pt_len = strlen(pt);
//
//	while (i < str_len && j < pt_len)
//	{
//		if (str[i] == pt[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//	return j == pt_len ? str + i - j : NULL;
//}
//
//char* s_gets(char* str, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(str, n, stdin); //fgets函数会读取 标准输入文件中'\n'
//
//	if (ret_val)
//	{
//		find = strchr(str, '\n'); 
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar()!='\n')
//			{
//				continue; //丢弃 输入行的其余字符
//			}
//		}
//	}
//	return ret_val;
//}
//
//int main1()
//{
//	char str1[LEN];
//	char str2[LEN];
//	char* ptr;
//
//	printf("Please enter the first string(20以内) (EOF to quit):\n");
//	while (s_gets(str1, LEN) != NULL)
//	{
//		printf("Please enter the second string(10以内) (EOF to quit):\n");
//		
//		if (s_gets(str2, LEN) == NULL)
//		{
//			break;
//		}
//
//		ptr = string_in(str1, str2);
//
//		printf("str1:-> ");
//		puts(str1);
//		printf("str2:-> ");
//		puts(str2);
//
//		if (ptr == NULL)
//		{
//			printf("未找到\n");
//		}
//		else
//		{
//			printf("str2 在 str1中的位置是：%d \n", ptr - str1 + 1);
//		}
//
//		printf("Please enter the first string again (EOF to quit) :\n");
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}
//
//
//#define LEN 10
//
//char* s_gets(char* st, int n);
//char* string_in(char* str, char* pt);
//
//int main(int argc, char* argv[])
//{
//	char str1[LEN];
//	char str2[LEN];
//
//	printf("Please enter the first string (EOF to quit):\n");
//	while (s_gets(str1, LEN) != NULL)
//	{
//		printf("Please enter the second string:\n");
//		if (s_gets(str2, LEN) != NULL)
//		{
//			const char* temp = string_in(str1, str2);
//			if (temp != NULL)
//			{
//				printf("String %s exists in string %s\n", str2, temp);
//			}
//			else
//			{
//				printf("String %s doesn't exist in string %s\n", str2, str1);
//			}
//		}
//		printf("You can enter again (EOF to quit):\n");
//	}
//	printf("Done.\n");
//
//	return 0;
//}

// 编写一个函数
// 把字符串的内容 顺序取反 代替
// 使用一个循环给函数提供输入值
//

//#define LEN 20
//void myreverse(char* str)
//{
//	
//
//	int n = strlen(str);
//	char temp;
//
//	//char* ptr = str;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	*(ptr + n - i - 1) = *(str + i);
//
//	//}
//
//
//	for (int i = 0; i < n/2; i++)
//	{
//		temp = str[n - i - 1];
//		str[n - i - 1] = str[i];
//		str[i] = temp;
//	}
//	str[n] = '\0';
//
//	
//}
//
//
//char* s_gets(char* str, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(str, n, stdin);
//	
//	if (ret_val)
//	{
//		find = strchr(str, '\n');
//
//		if ( find )
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar()!='\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//
//}
//
//int main()
//{
//	char str[LEN];
//	char* ptr;
//
//	printf("Please enter the string(EOF to quit): \n");
//
//	while (s_gets(str, LEN) != NULL)
//	{
//		printf("before reverse:-> ");
//		puts(str);
//
//		myreverse(str);
//		
//		printf("after reverse:-> ");
//		puts(str);
//
//		printf("Please enter the string again (EOF to quit): \n");
//
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}


// 编写一个函数
// 参数：字符串
// 作用：删除字符串中的空格
// 循环输入
//#define LEN 20
//
//void mydelspace(const char* str,char* ptr)
//{
//	int n = strlen(str);
//	for (int i = 0; i < n; i++)
//	{
//		if (!isspace(*(str + i)))
//		{
//			*ptr++=*(str + i);
//		}
//		*ptr = '\0';
//	}
//}
//
//void cancel(char* str)
//{
//	int j = 0;
//	int n = strlen(str);
//
//	for (int i = 0; i < n; i++)
//	{
//		if (str[i] != ' ')
//		{
//			str[j++] = str[i];
//		}
//		
//	}
//	str[j] = '\0';
//}
//
//int main()
//{
//	char str[LEN];
//	char ptr[LEN];
//	printf("Please enter the string(EOF to quit): \n");
//
//	while (s_gets(str, LEN) != NULL&&str[0]!='\0')
//	{
//		printf("before reverse:-> ");
//		puts(str);
//
//		//mydelspace(str,ptr);
//		
//		cancel(str);
//
//		printf("after reverse:-> ");
//		//puts(ptr);
//		puts(str);
//
//		printf("Please enter the string again (EOF to quit): \n");
//
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}



//*******************2023/10/15 23:11*********************//
// 编写一个函数
// 读入10个字符串 或者 读到EOF时停止
// 提供5个选项菜单：
// 1.打印源字符串列表 2.以ASCII中的顺序打印字符串
// 3.按长度递增顺序打印字符串 4.按字符串中第一个单词的长度打印字符串
// 5.退出
// 菜单可以循环显示 除非用户选择退出选项 


//#define MAX 10
//#define LEN 20
//void Show_menu1015()
//{
//	printf("***********菜  单**********\n");
//	printf("1.打印源字符串列表\n");
//	printf("2.以ASCII中的顺序打印字符串\n");
//	printf("3.按长度递增顺序打印字符串\n");
//	printf("4.按字符串中第一个单词的长度打印字符串\n");
//	printf("5.退出\n");
//}

//char* s_gets(char*str, int n)
//{
//	char* ret_val;
//	char* find;
//	ret_val = fgets(str, n, stdin);
//
//	if (ret_val)
//	{
//		find = strchr(str, '\n');
//
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar()!='\n')
//			{
//				continue;
//			}
//		}
//	}
//	
//	return ret_val;
//}
//
//void print1016(char* str,int j)
//{
//		printf("the %d-th string : ",j+1);
//		puts(str);
//}
//
//int main()
//{
//	
//	char* str[MAX];
//	int i = 0;
//	//读入10个字符串 或者 读到EOF时停止
//
//	Show_menu1015();
//	while (i<MAX)
//	{
//		printf("Please enter the %d-th string-> ", i+1);
//
//		if (s_gets((*(str + i)), LEN) == NULL)
//			break;
//
//		i++;
//	}
//	//打印
//	for (int j = 0; j < i; j++)
//	{
//		print1016(*(str + j),j);
//	}
//	return 0;
//}



//#define ROWS 10
//#define COLUMNS 10
//
//char* s_gets(char* str, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(str, n, stdin);
//
//	if (ret_val)
//	{
//		find = strchr(str, '\n');
//
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//
//	return ret_val;
//}
//
//
//int get_strings(char (*string)[COLUMNS], char** str, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//if (s_gets(string[i], COLUMNS) != NULL)
//		//{
//		//	str[i]=string[i];
//		//	//*(str + i) = *(string + i);  //   **********************
//		//}
//		if (s_gets((*(string + i)), COLUMNS) != NULL)
//		{
//			*(str + i) = *(string + i);  //   **********************
//		}
//		else
//		{
//			break;
//		}
//	}
//	return i;
//
//}
//
//int get_first()
//{
//	int ch;
//
//	do
//	{
//		ch = towlower(getchar());
//	} while (isspace(ch));
//
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//
//	return ch;
//}
//
//int show_menu1016()
//{
//	int ch;
//	int n;
//	printf("+---------------------------------------------------------------------+\n");
//	printf("|a) 打印源字符串列表                b) 以ASCII中的顺序打印字符串          |\n");
//	printf("|c) 按长度递增顺序打印字符串         d) 按字符串中第一个单词的长度打印字符串|\n");
//	printf("|q) 退出                                                              |\n");
//	printf("+---------------------------------------------------------------------+\n");
//	
//	printf("Please you choose: ");
//
//	ch = get_first();
//	while (ch < 'a' || ch>'d' && ch != 'q')
//	{
//		printf("Please enter a, b, c, d or q: ");
//		ch = get_first();
//	}
//	
//
//
//	//***********有问题************
//	//while ((n=scanf("%c", &ch)) != 1 || ch < 'a' ||(ch > 'd' && ch != 'q'))
//	//{
//	//	printf("Please enter a, b, c, d or q: ");
//	//	while (getchar()!='\n')
//	//	{
//	//		continue;
//	//	}
//	//}
//	
//	return ch;
//}
//
////a) 打印源字符串列表
//void origin_output(char (* str)[COLUMNS],int n)
//{
//	printf("Source string:\n", n);
//
//	for (int i = 0; i < n; i++)
//	{
//		puts(*(str + i));
//	}
//
//	putchar('\n');
//}
//
//
////b) 以ASCII中的顺序打印字符串
//void ascall_output(char** str, int n)
//{
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (strcmp(str[i], str[j]) > 0)
//			{
//				//两个位置替换一下
//				char* temp = *(str + i);  
//				str[i] = str[j];		  
//				*(str + j) = temp;
//			}
//
//		}
//	}
//
//	printf("Print source string for ASCII: \n", n);
//
//	for (int i = 0; i < n; i++)
//	{
//		puts(*(str + i));
//	}
//
//	putchar('\n');
//}
//
////c) 按长度递增顺序打印字符串
//void length_up_output(char** str, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (strlen(str[i]) > strlen(str[j]))
//			{
//				char* temp = str[i];  
//				*(str + i) = *(str + j);
//				*(str + j) = temp;
//			}
//
//		}
//	}
//
//	printf("Print source strings for length:\n");
//	for (int i = 0; i < n; i++)
//	{
//		puts(str[i]);
//	}
//	putchar('\n');
//}
//
//int word(char* str)
//{
//	int length = 0;
//	bool inword = false;
//
//	/*统计字符串第一个非空白字符的单词长度
//	并作为欸返回值传递给调用函数；*/
//
//	while (*str)
//	{
//		//单词首
//		if (isspace(*str) && !inword)
//		{
//			/*从第一个非空白字符开始统计单词长度*/
//			inword = true;
//			length++;
//		}
//
//		//单词中
//		else if (!isspace(*str) && inword)
//		{
//			length++;
//		}
//
//		//单词尾
//		else if (isspace(*str) && inword)
//		{
//			/*若遇到第一个单词后的空白符
//			则退出循环*/
//			break;
//		}
//
//		str++;
//
//	}
//
//	return length;
//
//}
//
////d) 按字符串中第一个单词的长度打印字符串
//void first_word_output(char** str, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (word(str[i]) > word(str[j]))
//			{
//				char* temp = str[i];
//				str[i] = str[j];
//				str[j] = temp;
//			}
//		}
//	}
//
//	printf("Print source string for the first word:\n", n);
//	for (int i = 0; i < n; i++)
//	{
//		puts(str[i]);
//	}
//
//	putchar('\n');
//}
//
//
//int main()
//{
//	int n, choice;
//	char* str[ROWS];				// 字符串指针数组
//	char strings[ROWS][COLUMNS];	// 二维数组
//
//	printf("Please enter %d string (EOF to quit): \n", ROWS);
//
//	if ((n = get_strings(strings, str, ROWS)) != 0)
//	{
//		while ((choice = show_menu1016())!='q')
//		{
//			switch (choice)
//			{
//			case 'a':
//			{
//				origin_output(strings, n);
//				break;
//			}
//			case 'b':
//			{
//				ascall_output(str, n);
//				break;
//			}
//			
//			case 'c':
//			{
//				length_up_output(str, n);
//				break;
//			}
//			
//			case 'd':
//			{
//				first_word_output(str, n);
//				break;
//			}
//
//			default:
//				break;
//			}
//
//		}
//
//	}
//	printf("Done.\n");
//	return 0;
//}


//***************2023/10/17 14:08********************
// 编写一个函数
// 读取输入；直到读取EOF，
// 报告读入的 单词数、大写字母数、小写字母数、标点符号数、数字字符数 

//int main(int argc, char* argv[])
//{
//	int ch, lower, upper, digit;
//	int punct, words;
//	lower = upper = digit = 0;
//	punct = words = 0;
//	bool inword = false;
//
//	printf("Please enter some characters(EOF to quit):\n");
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))			// islower()---小写字母 返回为真 
//		{
//			lower++;
//		}
//		else if (isupper(ch))		// isupper(ch)--大写字母 返回为真
//		{
//			upper++;
//		}
//		else if (isdigit(ch))       // 检查参数ch是否为阿拉伯数字0到9,是返回为 真
//		{
//			digit++;
//		}
//		else if (ispunct(ch))       // ch是一个标点符号字符，则该函数返回 真
//		{
//			punct++;
//		}
//		// 检查参数c是否为空格字符，也就是判断是否为空格(' ')、定位字符('\t')、CR('\r')、换行('\n')、垂直定位字符('\v')或翻页('\f')的情况
//		// 若是，则isspace()函数返回真
//		if (!isspace(ch) && !inword) 
//		{
//			inword = true;
//			words++;
//		}
//
//		if (isspace(ch) && inword)
//		{
//			inword = false;
//		}
//
//	}
//
//	printf("Words:%d\n", words);
//	printf("Lower:%d\n", lower);
//	printf("Upper:%d\n", upper);
//	printf("Digit:%d\n", digit);
//	printf("Punct:%d\n", punct);
//
//	return 0;
//}

// 编写程序
// 反序 显示命令行参数的单词
// see you later---later you see

//int main(int argc, char* argv[])
//{
//	if (argc < 2)
//	{
//		printf("Usage:%s words\n", argv[0]);
//	}
//	else
//	{
//		printf("Worlds:\n");
//		for (int i = 1; i < argc; i++)
//		{
//			printf("%s ", argv[i]);
//		}
//		printf("\nReversing printing is:\n");
//		for (int i = argc - 1; i > 0; i--)
//		{
//			printf("%s ", argv[i]);
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}


// 编写一个 通过 命令行运行的 程序计算幂
// 第一个参数：是double类型的参数，作为 底
// 第二个参数：整数，作为 幂的指数
//#include <stdlib.h>
//// argc 统计命令行输入多个字符串(以空白符分隔) argv存放命令行输入argc个字符串的地址
//int main(int argc, char* argv[])
//{
//	int exp1 = 0;
//	double num, sum = 1.0;
//
//	if (argc != 3)
//	{
//		printf("Usage: %s floating-point exp\n", argv[0]);
//	}
//	else
//	{
//		num = atof(argv[1]), exp1 = atoi(argv[2]);
//		for (int i = 1; i <= exp1; i++)
//		{
//			sum *= num;
//		}
//		printf("%g^%d is %g.\n", num, exp1, sum);
//	}
//
//	return 0;
//}


// 使用字符分类函数 实现 atoi()函数
// 如果输入的字符串不是纯数字，返回0

//#define LEN 10
//
//char* s_gets(char* str, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(str, n, stdin);
//
//	if (ret_val)
//	{
//		find = strchr(str, '\n');
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//
//		}
//	}
//
//	return ret_val;
//}
//
//int myatoi(char* str)
//{
//	int n = 0, len = strlen(str);
//
//	for (int i = 0; i < len; i++)
//	{
//		if (!isdigit(str[i]))
//		{
//			return 0;
//		}
//		n = n * 10 + (str[i] - '0');
//	}
//	return n;
//}
//
//int main()
//{
//	char str[LEN];
//
//	printf("Please enter a string (EOF to quit):\n");
//
//	while (s_gets(str, LEN) != NULL)
//	{
//		printf("String %s convert number %d\n", str, myatoi(str));
//		printf("Please enter a string again (EOF to quit):\n");
//	}
//	printf("Done.\n");
//
//	return 0;
//}


//编写一个程序读取输入：直至读取文件结尾，
// 打印字符串
// 该程序识别和实现下面命令行参数：
// -p 按原样打印
// -u 把输入全部转换为大写
// -l 把输入全部转换成小写
// if no 命令行参数，则让程序实现 -p 运行
//

//int main(int argc,char* argv[])
//{
//	int ch;
//	int flag = 1;
//	char mode = 'p';
//
//	if (argc > 2)
//	{
//		printf("Usage %s [-p | -u -l]\n", argv[0]);
//		flag = 0;
//	}
//	else if(argc==2)
//	{
//		if (argv[1][0] != '-')
//		{
//			printf("Usage:%s [-p|-u|-l]\n", argv[0]);
//			flag = 0;
//		}
//		else
//		{
//			switch (argv[1][1])
//			{
//			case 'p':
//			case 'u':
//			case 'l':
//			{
//				mode = argv[1][1];
//				break;
//			}
//			default:
//			{
//				printf("The argumen isn't p,u or l,the program start to run with -p way.\n");
//			}
//			}
//		}
//
//	}
//	if (flag)
//	{
//		printf("Please enter some characters(EOF to quit):\n");
//		while ((ch=getchar())!=EOF)
//		{
//			switch (mode)
//			{
//				case 'p':
//				{
//					putchar(ch);
//					break;
//				}
//				case 'u':
//				{
//					putchar(toupper(ch));
//					break;
//				}
//				case 'l':
//				{
//					putchar(tolower(ch));
//					break;
//				}
//
//			}
//
//		}
//
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}

///* global.c -- 使用外部变量 */
//int units = 0;  /*一个外部变量*/
//void critic();
//int main()
//{
//	extern int units; /*可选的二次声明*/
//
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//	while (units != 56)
//	{
//		critic();
//	}
//
//	printf("You must have looked it up!\n");
//
//	return 0;
//}
//
//void critic()
//{
//	/*这里省略了可选的二次声明*/
//	printf("No luck,chummy.Try again.\n");
//	scanf("%d", &units);
//}


//void critic(int* units);
//
//int main()
//{
//	int units;
//
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//
//	while (units != 56)
//	{
//		critic(&units);
//	}
//	printf("You must have looked it up!\n");
//
//	return 0;
//}
//
//void critic(int* units)
//{
//	printf("No luck,my friend. Try again.\n");
//	scanf("%d", units);
//	return;
//}


// 美国--英里/加仑、欧洲--什/100公里来计算
// 提示用户选择计算模式（美制或公制） 接收数据并计算油耗 
// pel2-2b.c
// 与pel2-2a.c一起编译
// 

//void set_mode(int* mode, int* n)
//{
//	if (*mode > 1)
//	{
//		printf("Invalid mode specified. Mode %s used.\n", (0 == *n) ? "0(metric)" : "1(US)");
//	}
//	else
//	{
//		*n = *mode;
//	}
//
//	return;
//
//}
//
//void get_info(int mode, double* range, double* fuel)
//{
//	if (0 == mode)
//	{
//		printf("Enter distance traveled in kilometers: ");
//	}
//	else
//	{
//		printf("Enter distance traveled in miles: ");
//	}
//	scanf("%lf", range);
//
//	if (0 == mode)
//	{
//		printf("Enter fuel consumed in liters: ");
//	}
//	else
//	{
//		printf("Enter fuel consumed in gallons: ");
//	}
//	scanf("%lf", fuel);
//
//	return;
//}
//
//void show_info(int mode, double range, double fuel)
//{
//	if (0 == mode)
//	{
//		printf("Fuel consumption is %.2lf liters per 100 km.\n",
//			(fuel / range) * 100);
//	}
//	else
//	{
//		printf("Fuel consumption is %.1lf miles per gallon.\n",
//			range / fuel);
//	}
//	return;
//}

//int main(void)
//{
//	int mode, temp;
//	double range, fuel;
//
//	printf("Enter 0 for metric mode,1 for US mode: ");
//	scanf("%d", &mode);

//	temp = mode;

//	while (mode >= 0)
//	{
//		set_mode(&mode, &temp);
//		get_info(temp, &range, &fuel);
//		show_info(temp,range,fuel);

//		printf("Enter 0 for metric mode,1 for US mode");
//		printf("(-1 to quit): ");
//		scanf("%d", &mode);
//	}
//	printf("Done.\n");
//	return 0;
//}

//#include <stdio.h>
//
//static int count = 0;
//
//int counter(void);
//
//int main(void)
//{
//    int i, j, k;
//    printf("Please enter a integer: ");
//    scanf("%d", &i);
//
//    for (j = 1; j <= i; j++)
//    {
//        printf("count = %d\n", counter());
//    }
//    printf("The function called %d times.\n", count);
//
//    return 0;
//}
//
//int counter(void)
//{
//    return ++count;
//}

//***************2023/10/13 8:08********************
//编写一个程序 生成100个 1-10随机数
// 以降序排列
//

//#define LEN 100
//
//void sort(int a[], int n);
//void show_array(const int a[], int n);
//
//int main()
//{
//	int i, a[LEN];
//	srand((unsigned int)time(0));
//	for (i = 0; i < LEN; i++)
//	{
//		a[i] = rand() % 10 + 1;
//	}
//	printf("Array :\n");
//	show_array(a, LEN);
//	sort(a, LEN);
//	printf("After sorting:\n");
//	show_array(a, LEN);
//
//	return 0;
//}
//
//void sort(int a[], int n)
//{
//	int i, j, t;
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[i] < a[j])
//			{
//				t = a[j];
//				a[j] = a[i];
//				a[i] = t;
//			}
//		}
//	}
//
//	return;
//}
//
//void show_array(const int a[], int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%-3d ", a[i]);
//		if (0 == (i + 1) % 10)
//		{
//			putchar('\n');
//		}
//	}
//
//	putchar('\n');
//	return;
//}


// 生成1000个1-10范围内的随机数
// no save no print only print the times of each rand number
// 用十个不同的种子运行 生成的数字出现的次数是否相同？
// 使用本章自定义的函数或ANSIC的rand()或srand()函数
//

//#define N 10
//#define LEN 1000
//
//int main()
//{
//	int i, temp, a[N + 1];
//	unsigned int seeds;
//
//	for (seeds = 1; seeds < N; seeds++)
//	{
//		printf("Time #%d: \n", seeds);
//		srand(seeds);
//		//初始化 用来存放保存1-10 出现的次数，
//		for (i = 0; i < N; i++)
//		{
//			a[i] = 0;
//		}
//		//数组下标就对应该下标存放的1-10内的随机数
//		//相同则累加次数
//		for (i = 0; i < LEN; i++)
//		{
//			temp = rand() % 10 + 1;
//			a[temp]++;
//		}
//
//		for (i = 1; i < N + 1; i++)
//		{
//			//打印该数出现的次数
//			printf("%-3d appeared %d times\n", i, a[i]);
//		}
//
//		printf("Total random numbers:%d\n\n", LEN);
//
//	}
//
//	return 0;
//}


//int rollem(int sides);
//
//int main()
//{
//	int dice, count, roll;
//	int sides;
//	int set, sets;
//
//	srand((unsigned int)time(0));
//	printf("Enter the number of sets.\nEnter q to stop: ");
//	while (scanf("%d", &sets) == 1)
//	{
//		printf("How many sides and how many dice?\n");
//		printf("Please two integer: ");
//		if (scanf("%d %d", &sides, &dice) != 2)
//		{
//			puts("Not integers--terminating input loop.");
//			break;
//		}
//		printf("Here are %d sets of %d %d-sided throw.\n",sets,dice,sides);
//		for (set = 0; set < sets; set++)
//		{
//			for (roll = 0, count = 0; count < dice; count++)
//			{
//				roll += rollem(sides);
//			}
//			printf("%-3d", roll);
//
//			if (0 == (set + 1) % 8);
//			{
//				putchar('\n');
//			}
//		}
//		printf("\nHow many sets?Enter q to stop: ");
//	}
//	puts("GOOD FORTUNE TO YOU!\n");
//
//	return 0;
//}
//
//int rollem(int sides)
//{
//	return rand() % sides + 1;
//}

//下面是程序的一部分
//pe12-8.c
//int* make_array(int elem, int val)
//{
//	int* arr = (int*)malloc(sizeof(int) * elem);
//	if (arr == NULL)
//	{
//		printf("Memory allocation failed\n");
//		exit(EXIT_FAILURE);
//	}
//	printf("Output %d numbers:\n", val);
//
//	for (int i = 0; i < elem; i++)
//	{
//		arr[i] = val;
//		//*(arr + i) = val;
//	}
//
//	return arr;
//}
//void show_array(const int ar[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		//if (i && !(i % 8))
//		//{
//		//	putchar('\n');
//		//}
//		printf("%d ", *(ar + i));
//		if (((i + 1) % 8) == 0)
//		{
//			putchar('\n');
//		}
//	}
//	putchar('\n');
//}
//
//int main()
//{
//	int* pa;
//	int size;
//	int value;
//
//	printf("Enter the number of elements: ");
//	while (scanf("%d", &size) == 1 && size > 0)
//	{
//		printf("Enter the initilization value: ");
//		scanf("%d", &value);
//		pa = make_array(size, value);
//		if (pa)
//		{
//			show_array(pa, size);
//			free(pa);
//		}
//
//		printf("Enter the number of elements(<1 to quit):");
//	}
//	printf("Done.\n");
//	return 0;
//}

// 1.询问用户需要输入多少个单词
// 使用malloc()，创建一个动态数组，
// 每一个数组元素存放的字符串的地址
// 2.接收用户输入的单词并显示
// 读取字符串时，把单词读入到一个临时的char 数组
// 使用malloc()分配足够的存储空间
// 从临时数组中 把单词拷贝到动态分配的存储空间中
// 

//#define LEN 256
//
//int main()
//{
//	int n=0;
//	char** pt;
//	int i = 0; int length = 0;
//	static char temp[LEN];
//
//	printf("How many words do you wish to enter? ");
//	scanf("%d", &n);
//	if ((pt = (char**)malloc(n * sizeof(char*))) != NULL)
//	{
//		printf("Enter %d words now:\n", n);
//		for (i = 0; i < n; i++)
//		{
//			//scanf函数 获取标准输入文件中的字符串 空格的ASCII码值是多少来着？
//			scanf("%255s", temp);
//			length = strlen(temp) + 1;
//			//使用malloc分配足够的存储空间来存储单词;
//			pt[i] = (char*)malloc(length * sizeof(char));
//			
//			if (pt[i] == NULL)
//			{
//				printf("Memory allocation failed!\n");
//				exit(EXIT_FAILURE);
//			}
//			//从临时数组中把单词拷贝到动态分配的存储空间中;
//			strcpy(pt[i], temp);
//		}
//
//		printf("Here are your words:\n");
//		for (i = 0; i < n; i++)
//		{
//			puts(pt[i]);
//			free(pt[i]);
//			pt[i] = NULL;
//
//		}
//		free(pt);
//		pt = NULL;
//
//	}
//	else
//	{
//		printf("Memory allocation failed!\n");
//		exit(EXIT_FAILURE);
//	}
//
//	return 0;
//}

/*hiding.c - 代码块内的变量 */
//int main()
//{
//	int x = 30;  /*初始化*/
//	printf("x in outer block:%d\n", x);
//	{
//		int x = 77; /*新的x,覆盖第一个x*/
//		printf("x in inner block:%d\n", x);
//	}
//	printf("x in outer block:%d\n",x);
//	while (x++<33)
//	{
//		int x = 100; /*新的x,覆盖第一个x*/
//		x++;
//		printf("x in while loop:%d\n", x);
//	}
//	printf(" in outer blook:%d\n", x);
//
//	return 0;
//}

//int main()
//{
//	int n = 10;
//
//	printf("Initially,n=%d\n", n);
//	for (int n = 1; n < 3; n++)
//	{
//		printf("loop1:n=%d\n", n);
//	}
//	printf("After loop 1,n=%d\n", n);
//	
//	for (int n = 1; n < 3; n++)
//	{
//		printf("loop 2 index n=%d\n", n);
//		int n = 30;
//		printf("loop 2:n=%d\n", n);
//		n++;
//	}
//	printf("After loop 2,n=%d\n", n);
//
//	return 0;
//}

//静态是--指变量的位置固定不动
//void trystat();
//
//int main()
//{
//	int count;
//
//	for (count = 1; count <= 3; count++)
//	{
//		printf("Here comes iteration %d:\n", count);
//		trystat();
//	}
//
//	return 0;
//}
//
//void trystat()
//{
//	int fade = 1;
//	//一声明就会有一个值了，下次该函数不会执行该语句了
//	static int stay = 1; 
//
//	printf("fade = %d and stay =%d\n", fade++, stay++);
//
//}

//int units = 0;     /*  一个外部变量  */
//void critic(void);
//int main(void)
//{
//	extern int units; /* 可选的二次声明 */
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//	while (units != 56)
//	{
//		critic();
//	}
//	printf("You must have looked it up!\n");
//
//	return 0;
//}
//
//void critic(void)
//{
//	/*这里省略了可选的二次声明*/
//	printf("No luck,chummy. Try again.\n");
//	scanf("%d", &units);
//}

// auto register static extern typedef
// auto--变量具有自动存储时期
// register--只能用于具有代码块作用域的变量(它的使用也使你不能获得变量的地址)
// static--用于具有代码块作用域的变量声明中，静态存储时期;
// 用于文件作用域的变量声明中，表明该变量具有内部链接
// extern 表明在声明一个已经在别处定义了的变量
//


//void report_count();
//void accumulate(int k);
//int count = 0;  //文件作用域，外部链接
//
//int main(void)
//{
//	int value;			//自动变量
//	register int i;		//寄存器变量
//
//	printf("Enter a positive integer(0 to quit):");
//
//	while (scanf("%d", &value) == 1 && value > 0)
//	{
//		++count;   //使用文件作用域变量
//		for (i = value; i >= 0; i--)
//		{
//			accumulate(i);
//		}
//		printf("Enter a postive integer(0 to quit):");
//	}
//	report_count();
//	
//	return 0;
//}
//
//void report_count()
//{
//	printf("Loop executed %d times\n", count);
//}


//double gamma();       // 可被程序的其他文件中的函数使用
//static double beta(); // 不可以，限定在一个文件中，
//					  // 故可在其他文件中使用具有相同名称的不同函数
//extern double delta();// 可被程序的其他文件中的函数使用
//
////除非函数声明使用了关键字static,否则认为它时extern的

//12.4 随机数函数和静态变量


//*******************2023/10/24 14:27*********************//

/*count.c -- 使用标准的I/O*/

// #include <stdlib.h> //ANSIC 的exit()原型

//int main1(int argc,char*argv[])
//{
//	int ch;
//	FILE* fp;
//	long count = 0;
//
//	if (argc != 2)
//	{
//		printf("Usage:%s filename\n", argv[0]);
//		exit(1);
//	}
//
//	if ((fp = fopen(argv[1], "r")) == NULL)
//	{
//		printf("Can't open %s\n", argv[1]);
//		exit(1);
//	}
//
//	while ((ch = getc(fp)) != EOF)
//	{
//		putc(ch, stdout); //相当于putchar(ch)
//		count++;
//	}
//
//	fclose(fp);
//	printf("File %s has %ld characters\n", argv[1], count);
//
//	return 0;
//}

//#define LEN 50
//
//int main(int argc, char* argv[])
//{
//	int ch;
//	FILE* fp;
//	unsigned long count = 0;
//	char filename[LEN];
//
//	printf("Please enter a filename: ");
//	scanf("%49s", filename);
//
//	if ((fp = fopen(filename, "r")) == NULL)
//	{
//		printf("Can't open %s\n", filename);
//		exit(EXIT_FAILURE);
//	}
//
//	while ((ch=getc(fp))!=EOF)
//	{
//		putc(ch, stdout);
//		count++;
//	}
//
//	fclose(fp);
//	printf("\nFile %s has %lu characters\n", filename, count);
//
//	return 0;
//}

// 编写一个文件拷贝程序
// 通过命令获取原始文件名和拷贝文件名
// 尽量使用标准I/O和二进制模式
//

//#define BUF 512
//
//int main(int argc,char*argv[])
//{
//	int bytes;
//	FILE* source;
//	FILE* target;
//	static char temp[BUF];
//
//	if (argc != 3)
//	{
//		fprintf(stderr, "Usage:%s sourcefile targetfile\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//
//	if ((source = fopen(argv[1], "rb")) == NULL)
//	{
//		fprintf(stderr, "Can't open %s\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//
//	if ((target = fopen(argv[2], "wb")) == NULL)
//	{
//		fprintf(stderr, "Can't open %s\n", argv[2]);
//		exit(EXIT_FAILURE);
//	}
//
//	//以二进制模式读入文件内容
//	while ((bytes = fread(temp, sizeof(char), BUF, source)) > 0)
//	{
//		//以二进制写入到文件中
//		fwrite(temp, sizeof(char), bytes, target); 
//	}
//
//	if (fclose(source) != 0)
//	{
//		fprintf(stderr, "Can't close %s\n", argv[1]);
//	}
//
//	if (fclose(target) != 0)
//	{
//		fprintf(stderr, "Can't close %s\n", argv[2]);
//	}
//
//	return 0;
//}

//*******************2023/10/25 14:41*********************//

//extern int rand0(void);
//
//int main(void)
//{
//	int count;
//
//	for (count = 0; count < 5; count++)
//	{
//		printf("%hd\n", rand0());
//	}
//
//	return 0;
//}

//extern void srand1(unsigned int seed);
//extern int rand1(void);
//
//int main(void)
//{
//	int count;
//	unsigned seed;
//
//	printf("Please enter your choice for seed.\n");
//
//	while (scanf("%u", &seed) == 1)
//	{
//		srand1(seed);  /*重置种子*/
//		for (count = 0; count < 5; count++)
//		{
//			printf("%hd\n", rand1());
//		}
//
//		printf("Please enter next seed (q to quit):\n");
//
//	}
//	printf("Done.\n");
//
//	return 0;
//}

//int rollem(int sides)
//{
//	int roll;
//
//	roll = rand() % sides + 1;
//	return roll;
//}


//int roll_count = 0;				/* 外部链接 */
//
//static int rollem(int sides)	/* 这个文件的私有函数 */
//{
//	int roll;
//
//	roll = rand() % sides + 1;
//
//	++roll_count;				/* 计数函数调用 */
//	
//	return roll;
//}
//
//int roll_n_dice(int dice, int sides)
//{
//	int d;
//	int total = 0;
//	
//	if (sides < 2)
//	{
//		printf("Need at least 2 sides.\n");
//		return -2;
//	}
//	if (dice < 1)
//	{
//		printf("Need at least 1 die.\n");
//		return -1;
//	}
//
//	for (d = 0; d < dice; d++)
//	{
//		total += rollem(sides);
//	}
//
//	return total;
//
//}
//
//
//int main()
//{
//	int dice, roll;
//
//	int sides;
//
//	srand((unsigned int)time(0));		/* 随机化种子 */
//	printf("Enter the number of sides per die,0 to stop.\n");
//	while (scanf("%d", &sides) == 1 && sides > 0)
//	{
//		printf("How many dice?\n");
//		scanf("%d", &dice);
//		roll = roll_n_dice(dice, sides);
//		printf("You have rolled a %d using %d %d-sided side.\n",
//			roll, dice, sides);
//
//		printf("How many sides?Enter 0 to stop.\n");
//	}
//
//	printf("The rollem() function was called %d times.\n",
//			roll_count);
//
//	printf("Good fortune to you!\n");
//
//
//	return 0;
//}
//



/* dyn-arr.c -- 为数组动态分配存储空间 */

//int main()
//{
//	double* ptd;
//	int max;
//	int number;
//	int i = 0;
//
//	puts("What is the maximum number of type double entries?");
//	scanf("%d", &max);
//
//	ptd = (double*)malloc(max * sizeof(double));
//	if (ptd == NULL)
//	{
//		puts("Memory allocation failed.Goodbye.");
//		exit(EXIT_FAILURE);
//	}
//
//	/* ptd现在指向有max个元素的数组 */
//	puts("Enter the values(q to quit): ");
//
//	while (i < max && scanf("%lf", &ptd[i]) == 1)
//		++i;
//
//	printf("Here are your %d entires: \n", number = i);
//	for ( i = 0; i < number; i++)
//	{
//		printf("%7.2f ", ptd[i]);
//		
//		if (i % 7 == 6)
//		{
//				putchar('\n');
//		}
//	}
//	
//	if (i % 7 != 0)
//	{
//		putchar('\n');
//	}
//	puts("Done.");
//	
//	free(ptd);
//
//	return 0;
//}


//*******************2023/10/26 19:13*********************//
// 编写文件拷贝程序
// 提示用户输入文本文件名 ---以该文件名作为原始文件名和输出文件名
// 程序使用toupper()函数 在写入输入文件时把所有文本转换成大写
// 使用标准I/O和文本模式
//

//#define LEN 50
//
//int main(int argc, char* argv[])
//{
//	int ch;
//	FILE* fp;
//
//	char filename[LEN];
//
//	printf("Please enter a filename: ");
//	scanf("%49s", filename);
//
//	if ((fp = fopen(filename, "r+")) == NULL)
//	{
//		fprintf(stderr, "Can't open %s\n", filename);
//		exit(EXIT_FAILURE);
//	}
//
//	while ((ch = getc(fp)) != EOF)
//	{
//		fseek(fp, -1L, SEEK_CUR);   //回退一个字节
//		putc(toupper(ch), fp);
//		fseek(fp, 0L, SEEK_CUR);	//改变文件状态，使得下一个字符可以被正常读取（详情参见C陷阱与缺陷一书）
//	}
//
//	rewind(fp);
//
//	printf("File %s:\n", filename);
//
//	while ((ch = getc(fp)) != EOF)
//	{
//		//显示字符是否成功转换为大写
//		putchar(ch);
//	}
//
//	putchar('\n');
//
//	if (fclose(fp) != 0)
//	{
//		fprintf(stderr, "Can't close %s\n", filename);
//	}
//
//	return 0;
//}
//
//// 编写一个程序，在顺序在屏幕上显示命令行中列出的所有文件
//
//int main(int argc, char* argv[])
//{
//	int i, temp;
//	
//	FILE* source;
//
//	if (argc == 1)
//	{
//		fprintf(stderr, "Usage: %s filename[s]\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//
//	for (i = 1; i < argc; i++)
//	{
//		if ((source = fopen(argv[i], "r")) == NULL)
//		{
//			fprintf(stderr, "Can't open file %s\n", argv[i]);
//			continue;
//		}
//
//		printf("File %s: \n", argv[i]);
//		//显示
//		while ((temp=getc(source))!=EOF)
//		{
//			putchar(temp);
//		}
//		putchar('\n');
//	
//		if (fclose(source) != 0)
//		{
//			fprintf(stderr, "Can't close file %s\n", argv[i]);
//		}
//	}
//
//
//	return 0;
//}

/* 反序显示一个文件 */

//#define CNTL_Z '\032' /* DOS文本文件中的文件结尾标记 */
//#define SLEN 50
//
//int main1()
//{
//	char file[SLEN];
//	char ch;
//	FILE* fp;
//	long count, last;
//
//	puts("Enter the name of the file to be processed: ");
//	gets_s(file);
//
//	if ((fp = fopen(file, "rb")) == NULL)
//	{
//		/* 只读和二进制模式 */
//		printf("reverse can't open %s\n", file);
//		exit(1);
//	}
//
//	fseek(fp, 0L, SEEK_END); /* 定位到文件结尾出 */
//
//	last = ftell(fp);
//
//	for (count = 1L; count <= last; count++)
//	{
//		fseek(fp, -count, SEEK_END);	/* 回 退 */
//		ch = getc(fp);
//
//		/* 针对DOS，在UNIX下也可工作 */
//		if (ch != CNTL_Z && ch != '\r')
//		{
//			putchar(ch);
//		}
//		/* 针对Macintosh */
//		/*if (ch == '\r')
//			putchar('\n');
//		else
//		{
//			putchar(ch);
//		}*/
//
//		putchar('\n');
//		fclose(fp);
//
//		return 0;
//	}
//
//	return 0;
//}

//#define BUFSIZE 4096
//#define SLEN 81
//
//void append(FILE* source, FILE* dest)
//{
//	rsize_t bytes;
//	static char temp[BUFSIZE];  // 静态无链接变量只分配一次内存
//
//	/* 
//		fread函数把source指向的文件中的BUFSIZE 块char 类型的
//		数据 写入到temp数组中，返回值是成功读取数据块的数量；
//	*/
//	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
//	{
//		// fwrite函数把temp数组中bytes块char类型的数据写入dest
//		// 指向的文件中，返回值是成功写入数据块的数量；
//		fwrite(temp, sizeof(char), bytes, dest);
//	}
//
//	return;
//}
//
//
//int main(int argc, char* argv[])
//{
//	int i, ch;
//	int files = 0;
//	FILE* fa;
//	FILE* fs;
//
//	if (argc < 3)
//	{
//		printf("Usage: %s appendfile sourcefile.\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//
//	if ((fa = fopen(argv[1], "a+")) == NULL)
//	{
//		fprintf(stderr, "Can't open %s\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//
//	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
//	{
//		// 设置缓冲区大小为BUFSIZE；
//		// _IOFBF表示完全缓冲
//		// NULL表示为fa指向的文件分配缓冲区；
//		
//		fputs("Can't create output buffer\n", stderr);
//		exit(EXIT_FAILURE);
//	}
//
//	for (i = 2; i < argc; i++)
//	{
//		if (strcmp(argv[i], argv[1]) == 0)
//		{
//			//防止文件自身附加在文件末尾
//			fputs("Can't append file to itself\n", stderr);
//		}
//		else if ((fs = fopen(argv[i], "r")) == NULL)
//		{
//			fprintf(stderr, "Can't open %s\n", argv[i]);
//		}
//		else
//		{
//			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
//			{
//				// 同上一个setvbuf函数所述；
//				// 本次调用是为了fs指向的文件分配缓冲区；
//				fputs("Can't create input buffer\n", stderr);
//				continue;
//			}
//
//			append(fs, fa);
//
//			if (ferror(fs) != 0)
//			{
//				// 读写出现错误 ferror函数返回一个非0值
//				fprintf(stderr, "Error in reading file %s.\n", argv[i]);
//			}
//
//			if (ferror(fa) != 0)
//			{
//				fprintf(stderr, "Error in writing file %s.\n", argv[1]);
//			}
//
//			fclose(fs);
//			files++;
//			printf("File %s appended.\n", argv[i]);
//		}
//
//	}
//
//	printf("Done appending. %d files appended.\n", files);
//
//	rewind(fa);  // 返回文件起始处；
//
//	printf("%s contents:\n", argv[1]);
//
//	while ((ch=getc(fa))!=EOF)
//	{
//		putchar(ch);
//	}
//
//	putchar('\n');
//
//	puts("Done displaying.");
//
//	fclose(fa);
//
//	return 0;
//}


//使用命令行参数的程序依赖于用户的内存如何正确的使用他们
//重写程序清单13.2中的程序

// reducto.c -- 把您的文件压缩为原来的三分之一！
//#define LEN 40
//
//int main(int argc, char* argv[])
//{
//	FILE* in, * out;	//声明两个FILE指针
//	int ch;
//	char name[LEN];		//用于存储输入文件名
//	int count = 0;		
//	
//	//检查命令行参数
//	if (argc < 2)
//	{
//		fprintf(stderr, "Usage: %s filename\n", argv[0]);
//		exit(1);
//	}
//
//	//实现输入
//	if ((in = fopen(argv[1], "r")) == NULL)
//	{
//		fprintf(stderr, "I couldn't open the file \"%s\"\n",argv[1]);
//		exit(2);
//	}
//
//	//实现输出
//	strcpy(name, argv[1]);  //把文件名复制到数组中
//	strcat(name, ".red");   //在文件名后添加.red
//
//	if ((out = fopen(name, "w")) == NULL)
//	{
//		fprintf(stderr, "Can't create output file.\n");
//		exit(3);
//	}
//
//
//	//复制数据
//	while ((ch = getc(in)) != EOF)
//	{
//		if (count++ % 3 == 0)
//			putc(ch, out);		// 打印每三个字符中的1个
//	}
//
//	//收尾工作
//	if (fclose(in) != 0 || fclose(out) != 0)
//		fprintf(stderr, "Error in closing files\n");
//
//	return 0;
//}

//#define len 40
//
//int main(int argc, char* argv[])
//{
//	file* in, * out;
//	int ch;
//	char name[len];
//	int count = 0;
//	char temp[len];
//
//	printf("please enter a filename: \n");
//	scanf("%39s", temp);
//
//	if ((in = fopen(temp, "r")) == null)
//	{
//		fprintf(stderr, "i could't open the file \"%s\" \n", temp);
//		exit(exit_failure);
//	}
//
//	//拷贝文件名
//	strncpy(name, temp, len - 5);
//	name[len - 5] = '\0';
//	strcat(name, ".red");
//
//	if ((out = fopen(name, "w")) == null)
//	{
//		fprintf(stderr, "can't create output file.\n");
//		exit(3);
//	}
//
//	//拷贝数据
//	while ((ch = getc(in)) != eof)
//	{
//		if (count++ % 3 == 0)
//		{
//			putc(ch, out);
//		}
//
//	}
//
//	if (fclose(in) != 0 || fclose(out) != 0)
//	{
//		fprintf(stderr, "error in closing files\n");
//	}
//
//	return 0;
//}


//*******************2023/10/28 11:43*********************//

//#define LEN 256
//
//int main(int argc, char* argv[])
//{
//    FILE* f1;
//    FILE* f2;
//    char str1[LEN], str2[LEN];
//
//    if (argc != 3)
//    {
//        printf("Usage: %s file1 file2\n", argv[0]);
//        exit(EXIT_FAILURE);
//    }
//    if ((f1 = fopen(argv[1], "r")) == NULL)
//    {
//        fprintf(stderr, "Can't open file %s\n", argv[1]);
//        exit(EXIT_FAILURE);
//    }
//    if ((f2 = fopen(argv[2], "r")) == NULL)
//    {
//        fprintf(stderr, "Can't open file %s\n", argv[2]);
//        exit(EXIT_FAILURE);
//    }
//
//    // gets()函数的作用可以这么解释：从第三个参数指定的流中读取最多第二个参数大小的字符到第一个参数指定的容器地址中。
//    // 在这个过程中，在还没读取够第二个参数指定大小的字符前，读取到换行符'\n'或者需要读取的流中已经没有数据了。
//    // 则提前结束，并把已经读取到的字符存储进第一个参数指定的容器地址中。
//    // 在正常情况下fgets()函数的返回值和它第一个参数相同。即读取到数据后存储的容器地址。
//    // 但是如果读取出错或读取文件时文件为空，则返回一个空指针
//    
//    //读取一行字符串
//    char* s1 = fgets(str1, LEN, f1);
//    char* s2 = fgets(str2, LEN, f2);
//
//    while (s1 || s2)
//    {
//        int len1 = strlen(str1), len2 = strlen(str2);
//      
//        //将换行符换成字符串结束标志'\0'
//        if (str1[len1 - 1] == '\n')
//        {
//            str1[len1 - 1] = '\0';
//        }
//        if (str2[len2 - 1] == '\n')
//        {
//            str2[len2 - 1] = '\0';
//        }
//
//        if (s1)
//        {
//            printf("%s\n", str1);
//        }
//        if (s2)
//        {
//            printf("%s\n", str2);
//        }
//        s1 = fgets(str1, LEN, f1), s2 = fgets(str2, LEN, f2);
//    }
//    if (fclose(f1) != 0)
//    {
//        fprintf(stderr, "Can't close %s\n", argv[1]);
//    }
//    if (fclose(f2) != 0)
//    {
//        fprintf(stderr, "Can't close %s\n", argv[2]);
//    }
//
//    return 0;
//}


//#define LEN 256
//
//int main(int argc, char* argv[])
//{
//	FILE* f1;
//	FILE* f2;
//
//	char str1[LEN], str2[LEN];
//
//	if (argc != 3)
//	{
//		printf("Usage:%s file1 file2\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//
//	//stdout -- 标准输出设备(printf("..")) 同 stdout。
//	//	stderr -- 标准错误输出设备 两者默认向屏幕输出。
//	//	但如果用转向标准输出到磁盘文件，则可看出两者区别。stdout输出到磁盘文件，stderr在屏幕。
//
//	if ((f1 = fopen(argv[1], "r")) == NULL)
//	{
//		fprintf(stderr, "Can't open file %s\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//
//	if ((f2 = fopen(argv[2], "r")) == NULL)
//	{
//		fprintf(stderr, "Can't open file %s\n", argv[2]);
//		exit(EXIT_FAILURE);
//	}
//
//	char* s1 = fgets(str1, LEN, f1);
//	char* s2 = fgets(str2, LEN, f2);
//
//	while (s1 || s2)
//	{
//		int len1 = strlen(str1);
//		int len2 = strlen(str2);
//
//		if (str1[len1 - 1] == '\n')
//		{
//			str1[len1 - 1] = '\0';
//		}
//
//		if (str2[len2 - 1] == '\n')
//		{
//			str2[len2 - 1] = '\0';
//		}
//
//		if (s1)
//		{
//			printf("%s ", str1);
//		}
//		
//		if (s2)
//		{
//			printf("%s ", str2);
//		}
//		putchar('\n');
//		s1 = fgets(str1, LEN, f1);
//		s2 = fgets(str2, LEN, f2);
//	}
//
//	if (fclose(f1) != 0)
//	{
//		fprintf(stderr, "Can't close %s\n", argv[1]);
//	}
//
//	if (fclose(f2) != 0)
//	{
//		fprintf(stderr, "Can't close %s\n", argv[2]);
//	}
//
//	return 0;
//}

// 以 一个字符 和 任意文件名 作为命令行参数
// if 字符后面没有参数，程序读取标准输入
// else 程序一次打开每个文件并报告 每个文件中 该 字符出现的次数
// 文件名和字符本身也要一同报告，
// if 程序应包含错误检查，以确定
// 参数数量 是否确定 和 是否能打开文件
// if 无法打开文件， 程序应报告这一情况，然后继续处理下一个文件
//	 

//int search(int ch, FILE* fp)
//{
//	int find;
//	int n = 0;
//
//	while ((find = getc(fp))!= EOF)
//	{
//		if (ch == find)
//		{
//			++n;
//		}
//	}
//
//	return n;
//}
//
//
//
//int main(int argc, char* argv[])
//{
//	FILE* fp;
//	int ch, count = 0, i, ct;
//
//
//	if (argc < 2)
//	{
//		fprintf(stderr, "Usage:%s character filename[s]\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//
//	if (strlen(argv[1]) != 1)
//	{
//		fprintf(stderr, "The second argument must be a character!\n");
//		exit(EXIT_FAILURE);
//	}
//
//	if (argc == 2)
//	{
//		fp = stdin;
//		ch = argv[1][0];
//		printf("Please enter a string (EOF to quit): ");
//		count = search(ch, fp);
//		printf("\n%c appeared %d times.\n", ch, count);
//	}
//
//	else if (argc > 2)
//	{
//		ch = argv[1][0];
//
//		for (i = 2; i < argc; i++)
//		{
//
//			if ((fp = fopen(argv[i], "r")) == NULL)
//			{
//				fprintf(stderr, "Can't open file %s\n", argv[i]);
//				continue;
//			}
//
//			printf("File %s: \n",argv[i]);
//
//			while ((ct = getc(fp)) != EOF)
//			{
//				putchar(ct);
//			}
//
//			rewind(fp);
//
//			count = search(ch, fp);
//
//			printf("\n%c appeared %d times in file %s\n", ch, count, argv[i]);
//			
//			if (fclose(fp) != 0)
//			{
//				fprintf(stderr, "Can't close file %s\n", argv[i]);
//			}
//		}
//	}
//
//	return 0;
//}


//*******************2023/10/29 16:07*********************//

/* addaword.c -- 使用fprintf()，fscanf()和rewind()函数 */
//#define MAX 40
//
//int main(void)
//{
//	FILE* fp;
//	char words[MAX];
//
//	// 打开一个文本文件，可以进行更新（读取和写入），
//	// 向以后文件的尾部追加内容，
//	// 如果该文件不存在则先创建之，
//	// 可以读取整个文件，但写入时只能追加内容
//	//
//
//	if ((fp = fopen("words", "a+")) == NULL)
//	{
//		fprintf(stdout, "Can't open words file.\n");
//		exit(1);
//	}
//	puts("Enter words to add to the file; press the Enter");
//	puts("key at the beginning of a line to terminate.");
//	while (gets_s(words) != NULL && words[0] != '\0')
//	{
//		fprintf(fp, "%s ", words);
//	}
//
//
//	puts("File contents: ");
//	rewind(fp);   /* 回到文件的开始处 */
//
//	while (fscanf(fp, "%s", words) == 1)
//	{
//		puts(words);
//	}
//
//	if (fclose(fp) != 0)
//	{
//		fprintf(stderr, "Error closing file\n");
//	}
//
//
//	return 0;
//}
//


// 修改程序清单13.3中的程序，从1开始，根据加入列表的顺序为每个单词编号。
// 当程序下次运行时，确保新的单词编写接着上次的编号开始

//#define MAX 41
//
//int main()
//{
//	FILE* fp;
//	int ct = 0;
//
//	char words[MAX];
//
//	if ((fp = fopen("wordy", "a+")) == NULL)
//	{
//		fprintf(stdout, "Can't open wordy file.\n");
//		exit(EXIT_FAILURE);
//	}
//
//	while (fgets(words,MAX,fp)!=NULL)
//	{
//		ct++;
//	}
//
//	rewind(fp);
//
//	puts("Enter words to add to the file; press the #");
//	puts("key at the beginning of a line to terminate.");
//
//	while ((fscanf(stdin,"%40s",words))==1&&(words[0]!='#'))
//	{
//		//把标号写到文件中
//		fprintf(fp, "%-2d : %s\n", ++ct, words);
//	}
//
//	puts("File contents: ");
//	rewind(fp);
//
//	while (fgets(words,MAX,fp)!=NULL)
//	{
//		fputs(words, stdout);
//	}
//
//	puts("Done!");
//
//	if (fclose(fp) != 0)
//	{
//		fprintf(stderr, "Error in closing file.\n");
//	}
//
//	return 0;
//}

//*******************2023/10/30 13:40*********************//

// 编写一个程序打开文本文件
// 通过交互方式获得文件名
// 通过一个循环，提示用户输入一个文件位置
// 然后该程序打印从该位置开始到下一个换行符之前的内容
// 用户输入负数或非数值字符可以结束输入循环
//

//C 库函数 int fseek(FILE* stream, long int offset, int whence) 
//设置流 stream 的文件位置为给定的偏移 offset，参数 offset 意味着从给定的 whence 位置查找的字节数。
//stream -- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。
//offset -- 这是相对 whence 的偏移量，以字节为单位。
//whence -- 这是表示开始添加偏移 offset 的位置。它一般指定为下列常量之一：
//SEEK_SET	文件的开头
//SEEK_CUR	文件指针的当前位置
//SEEK_END	文件的末尾

//#define LEN 50
//
//int main(int argc,char* argv[])
//{
//	int ch;
//	FILE* fp;
//	long int number;
//	char filename[LEN];
//
//	printf("Pleasen enter a filename: ");
//	scanf("%49s", filename);
//
//	if ((fp = fopen(filename, "r")) == NULL)
//	{
//		fprintf(stderr, "Can't open file %s\n", filename);
//		exit(EXIT_FAILURE);
//	}
//
//	printf("Please enter a file position (<0 or q to quit): ");
//
//	while (scanf("%ld", &number) == 1 && number >= 0)
//	{
//		fseek(fp, number, SEEK_SET);
//
//		while ((ch=getc(fp))!='\n'&&ch!=EOF)
//		{
//			/* 打印从该位置开始到下一个换行符之前的内容 */
//			putchar(ch);
//		}
//
//		if (ch == EOF)
//		{
//			printf("The position reaches EOF.\n");
//			break;
//		}
//
//		printf("\nYou can enter again(<0 or q to quit): ");
//	}
//
//	printf("Done.\n");
//
//	if (fclose(fp) != 0)
//	{
//		fprintf(stderr, "Can't close file %s\n",filename);
//	}
//
//	return 0;
//}

//int main()
//{
//	FILE* fp;
//
//	fp = fopen("C:\\Users\\PC\\Desktop\\file.txt", "w+");
//	fputs("This is runoob.com", fp);
//
//	fseek(fp, 7, SEEK_END);
//	fputs(" C Programming Langauge", fp);
//	fclose(fp);
//
//	return(0);
//}

// 接受两个命令行参数。第一个参数是一个字符串；第二个参数是一个文件名
// 然后该程序查找该文件，打印文件中包含该字符串的所有行
// 因为该任务是面向行而不是面向字符的
// 所以要使用fgets()而不是getc()，使用标准C库函数strstr()
// 在每一行中茶轴指定的字符串。假设文件中的所有行都不超过255个字符
//

//#define SLEN 256
//
//int main(int argc, char* argv[])
//{
//	FILE* fp;
//	char line[SLEN];
//
//	if (argc != 3)
//	{
//		fprintf(stderr, "Usage: %s string filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//
//	if ((fp = fopen(argv[2], "r")) == NULL)
//	{
//		fprintf(stderr, "Can't open file %s", argv[2]);
//		exit(EXIT_FAILURE);
//	}
//
//	while (fgets(line,SLEN,fp)!=NULL)
//	{
//		if (strstr(line, argv[1]) != NULL)
//		{
//			fputs(line, stdout);
//		}
//	}
//
//	if (fclose(fp) != 0)
//	{
//		fprintf(stderr, "Can't close file %s", argv[2]);
//	}
//
//	return 0;
//}

// 一个文本文件：20*30 rand(0-9),
// 该文件使用数字表示一张图片 0-9表示逐渐增加的灰度
// 编写一个程序，把文件中的内容读入一个20*30 int数组
// 一种把这些数字转化为图片的粗略方法是：
// 该程序使用数组中的值初始化为一个20*31的字符数组 
// 用 值0对应空格字符，1对应点字符，以此类推
// 数字越大表示字符所占空间越大。
// 例如：用#表示9.每行的最后一个字符(第31个)是空字符
// 这样该数组包含了20个字符串
//


//#define ROWS 20
//#define COLS 30
//#define LEVELS 10
//#define LEN 50
//
//const char trans[LEVELS + 1] = " .':~*=&%#";   //存储需要转换的字符;
//
//void change(int(*a)[COLS], char(*b)[COLS], int rows)
//{
//	int row, col;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (col = 0; col < COLS; col++)
//		{
//			// 进行数字对应的字符转换;
//			b[row][col] = trans[a[row][col]];
//
//		}
//	}
//
//	return;
//}
//
//int main(int argc, char* argv[])
//{
//	int row, col;
//	FILE* infile;
//	char filename[LEN];
//	int figure[ROWS][COLS];
//	char picture[ROWS][COLS];
//
//	printf("Please enter a filename: ");
//	scanf("%49s", filename);
//
//	if ((infile = fopen(filename, "r+")) == NULL)
//	{
//		fprintf(stderr, "Can't open file %s\n", filename);
//		exit(EXIT_FAILURE);
//	}
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (col = 0; col < COLS; col++)
//		{
//			//从 infile 读入到 &figure[row][col]
//			fscanf(infile, "%d", &figure[row][col]);
//		}
//	}
//
//	if (ferror(infile))
//	{
//		fprintf(stderr, "Error getting data from file %s\n", filename);
//		exit(EXIT_FAILURE);
//	}
//
//	change(figure, picture, ROWS);
//
//	printf("File %s have been transformed pictures:\n", filename);
//	for (row = 0; row < ROWS; row++)
//	{
//		for (col = 0; col < COLS; col++)
//		{
//			putchar(picture[row][col]);
//		}
//		putchar('\n');
//	}
//
//	fseek(infile, 0L, SEEK_END);  //定位到文件末尾
//	putc('\n', infile);           //将结果存储到文本文件中
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (col = 0; col < COLS; col++)
//		{
//			//从 picture 输出到 infile
//
//			fprintf(infile, "%c", picture[row][col]);
//		}
//		putc('\n', infile);
//	}
//
//	if (fclose(infile) != 0)
//	{
//		fprintf(stderr, "Can't close file %s\n", filename);
//	}
//
//	return 0;
//}

// 消除失真
// 每个值与它上下左右相邻的值作比较
// if 该值与其周围相邻值的差都大于1，
// 则用所有相邻的平均值(四舍五入为整数)代替该值
// 与边界上相邻的点少于4个，所以做特殊处理
//


//#define ROWS 20
//#define COLS 30
//#define LEVELS 10
//#define LEN 50
//
//const char trans[LEVELS + 1] = " .':~*=&%#";  //存储需要转换的字符
//
//void change(int rows, int(*a)[COLS], char(*b)[COLS])
//{
//	int row, col;
//
//	for (row = 0; row < rows; row++)
//	{
//		for (col = 0; col < COLS; col++)
//		{
//			//*(*(b + row) + col) = trans[*(*(a + row) + col)];
//			*(*(b + row) + col) = *(trans + *(*(a + row) + col));
//		}
//
//	}
//
//	return;
//
//}
//
//int clean_distortion(int(*a)[COLS], int rows, int x, int y)
//{
//	int i = 0;
//	int average = 0;
//	int cnt = 0;
//	int sur = 0;
//
//	int d[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
//
//	for (i = 0; i < 4; i++)
//	{
//		int dx = x + d[i][0];
//		int dy = y + d[i][1];
//
//		if (dx < 0 || dx >= ROWS || dy < 0 || dy >= COLS)
//		{
//			continue;
//		}
//		++sur;
//
//		if (abs(a[x][y] - a[dx][dy]) > 1)
//		{
//			++cnt;
//			average += a[dx][dy];
//		}
//	}
//
//	if (cnt != sur)
//	{
//		return a[x][y];
//	}
//
//	return 1.0 * average / cnt + 0.5;
//}
//
//
//int main(int argc, char* argv[])
//{
//	int row, col;
//	FILE* infile;
//	char filename[LEN];
//	int figure[ROWS][COLS];
//	char picture[ROWS][COLS];
//
//	printf("Please enter a filename: ");
//	scanf("%49s", filename);
//
//	if ((infile = fopen(filename, "r+")) == NULL)
//	{
//		fprintf(stderr, "Can't open file %s\n", filename);
//		exit(EXIT_FAILURE);
//	}
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (col = 0; col < COLS; col++)
//		{
//			fscanf(infile, "%d", &figure[row][col]);
//		}
//	}
//
//	if (ferror(infile))
//	{
//		fprintf(stderr, "Error getting data form file %s\n", filename);
//		exit(EXIT_FAILURE);
//	}
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (col = 0; col < COLS; col++)
//		{
//			*(*(figure + row) + col) = clean_distortion(figure, ROWS, row, col);
//		}
//	}
//
//	change(ROWS,figure , picture);
//
//	printf("File %s have been transformed pictures:\n", filename);
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (col = 0; col < COLS; col++)
//		{
//			putchar(picture[row][col]);
//		}
//
//		putchar('\n');
//	}
//
//	fseek(infile, 0L, SEEK_END);   // 定位到文件末尾
//	putc('\n', infile);			   // 将结果存储到文本文件中
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (col = 0; col < COLS; col++)
//		{
//			fprintf(infile, "%c", picture[row][col]);
//		}
//		putc('\n', infile);
//	}
//
//	if (fclose(infile) != 0)
//	{
//		fprintf(stderr, "Can't close file %s\n", filename);
//	}
//
//	return 0;
//}


//*******************2023/10/31 19:24*********************//

// 重复编写复习题5
// 用月份的拼写代替月份号（使用strcmp()）
// 一个简单的程序中测试该函数 
//

//#define LEN 12
//
//struct  month
//{
//	char name[10];
//	char abbrev[4];
//	int days;
//	int monnub;
//};
//
//const struct month months[LEN] =
//{
//	{"January","Jan",31,1},
//	{"February","Feb",28,2},
//	{"March","Mar",31,3},
//	{"April","May",31,5},
//	{"May", "May", 31, 5},
//	{"June", "Jun", 30, 6},
//	{"July", "Jul", 31, 7},
//	{"August", "Aug", 31, 8},
//	{"September", "Sep", 30, 9},
//	{"October", "Oct", 31, 10},
//	{"November", "Nov", 30, 11},
//	{"December", "Dec", 31, 12}
//};
//
//int days(char* name);
//
//int main(void)
//{
//	int daytotal;
//	char input[LEN];
//
//	printf("Please enter the name of mouth (q to quit): ");
//
//	while (scanf("%11s", input) == 1 && input[0] != 'q')
//	{
//		daytotal = days(input);
//
//		if (daytotal > 0)
//		{
//			printf("There are %d days through %s.\n", daytotal, input);
//		}
//		else
//		{
//			printf("%s isn't a valid month!\n", input);
//
//		}
//
//		printf("You can enter again (q to quit): ");
//
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//	}
//
//
//
//	return 0;
//}
//
//int days(char* name)
//{
//	int i = 1;
//	int num = 0;
//	int total = 0;
//
//	name[0] = toupper(name[0]);
//
//	while (name[i]!='\0')
//	{
//		name[i] = towlower(name[i]);
//		i++;
//	}
//
//	for (i = 0; i < LEN; i++)
//	{
//		if (0 == strcmp(name, months[i].name))
//		{
//			//查找y用户输入的月份名是否存在
//			num = months[i].monnub;
//			break;
//		}
//	}
//
//	if (num == 0)
//	{
//		total = -1;  //用户输入不合法则总天数置为-1
//	}
//	else
//	{
//		for (i = 0; i < num; i++)
//		{
//			total += months[i].days;  //累加至用户输入月份的天数；
//		}
//	}
//
//
//	return total;
//
//}


//提示用户输入日、月和年。
//月份可以是月份号、月份名或月份名缩写
//然后 返回一年中到用户指定日子（包括这一天）的总天数

//#define LEN 12
//
//struct month
//{
//	char name[10];
//	char abbrev[4];
//	int days;
//	int monumb;
//};
//
//struct month months[LEN]=
//{
//	{"January","Jan",31,1},
//	{"February","Feb",28,2},
//	{"March","Mar",31,3},
//	{"April","May",31,5},
//	{"May", "May", 31, 5},
//	{"June", "Jun", 30, 6},
//	{"July", "Jul", 31, 7},
//	{"August", "Aug", 31, 8},
//	{"September", "Sep", 30, 9},
//	{"October", "Oct", 31, 10},
//	{"November", "Nov", 30, 11},
//	{"December", "Dec", 31, 12}
//};
//
//
//void is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		months[1].days = 29;
//	}
//
//	return;
//}
//
//int days_result(char* month, int days)
//{
//	int i;
//	int total = 0;
//	int temp = atoi(month);
//
//	if (days < 1 || days>31)
//	{
//		return -1;
//	}
//
//	//用户输入的月份不是数字时要进行转换
//	if (0==temp)
//	{
//		month[0] = toupper(month[0]);
//
//		for (i = 1; month[i] != '\0';i++)
//		{
//			month[i] = tolower(month[i]);
//		}
//
//	}
//
//	for (i = 0; i < LEN; i++)
//	{
//		if ((temp == months[i].monumb) || (strcmp(month, months[i].name) == 0) || strcmp(month, months[i].abbrev) == 0)
//		{
//			if (days > months[i].days)
//			{
//				return -1;
//			}
//			else
//			{
//				return total + days;
//
//			}
//		}
//
//		else
//		{
//			total += months[i].days;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int n, val;
//	int day, year;
//	char month[LEN];
//
//	printf("Please enter day,month and year (q to quit): ");
//
//	while (scanf("%d %11s %d", &day, month, &year) == 3)
//	{
//		is_leap_year(year);
//		val = days_result(month, day);
//
//		if (val > 0)
//		{
//			printf("There are %d days from the beginning of %d to %s %d\n", val, year, month, day);
//		}
//		else
//		{
//			printf("You enter invalid datas!\n");
//		}
//
//		months[1].days = 28;
//		printf("You can enter day,month and year again (q to quit): ");
//
//	}
//	printf("Done.\n");
//
//	return 0;
//}


//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBKS 100
//
//struct book
//{
//    char title[MAXTITL];
//    char author[MAXAUTL];
//    float value;
//};
//
//char* s_gets(char* st, int n);
//void sort_title(struct book* pb[], int n);
//void sort_value(struct book* pb[], int n);
//
//int main(void)
//{
//    struct book library[MAXBKS];
//    struct book* book[MAXBKS];
//    int count = 0;
//    int index;
//
//    printf("Please enter the book title.\n");
//    printf("Press [enter] at the start of a line to stop.\n");
//    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) && library[count].title[0] != '\0')
//    {
//        printf("Now enter the author.\n");
//        s_gets(library[count].author, MAXAUTL);
//        printf("Now enter the value.\n");
//        scanf("%f", &library[count].value);
//        book[count] = &library[count];
//        count++;
//        while (getchar() != '\n')
//            continue;
//        if (count < MAXBKS)
//        {
//            printf("Enter the next title.\n");
//        }
//    }
//
//    if (count > 0)
//    {
//        printf("Here is the list of your books:\n");
//        for (index = 0; index < count; index++)
//        {
//            printf("%s by %s: $%.2f\n", library[index].title,
//                library[index].author, library[index].value);
//        }
//        sort_title(book, count);
//        printf("\nHere is the list of your books sorted by title letters:\n");
//        for (index = 0; index < count; index++)
//        {
//            printf("%s by %s: $%.2f\n", book[index]->title,
//                book[index]->author, book[index]->value);
//        }
//        sort_value(book, count);
//        printf("\nHere is the list of your books sorted by value(from low to high):\n");
//        for (index = 0; index < count; index++)
//        {
//            printf("%s by %s: $%.2f\n", book[index]->title,
//                book[index]->author, book[index]->value);
//        }
//    }
//    else
//    {
//        printf("No books? Too bad.\n");
//    }
//
//    return 0;
//}
//
//void sort_title(struct book* pb[], int n)
//{
//    int i, j;
//    struct book* temp;
//
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (strcmp(pb[j]->title, pb[i]->title) < 0)
//            {
//                temp = pb[j];
//                pb[j] = pb[i];
//                pb[i] = temp;
//            }
//        }
//    }
//    return;
//}
//
//void sort_value(struct book* pb[], int n)
//{
//    int i, j;
//    struct book* temp;
//
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (pb[j]->value < pb[i]->value)
//            {
//                temp = pb[j];
//                pb[j] = pb[i];
//                pb[i] = temp;
//            }
//        }
//    }
//    return;
//}
//
//char* s_gets(char* st, int n)
//{
//    char* ret_val;
//    char* find;
//
//    ret_val = fgets(st, n, stdin);
//    if (ret_val)
//    {
//        find = strchr(st, '\n');
//        if (find)
//        {
//            *find = '\0';
//        }
//        else
//        {
//            while (getchar() != '\n')
//                continue;
//        }
//    }
//    return ret_val;
//}


//#define MAXLINE 20
//int main()
//{
//	char line[MAXLINE];
//
//	while (fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n')
//	{
//		fputs(line, stdout);
//	}
// 
//	return 0;
//}


/* reverse --- 反序显示一个文件*/

//#define CNTLZ '\032'  /* DOS文本文件中的文件结尾标记 */
//#define SLEN 50
//
//int main()
//{
//	char file[SLEN];
//	char ch;
//	FILE* fp;
//	long count, last;
//
//	puts("Enter the name of the file to be processed: ");
//	gets_s(file);
//
//	if ((fp = fopen(file, "rb")) == NULL)
//	{
//		printf("reverse can't open %s\n", file);
//		exit(1);
//	}
//
//
//	//把当前位置设置为从文件结尾处偏移0字节处，也就是将位置设定在文件结尾
//	fseek(fp, 0L, SEEK_END);            // 定位到文件结尾处
//	
//	//把文件开始到文件结尾的字节数目赋给 last
//	last = ftell(fp);
//
//	//接下来是一个循环：
//	//第一次循环将程序定位到文件结尾前的第一个字符，即文件的最后一个字符。然后打印这个字符。
//	//下一次循环将程序定位到前一个字符并打印
//	//这中操作会一直持续到到达第一个字符并打印之。
//
//	for (count = 1L;count <= last; count++)
//	{
//		fseek(fp, -count, SEEK_END);    // 回退
//		ch = getc(fp);
//		
//		// 针对DOS，在UNIX下也可工作
//
//		if (ch != CNTLZ && ch != '\r')
//		{
//			putchar(ch);
//		}
//
//		// 针对Macintosh
//		/* if(ch=='\r') putchar('\n');
//			else
//			{
//				putchar(ch);
//			}
//		*/
//
//	}
//
//	putchar('\n');
//	fclose(fp);
//
//	return 0;
//}


// 编写一个程序，创建一个有两个成员的结构模板：
// a.第1个成员是社会保险号 ，第2个成员是一个有3个成员的结构：名、中间名和姓
//   创建并初始化一个内含5个该类型结构的数组
//   Dribble,Flossie M.
//   如果有中间名，只打印它第一个字母，后面加一个点(.);
//   如果没有中间名，则不用打印点
// b.修改a部分，传递结构的值而不是结构的地址

//#define MAXLEN 20
//#define NUM 5
//
//
//typedef struct PersonInfomation
//{
//	char name[MAXLEN];     //名
//	char midname[MAXLEN];  //中间名
//	char surname[MAXLEN];  //姓
//
//}PerInfor;
//
//typedef struct SocialInsurance
//{
//	int socialnumber;  // 社会保险号
//	PerInfor person;
//}SocIns;
//
////struct SocialInsurance PerInsure[NUM];  //5个结构体元素
//
//int main()
//{
//	
//	SocIns PerInsure[NUM];  //5个结构体元素
//	
//	//initial
//
//	for (int i = 0; i < NUM; i++)
//	{
//		printf("Please input %d-th person number: \n", i + 1);
//		scanf("%d", &(PerInsure[i].socialnumber));
//
//		printf("Please input %d-th person name: \n", i + 1);
//		scanf("%s", &(PerInsure[i].person.name));
//		while (getchar()!='\n')
//		{
//			continue;
//		}
//		
//		scanf("%s", &(PerInsure[i].person.midname));
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//		scanf("%s",&(PerInsure[i].person.surname));
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//
//	}
//
//	//print
//	printf("Social person insurance list below:");
//	for (int i = 0; i < NUM; i++)
//	{
//		printf("%d-th person: ", i + 1);
//		printf("%s,", PerInsure[i].person.surname);
//		printf("%s ", PerInsure[i].person.name);
//		if (strlen(PerInsure[i].person.midname) != 0)
//		{
//			printf("%c.", PerInsure[i].person.midname);
//		}
//		printf(" -- %d\n", PerInsure[i].socialnumber);
//	
//	}
//	return 0;
//}


//#define N 15
//#define LEN 30
//
//struct names
//{
//	char fname[N];
//	char mname[N];
//	char lname[N];
//
//};
//
//struct messages
//{
//	char ints_num[LEN];
//	struct names name;
//};
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//
//	}
//
//	return ret_val;
//}
//
//void show(const struct messages pt[], int n)
//{
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		if (pt[i].name.mname[0] == '\0')
//		{
//			printf("%s, %s", pt[i].name.fname, pt[i].name.lname);
//			printf(" -- %s\n", pt[i].ints_num);
//		}
//		else
//		{
//			printf("%s, %s %c.", pt[i].name.fname, pt[i].name.lname, pt[i].name.mname[0]);
//			printf(" -- %s\n", pt[i].ints_num);
//		}
//
//	}
//
//	return;
//
//}
//
//int main()
//{
//	int count = 0;
//
//	struct messages m[5];
//	printf("Please enter the insurance number:\n");
//	printf("Press [enter] at the start of a line to stop.\n");
//
//	while (count<5&&s_gets(m[count].ints_num,LEN)&&m[count].ints_num[0])
//	{
//		printf("Now enter the former name.\n");
//		s_gets(m[count].name.fname, N);
//		printf("Now enter the middle name(Without, [enter] to the next).\n");
//		s_gets(m[count].name.mname, N);
//		printf("Now enter the last name.\n");
//		s_gets(m[count].name.lname, N);
//		if (count++<5)
//		{
//			printf("Enter the next insurance number:\n");
//		}
//	
//	}
//	if (count > 0)
//	{
//		show(m, count);
//	}
//	else
//	{
//		printf("No data!\n");
//	}
//
//
//	return 0;
//}

//*******************2023/11/06 19:24*********************//

// 文本文件：
// 每一行数据：4 Jessie Joybat 5 2 1 1
// 球员号：0-18；球员的名；球员的姓；上场次数；
// 最后三项分别是：击中数 走垒数 和打点数(RBI)
// C:\Users\PC\Desktop\C\test2.txt
//


#define LEN 19

typedef struct
{
	int id;				//球员的编号
	char fname[LEN];	//球员的名
	char lname[LEN];	//球员的姓
	int stage_num;		//球员的上场次数;
	int hit_num;		//球员的击中数;
	int base_num;		//球员的走垒数;
	int rbi;			//球员的打点;
	double hit_rate;	//球员的安打率;

}TEAM;

static TEAM players[LEN];

int read_datas(TEAM platyers[], int n, FILE* fp)
{
	int count = 0;
	char fname[LEN], lname[LEN];
	int m, stage_num, hit_num, base_num, rbi;

	while (7 == fscanf(fp, "%d %18s %18s %d %d %d %d",
		&m, fname, lname, &stage_num, &hit_num, &base_num, &rbi)
		&& !feof(fp) && count < n)
	{
		//球员信息为空则累计球员数量, 防止超出人数限制19人;
		if (platyers[m].stage_num == 0)
		{
			++count;
		}
		strcpy(players[m].fname, fname);
		strcpy(players[m].lname, lname);

		players[m].id = m;
		players[m].stage_num += stage_num;
		platyers[m].hit_num += hit_num;
		platyers[m].base_num += base_num;
		players[m].rbi += rbi;
	}

	return count;
}
void count_hit_rate(TEAM platyers[], int n)
{
	for (int i = 0; i < n; i++)
	{
		players[i].hit_rate = 1.0 * players[i].hit_num / platyers[i].stage_num;
	}
}
void show_messages(TEAM platyers[], int n)
{
	if (0 == n)
	{
		printf("No datas!\n");
		return;
	}

	printf("Datas for all players:\n");
	printf("Id First_name Last_name Stage Hit_rate Base_num RBI Hit_rate\n");

	for (int i = 0; i < n; i++)
	{
		if (players[i].stage_num)
		{
			printf("%-4d %-12s %-10s %5d %7d %11d %8d %8.2f\n",

				players[i].id, players[i].fname, players[i].lname,
				players[i].stage_num, players[i].hit_num, platyers[i].base_num,
				platyers[i].rbi, players[i].hit_rate);
		}
	}

	return;
}
int main(void)
{
	FILE* fp;

	if ((fp = fopen("C:\\Users\\PC\\Desktop\\C\\test2.txt", "r")) == NULL)
	{
		fprintf(stderr, "Can't open file datas.txt.\n");
		exit(EXIT_FAILURE);
	}

	//统计文件中不同球员的数量
	int len = read_datas(players, LEN, fp);
	count_hit_rate(players, len);
	show_messages(players, len);

	if (fclose(fp) != 0)
	{
		fprintf(stderr, "Can't close file test2.txt.\n");
	}

	return 0;
}


























