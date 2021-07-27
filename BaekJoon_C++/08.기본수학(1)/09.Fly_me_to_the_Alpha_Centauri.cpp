/*
	Fly me to the Alpha Centauri
	이전 작동시기에 k광년을 이동하였을때는 k-1 or k+1 광년만을 다시 이동할수 있다
	x지점에서 y지점을 이동할때 필요한 공간이동 장치 횟수의 최솟값을 구하시오
*/
#include <iostream>

using namespace std;

int main(){
	
	int T,x,y;
	cin >> T;

	for(int i=0; i<T; i++){
		int len = y - x;

		if(len == 1)
			cout << "1" << endl;
		else if(len == 2)
			cout << "2" << endl;
		else{
			int cnt = 3;
			while(1){
				if(cnt > T)
					cnt++;
				else
					
			}
		}
	}

}
