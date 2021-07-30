/*
	택시기하학
	
	택시기하학에서 두 점 사이의 거리는 D(T1,T2) = |x1-x2| + |y1+y2|이다
	원의 정의는 유클리드 기하학과 같다
	반지름 R이 주어졋을때 유클리드 기하학에서 원의 넗이와, 택시 기하학에서 원의 넓이를 구하는 프로그램
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int R;
	double u_cir, t_cir;

	cin >> R;
	
	u_cir = pow(R,2) * M_PI;
	t_cir = pow(R,2) * 2;

	cout << fixed;
	cout.precision(6);	
	cout << u_cir << endl;
	cout << t_cir << endl;
	
}
