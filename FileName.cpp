#include <iostream>
using namespace std;
//자료형 : 메모리 공간을 일정 크기 사용한다.
// 숫자를 저장하고 사용할 떄 용도가 바뀐다.
// 문자형 char - 메모리 8개 1byte(1칸) 2^8  범위 -
// 정수형 int - 메모리 32개 4byte(4칸) 2^32 
//0~255, 8bit-> 7bit 127~ -127 0~126
// 문자형 메모리에 8비트를 잡는다
//[] ->숫자 -> 문자 
// bit ->8bit - > byte eascii-> 
//로드맵 : C++ -> Unreal : Define+UHT -> Unreal + C++

int main()
{
	//생략은 죄악이다.-최초 작성자가 유지보수하는 경우는 거의 없다.
	//char Number = 65; // cmd에 아스키코드 문자 A로 출력 
	int Number = 5;
	int Number2 = 4;


	float A = 1.5f; // 실수 선언시 f를 붙인다. 4byte 
	float B = (float)5;//B는 5.0000이다. 형변환 
	int C = (int)A; //형변환 소수점 아래값은 모두 버린다.
	//+,-,*,/,%
	//이항 연산자
	
	//형변환() casting 
	float Number3 = (float)Number / (float)Number2;
	cout << Number3 << endl;



	for (int i = 0; i < 10; i++) {
		if (i == 5) break;
		cout << i << endl;
	}
	cout << C << endl; // 1이다

	int i = 42;
	int* pl = &i;
	*pl = *pl * *pl;
	cout << *pl << endl;

	return 0;


}




//int
//char
//float
//대입연산자
//산술연산자
//변수선언
