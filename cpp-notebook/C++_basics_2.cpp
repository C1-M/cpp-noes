#define _CRT_SECURE_NO_WARNINGS

// 函数重载
/*
C++支持在同一作用域中出现同名函数，但是要求这些同名函数的形参不同，可以是参数个数不同或者
类型不同。这样C++函数调用就表现出了多态行为，使用更灵活。C语言是不支持同一作用域中出现同
名函数的。
*/

#include<iostream>
using namespace std;

// 1、参数类型不同
int Add(int left, int right) {
	cout << "int Add(int left, int right)" << endl;
	return left + right;
}

double Add(double left, double right) {
	cout << "double Add(double left, double right)" << endl;
	return left + right;
}

// 2、参数个数不同
void f() {
	cout << "f()" << endl;
}
void f(int a) {
	cout << "f(int a)" << endl;
}

// 3、参数类型顺序不同
void f(int a, char b) {
	cout << "f(int a,char b)" << endl;
}

void f(char b, int a) {
	cout << "f(char b, int a)" << endl;
}
// 返回值不同不能作为重载条件，因为调用时也无法区分
//void fxx()
//{}
//
//int fxx()
//{
// return 0;
//}

// 下面两个函数构成重载
// f()但是调用时，会报错，存在歧义，编译器不知道调用谁
// 构成函数重载，f1(); //调用歧义
void f1() {
	cout << "f()" << endl;
}

void f1(int a = 10) {
	cout << "f(int a)" << endl;
}

int main() {

	Add(10, 20);
	Add(10.1, 20.2);

	f();
	f(10);

	f(10, 'a');
	f('a', 10);

	f1(1);
	//f1(); //调用歧义

	// 自动识别类型，本质函数重载(简单了解)
	cout << 1;
	cout << 1.11;

	return 0;
}