/*
	네번째 점
	세 점이 주어졌을때, 축에 평행한 직사각형을 만들기 위해서 필요한 네번째 점을 찾는 프로그램
*/
#include <iostream>

using namespace std;

int main(){
	
	int x[4], y[4];
	int x_arr[1001] = { 0 };
	int y_arr[1001] = { 0 };

	for(int i=0; i<3; i++){
		
		cin >> x[i] >> y[i];
		x_arr[x[i]]++;
		y_arr[y[i]]++;
	}
	
	for(int i=0; i<1001; i++){
		if(x_arr[i] == 1)
			x[3] = i;
		if(y_arr[i] == 1)
			y[3] = i;
	}

	cout << x[3] << " " << y[3] << endl;
}
