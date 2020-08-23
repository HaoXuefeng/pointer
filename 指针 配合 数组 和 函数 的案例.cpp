#include <iostream>
using namespace std;

						//	要求：封装一个函数，利用冒泡排序，实现对整形数组的升序排序

//冒泡排序函数
void bubbleSort(int* arr, int len) {		//	int* arr  也可以写成 int arr[]
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印一个数组
void printArr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

int main() {
	int arr[10] = { 5,6,2,7,8,1,9,3,4,10 };

	int len = sizeof(arr) / sizeof(arr[0]);		//特别提示：数组名并不是等价于地址，只有当数组名在表达式中使用时，
												//编译器才会为它产生一个指针常量，指向数组的地址
									//	只有在 sizeof(数组名)	 ,或者  &数组名  的情况下，数组名不会被当作指针常量

	bubbleSort(arr, len);

	printArr(arr, len);

	system("pause");
	return 0;
}