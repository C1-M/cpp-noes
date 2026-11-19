#define _CRT_SECURE_NO_WARNINGS
//练习1：数组 
//定义长度为10的int数组，循环给数组赋值，循环遍历输出数组所有元素。 

//#include <stdio.h>
//int main() {
//
//	int a[10] = { 0 };
//	int i = 0;
//
//	while (i < 10) {
//		scanf("%d", &a[i]);
//		i++;
//	}
//
//	i = 0;
//
//	while (i < 10) {
//		printf("%d ", a[i]);
//		i++;
//	}
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 100; i++) {
        cout << " * ";
    }
    return 0;
}

