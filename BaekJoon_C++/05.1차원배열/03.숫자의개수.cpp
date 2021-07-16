/*
	숫자의 개수
	A,B,C 3개의 자연수가 주어진다
	Ex) A = 150, B = 266, C = 427
		A x B x C = 17037300 이다
		해당 결과에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다
*/

#include <iostream>

using namespace std;

int main(){
	
	int A,B,C,num;
	int arr[11] = { 0 };
	cin >> A >> B >> C;

	num = A * B * C;

	while(1){
		
		arr[num%10] += 1;
		num /= 10;

		if(num == 0)
			break;
	
	}

	for(int i=0; i<10; i++)
		cout << arr[i] << endl;
}
