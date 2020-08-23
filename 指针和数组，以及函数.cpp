
# include <iostream>
using namespace std;

						//	利用指针访问数组
/*
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int* p = arr;	//	指针指向数组的时候不用加 & 取值符，因为：	数组名称本身就代表了数组的(首个元素的)地址

	cout << "第一个元素：" << arr[0] << endl;
	cout << "指针访问第一个元素：" << *p << endl;

	//	用for循环和指针遍历数组：
	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;	//	p + 1 代表的并不是地址+1，而是地址+4，为什么？	p + 1 代表的是 p 会指向下一个元素的地址
	}

	system("pause");
	return 0;
}
*/

//	值传递							发生值传递时，形参的改变不影响实参
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1 a = " << a << endl;
	cout << "swap1 b = " << b << endl;
}

//	地址传递									地址传递是可以修改实参的！
void swap2(int* p1, int* p2) {			//	此处传入的不是两个变量的值，而是两个变量的地址
	int temp = *p1;				//	p1 指向地址的值赋给 temp
	*p1 = *p2;					//	p2 指向地址的值 赋值给 p1 指向地址的值
	*p2 = temp;					//	temp 的值 赋值给 p2 指向地址的值
	cout << "地址传递完成" << endl;		//	在此函数中，交换的还是数据，而不是地址，但时两个地址中的数据互换了
}

int main() {

	int a = 10;
	int b = 20;
	swap1(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap2(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	

	system("pause");
	return 0;
}