
# include <iostream>
using namespace std;
/*
									//	指针的作用：通过指针可以间接地访问内存
								//	内存编号也是从0开始的
							//	可以利用指针变量保存地址
						//	指针定义：	数据类型 * 变量名
int main() {
	//	指针的定义
	int a = 10;
	int* p;
	//	让指针记录变量a的地址
	p = &a;		//	& 就是取址操作符，取变量的地址
	cout << "a的地址是：" << &a << endl;
	cout << "指针 p 是：" << p << endl;

	//	使用指针
	//	可以通过解引用的方式来找到指针指向的内存
	//	指针前加一个 * 号就是解引用，用来找到指针指向的内存中存放的数据
	*p = 1000;
	cout << "a 的值是：" << a << endl;
	cout << "指针 p 的值是" << *p << endl;	// * 就是取值操作符

	system("pause");
	return 0;
}
*/

		//	指针所占的内存空间
int main() {
	int a = 10;
	/*int* p;
	p = &a;*/
	//	可以这样定义：
	int* p = &a;

	cout << *p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
										//	可以发现，在32位的操作系统下，指针所占的内存空间都是 4 个字节
										//	在64位的操作系统下，指针所占内存空间都是 8 个字节
	system("pause");
	return 0;
}