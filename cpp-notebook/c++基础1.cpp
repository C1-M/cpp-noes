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
//namespace bit {
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
//	// ::指定的域（bit），编译时直接去指定域查找声名或定义
//	printf("%d\n", bit::rand);
//
//	//printf("%d\n", add(1, 2)); //err
//	printf("%d\n", bit::add(1, 2));
//
//	//bit::struct node n; //err：struct是关键字
//	struct bit::node n;
//
//	return 0;
//}


//嵌套命名空间
namespace bit {
	//嵌套定义
	namespace bit1 {
		struct node {
			//struct node* next;
			node* next; //C++
			int val;
		};
	}

	namespace bit2 {
		struct node {
			node* next;
			node* prev;
			int val;
		};
	}
}

int main() {
	bit::bit1::node n1;
	bit::bit2::node n2;

	return 0;
}
