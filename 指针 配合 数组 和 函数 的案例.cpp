#include <iostream>
using namespace std;

						//	Ҫ�󣺷�װһ������������ð������ʵ�ֶ������������������

//ð��������
void bubbleSort(int* arr, int len) {		//	int* arr  Ҳ����д�� int arr[]
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

//��ӡһ������
void printArr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

int main() {
	int arr[10] = { 5,6,2,7,8,1,9,3,4,10 };

	int len = sizeof(arr) / sizeof(arr[0]);		//�ر���ʾ�������������ǵȼ��ڵ�ַ��ֻ�е��������ڱ��ʽ��ʹ��ʱ��
												//�������Ż�Ϊ������һ��ָ�볣����ָ������ĵ�ַ
									//	ֻ���� sizeof(������)	 ,����  &������  ������£����������ᱻ����ָ�볣��

	bubbleSort(arr, len);

	printArr(arr, len);

	system("pause");
	return 0;
}