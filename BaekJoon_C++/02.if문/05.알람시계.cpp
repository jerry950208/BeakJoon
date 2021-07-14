/*
	알람시계
	일어나야할 시간(입력된 시간)보다 45분 빠른 시간 출력해야한다.
	
	확인해야하는 부분 : 
	1. 분이 45보다 작을경우 -> 1시간 빼고 분을 +15해주기
	1-1. 시간이 0시일경우 -> 23 시로 바꿔주기
	
	2. 분이 45보다 클경우 -> 분에서 45만 빼주기
*/
#include <iostream>

using namespace std;

int main(){
	
	int H,M;
	cin >> H >> M;

	if(M < 45){
		if(H == 0){
			H = 23;
			M += 15;
		}
		
		else{
			H -= 1;
			M +=15;
		}
	}
	else
		M -= 45;
	
	cout << H << " " << M << endl;

	return 0;
}
