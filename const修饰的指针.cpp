
# include <iostream>
using namespace std;

			//	const 修饰指针有三种情况
			//	1、const 修饰指针 -- 常量指针
			//	2、const 修饰常量 -- 指针常量
			//	3、const 既修饰指针，又修饰常量

int main() {
	int a = 10;
	int b = 20;

	//	const修饰的是指针，指针的指向可以修改，但指针的指向的值不能修改（即不能通过指针来修改变量的值）
	const int* p1 = &a;
	//	你可以让指针 p1 变为指向 b 的指针，但是你不可以修改变量 a 的值
	p1 = &b;	//	无错误，正常运行
	//*p1 = 100;	//	报错
	cout << *p1 << endl;
	//	那可以直接修改变量的值吗？
	b = 100;
	cout << *p1 << endl;	//	可以


	//	const修饰的是常量，指针的指向不能修改，但指针指向的值可以修改（即不能对指针本身进行修改操作了）
	int* const p2 = &a;
	//p2 = &b;		//	报错
	*p2 = 100;	//	不报错正常运行
	cout << *p2 << endl;


	//	const既修饰指针，又修饰常量，那么指针的指向和指针指向的值都不能修改
	const int* const p3 = &a;
	//p3 = &b;	//报错
	//*p3 = 0;	//报错

	system("pause");
	return 0;
}
