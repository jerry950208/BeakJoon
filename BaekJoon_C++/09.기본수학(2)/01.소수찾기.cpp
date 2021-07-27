/*
	소수 찾기
	주어진수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성
*/
#include <iostream>

using namespace std;

int main(){
	
	int N,cnt = 0;
	int input, check;
	cin >> N;

	for(int i=0; i<N; i++){
		check = 0;
		cin >> input;
		for(int j=1; j<=input; j++){
			if(input % j == 0){
				check++;
				if(check == 2 && j == input){
					cnt++;
					break;
				}
			}
		}
	}
	cout << cnt << endl;
}
