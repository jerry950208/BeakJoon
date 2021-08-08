/*
	최대공약수와 최소공배수
	두 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램
*/
#include <iostream>

using namespace std;

int maximum, minimum;
void gdc(int a, int b);

int main(void){
	
	int num1, num2;
	cin >> num1 >> num2;

	gdc(num1, num2);

	cout << maximum << "\n" << minimum << "\n";
}

void gdc(int a, int b){
	
	int cnt = 2, sum = 1;

	for(int i=1; i<=10000; i++){
		if(a % i == 0 && b % i == 0)
			maximum = i;

		if(i >= a || i >= b)
			break;
	}

	while(1){
		if(a % cnt == 0 && b % cnt == 0){
			sum *= cnt;
			a /= cnt;
			b /= cnt;
		}
		
		else if(a < cnt || b < cnt){
			sum = sum * a * b;
			break;
		}

		else
			cnt++;
	}

	minimum = sum;
}
