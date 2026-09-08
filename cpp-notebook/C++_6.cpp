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



#include <stdio.h>
#include <string.h>
int main() {
	struct Student {
		int id;
		char name[50];
		int score;
	};

	struct Student stu = { 0 };
	printf("请输入学号 姓名 分数：");
	scanf("%d %s %d", stu.id, stu.name, stu.score);
	printf("学号：%d，姓名：%s，分数：%d", stu.id, stu.name, stu.age, stu.score);
	return 0;
}