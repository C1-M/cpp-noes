#define _CRT_SECURE_NO_WARNINGS

//C语言的输入输出
//#include<stdio.h>
//int main() {
//
//	printf("hello world");
//
//	return 0;
//}


//IO流
//C++独立的输入输出
//#include<iostream>
//using namespace std;
//int main() {
//	cout << "hello world" << endl;
//	return 0;
//}


//局部域和全局域
//优先局部后全局域
//#include<stdio.h>
////#include<iostream>
//
//int rand = 10;
//
//int main() {
//	int rand = 1;
//	//eer：rand：重定义
//	printf("%d\n", rand);
//	
//	// :: 域作用限定符
//	printf("%d\n", ::rand); //::的左边没有写代表全局变量查找
//	
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//namespace cm {
//	int rand = 10;
//
//	int add(int l, int r) {
//		return l + r;
//	}
//
//	struct node {
//		struct node* next;
//		int val;
//	};
//}
//
//int main() {
//
//	printf("%p\n", rand);
//	
//	// ::指定的域（cm），编译时直接去指定域查找声名或定义
//	printf("%d\n", cm::rand);
//
//	//printf("%d\n", add(1, 2)); //err
//	printf("%d\n", cm::add(1, 2));
//
//	//cm::struct node n; //err：struct是关键字
//	struct cm::node n;
//
//	return 0;
//}


//嵌套命名空间
//namespace cm {
//	//嵌套定义
//	namespace cm1 {
//		struct node {
//			//struct node* next;
//			node* next; //C++
//			int val;
//		};
//	}
//
//	namespace cm2 {
//		struct node {
//			node* next;
//			node* prev;
//			int val;
//		};
//	}
//}
//
//int main() {
//	cm::cm1::node n1;
//	cm::cm2::node n2;
//
//	return 0;
//}


//err:
/*
#include<iostream>
using namespace std;

int main() {
	int i = 10;
	double j = 12.12;

	cout << "hello cm" << endl;
	cout << i << endl;
	cout << j << endl;
	cout << &i << endl;

	return 0;
}
*/

//#include<iostream>
//
//int main() {
//	int i = 10;
//	double j = 12.12;
//	
//	//自动识别类型
//	std::cout << "hello cm" << std::endl;
//	std::cout << i << std::endl;
//	std::cout << j << std::endl;
//	std::cout << &i << std::endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;//展开命名空间，告诉不仅仅去局部查找，还要去命名空间域查找
//// 缺陷：冲突风险
//// 好处：方便
//
//struct istream {
//	int x;
//};
//
//int main() {
//	int i = 10;
//	double j = 12.12;
//
//	cout << "hello cm" << endl;
//	//cout << i << endl;
//	//cout << j << endl;
//	//cout << &i << endl;
//
//	struct isme1;
//	//std::struct isme1;
//
//	return 0;
//}

//#include<iostream>
//// 折中的方案：
//using std::cout;
//using std::endl;
//// 经常使用展开
//
//struct istream {
//	int x;
//};
//
//int main() {
//	int i = 10;
//	double j = 12.12;
//
//	cout << "hello cm" << endl;
//	cout << i << endl;
//	cout << j << endl;
//	cout << &i << endl;
//	std::cin >> i;
//
//	istream isml;
//}


//#include<iostream>
//// 折中的方案：
//using std::cout;
//using std::endl;
//// 经常使用展开
//
//struct istream {
//	int x;
//};
//
//int main() {
//	int i = 10;
//	double j = 12.12;
//
//	cout << "hello cm" << endl;
//	//cout << i << endl;
//	cout << i << '\n';
//	cout << j << endl;
//	cout << &i << endl;
//
//	std::cin >> i;
//	i << 10;
//	printf("%d\n", i);
//
//	istream isml;
//
//	return 0;
//}


// 缺省参数
//#include <iostream>
//#include <assert.h>
//
//using namespace std;
//
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Func(); // 没有传参时，使用参数的默认值
//	Func(10); // 传参时，使用指定的实参
//	return 0;
//}
