
# include <iostream>
using namespace std;
/*
									//	ָ������ã�ͨ��ָ����Լ�ӵط����ڴ�
								//	�ڴ���Ҳ�Ǵ�0��ʼ��
							//	��������ָ����������ַ
						//	ָ�붨�壺	�������� * ������
int main() {
	//	ָ��Ķ���
	int a = 10;
	int* p;
	//	��ָ���¼����a�ĵ�ַ
	p = &a;		//	& ����ȡַ��������ȡ�����ĵ�ַ
	cout << "a�ĵ�ַ�ǣ�" << &a << endl;
	cout << "ָ�� p �ǣ�" << p << endl;

	//	ʹ��ָ��
	//	����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//	ָ��ǰ��һ�� * �ž��ǽ����ã������ҵ�ָ��ָ����ڴ��д�ŵ�����
	*p = 1000;
	cout << "a ��ֵ�ǣ�" << a << endl;
	cout << "ָ�� p ��ֵ��" << *p << endl;	// * ����ȡֵ������

	system("pause");
	return 0;
}
*/

		//	ָ����ռ���ڴ�ռ�
int main() {
	int a = 10;
	/*int* p;
	p = &a;*/
	//	�����������壺
	int* p = &a;

	cout << *p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
										//	���Է��֣���32λ�Ĳ���ϵͳ�£�ָ����ռ���ڴ�ռ䶼�� 4 ���ֽ�
										//	��64λ�Ĳ���ϵͳ�£�ָ����ռ�ڴ�ռ䶼�� 8 ���ֽ�
	system("pause");
	return 0;
}