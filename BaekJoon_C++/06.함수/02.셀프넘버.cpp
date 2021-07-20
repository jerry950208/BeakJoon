/*
	셀프넘버
	Ex)  33으로 시작한다면 다음 수는 33 + 3 + 3 = 39이고, 그 다음 수는 39 + 3 + 9 = 51, 
	다음 수는 51 + 5 + 1 = 57이다

	n을 d(n)의 생성자라고 한다. 위의 수열에서 33은 39의 생성자이고, 39는 51의 생성자이다
	Ex)  101은 생성자가 2개(91과 100) 있다

	생성자가 없는 숫자를 셀프 넘버라고 한다
	10000보다 작거나 같은 셀프 넘버를 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
*/
#include <iostream>

using namespace std;

bool arr[10001];//0과 1로 표현 true 는 1, false 는 0 이다

int func_con(int n){
	
	int num = n + n / 1000 + n % 1000 / 100 + n % 100 / 10 + n % 10;
	
	return num;
}

void self_num(){
	
	int num;

	arr[1] = false;

	for(int i = 0; i < 10001; i++){
		if(i < 10000)
			num = func_con(i);
			if(num < 10000)
				arr[num] = true;
	}
}

int main(){
	
	self_num();

	for(int i=0; i<10000; i++){
		if(!arr[i])// !arr[i] 랑 false는 같다
			cout << i << endl;
	}
}
