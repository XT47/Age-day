#include <iostream>
#include <Windows.h>
#define year 365

using namespace std;

int main(void)
{
	int age;	//年龄
	int	day;	//天数

	cout << "请输入您的年龄：";
	cin >> age;
	day = year * age;	//计算
	cout << endl << "您的年龄是：" << age << "岁" << endl << "您的年龄对应的天数是：" << day << "天" << endl << endl;

	system("pause");
	return 0;
}