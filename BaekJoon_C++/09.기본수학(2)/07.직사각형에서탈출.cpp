/*
	직사각형에서 탈출
	(x,y)가 있다 직사각형은 각 변이 좌표축에 평행하고 
	왼쪽 아래 꼭짓점은 (0,0), 오른쪽 위 꼭짓점은 (w,h)에 있다
	직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램
	
	첫째줄에 x,y,w,h가 주어진다
*/
#include <iostream>

using namespace std;

int main(){
	
	int x,y,w,h,result;
	cin >> x >> y >> w >> h;
	

	if(x > w - x){
		if(y > h - y)
			result = w-x < h-y ? w-x : h-y;
		else
			result = w-x < y ? w-x : y;
	}

	else{
		if(h-y < y)
			result = x < h-y ? x : h-y;
		else
			result = x < y ? x : y;
	}
	
	cout << result << endl;

}
