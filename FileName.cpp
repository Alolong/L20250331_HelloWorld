#include <iostream>
using namespace std;
//�ڷ��� : �޸� ������ ���� ũ�� ����Ѵ�.
// ���ڸ� �����ϰ� ����� �� �뵵�� �ٲ��.
// ������ char - �޸� 8�� 1byte(1ĭ) 2^8  ���� -
// ������ int - �޸� 32�� 4byte(4ĭ) 2^32 
//0~255, 8bit-> 7bit 127~ -127 0~126
// ������ �޸𸮿� 8��Ʈ�� ��´�
//[] ->���� -> ���� 
// bit ->8bit - > byte eascii-> 
//�ε�� : C++ -> Unreal : Define+UHT -> Unreal + C++

int main()
{
	//������ �˾��̴�.-���� �ۼ��ڰ� ���������ϴ� ���� ���� ����.
	//char Number = 65; // cmd�� �ƽ�Ű�ڵ� ���� A�� ��� 
	int Number = 5;
	int Number2 = 4;


	float A = 1.5f; // �Ǽ� ����� f�� ���δ�. 4byte 
	float B = (float)5;//B�� 5.0000�̴�. ����ȯ 
	int C = (int)A; //����ȯ �Ҽ��� �Ʒ����� ��� ������.
	//+,-,*,/,%
	//���� ������
	
	//����ȯ() casting 
	float Number3 = (float)Number / (float)Number2;
	cout << Number3 << endl;



	for (int i = 0; i < 10; i++) {
		if (i == 5) break;
		cout << i << endl;
	}
	cout << C << endl; // 1�̴�

	int i = 42;
	int* pl = &i;
	*pl = *pl * *pl;
	cout << *pl << endl;

	return 0;


}




//int
//char
//float
//���Կ�����
//���������
//��������
