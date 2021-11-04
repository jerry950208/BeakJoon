/*
	별찍기 - 10
	N이 3의 거듭제곱이라고 할 때, 크기 N의 패턴은 NxN 정사각형 모양이다
	***
	* *
	***
	크기 3의 패턴은 해당 패턴이다
	N이 3보다 클경우 N의 패턴은 공백으로 채워진 가운데의 (N/3)x(N/3)정사각형을 
	크기 N/3의 패턴으로 둘러싼 형태이다

	첫째줄에 N이 주어진다 N은 3의 거듭제곱이다
*/
#include <iostream>
using namespace std;

void star(int i, int j, int num){
	if((i / num) % 3 == 1 && (j / num) % 3 == 1)
		cout << ' ';

	else{
		if(num / 3 == 0)
			cout << '*';
		else
			star(i, j, num/3);
	}
}

int main(void){
	int num;
	cin >> num;

	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++)
			star(i, j, num);
		cout << '\n';
	}
}
