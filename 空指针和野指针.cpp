
# include <iostream>
using namespace std;

		//	空指针：	指针变量指向内存中编号为 0 的空间				//	野指针：指针变量指向非法的内存空间
		//	用途：	用于初始化变量
		//	注意：	空指针指向的内存是  不可访问的！！

int main() {
	//	指针变量p指向内存地址编号为0的空间
	int* p = NULL;		//	也可以用		int* p = nullptr;	来进行初始化
	cout << p << endl;	//	输出为 0000 0000
	//cout << *p << endl;	//内存编号 0~255 是系统占用内存，不允许用户访问

	//	野指针示例
	//	在程序中，尽量避免出现野指针！

	//	int* a = (int*)0x1100;	//定义野指针不会检测出语法错误

	//	cout << *a << endl;		//访问野指针报错

	system("pause");
	return 0;
}
