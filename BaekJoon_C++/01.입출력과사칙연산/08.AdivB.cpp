#include <iostream>

using namespace std;

int main(){
	
	double A,B; 
	cin >> A >> B;

	cout.precision(12);
	cout << fixed;
	cout << A / B << "\n";
	return 0;
}
	

	/* 
	문제에서 10^-9 오차범위를 말했다
	float -> 32bit(4바이트), 10^-7
	double -> 64bit(8바이트), 10^-15
	long double -> 128bit(16바이트)
	*/

	/*Example
	double a =3333.333333;
	std::cout.precision(6);
	
	std::cout << a; 		// 3333.33이 출력

	std::cout << std::fixied; // 고정소수점 표기로 전환
	std::cout << a;			//3333.333333이 출력됨
	
	std::cout.unsetf(ios::fixed); //고정 소수점 표기 해제
	std::cout << a;				//3333.33이 출력됨
	*/
