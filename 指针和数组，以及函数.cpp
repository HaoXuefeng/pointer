
# include <iostream>
using namespace std;

						//	����ָ���������
/*
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int* p = arr;	//	ָ��ָ�������ʱ���ü� & ȡֵ������Ϊ��	�������Ʊ���ʹ����������(�׸�Ԫ�ص�)��ַ

	cout << "��һ��Ԫ�أ�" << arr[0] << endl;
	cout << "ָ����ʵ�һ��Ԫ�أ�" << *p << endl;

	//	��forѭ����ָ��������飺
	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;	//	p + 1 ����Ĳ����ǵ�ַ+1�����ǵ�ַ+4��Ϊʲô��	p + 1 ������� p ��ָ����һ��Ԫ�صĵ�ַ
	}

	system("pause");
	return 0;
}
*/

//	ֵ����							����ֵ����ʱ���βεĸı䲻Ӱ��ʵ��
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1 a = " << a << endl;
	cout << "swap1 b = " << b << endl;
}

//	��ַ����									��ַ�����ǿ����޸�ʵ�εģ�
void swap2(int* p1, int* p2) {			//	�˴�����Ĳ�������������ֵ���������������ĵ�ַ
	int temp = *p1;				//	p1 ָ���ַ��ֵ���� temp
	*p1 = *p2;					//	p2 ָ���ַ��ֵ ��ֵ�� p1 ָ���ַ��ֵ
	*p2 = temp;					//	temp ��ֵ ��ֵ�� p2 ָ���ַ��ֵ
	cout << "��ַ�������" << endl;		//	�ڴ˺����У������Ļ������ݣ������ǵ�ַ����ʱ������ַ�е����ݻ�����
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