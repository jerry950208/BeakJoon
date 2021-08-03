/*
	좌표 정렬하기
	2차원 평면 위의 점 N개가 주어진다
	좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한다음 출력하는 프로그램
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point{
	int x;
	int y;
};

point p[100001];

int compare(point a, point b);

int main(void){
	
	int N;
	cin >> N;

	for(int i=0; i<N; i++)
		cin >> p[i].x >> p[i].y;

	sort(p,p+N,compare);

	for(int i=0; i<N; i++)
		cout << p[i].x << " " << p[i].y << "\n";
}

int compare(point a, point b){
	if(a.x == b.x)
		return a.y < b.y;
	
	return a.x < b.x;
}
