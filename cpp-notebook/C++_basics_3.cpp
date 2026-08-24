#define _CRT_SECURE_NO_WARNINGS


//引用定义和概念
//类型& 引用别名 = 引用对象;
#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	// 引用：b和c是a的别名
	int& b = a;
	int& c = a;
	// 也可以给别名b取别名，d相当于还是a的别名
	int& d = b;
	++d;
	// 这里取地址我们看到是一样的
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	cout << &d << endl;
	return 0;
}