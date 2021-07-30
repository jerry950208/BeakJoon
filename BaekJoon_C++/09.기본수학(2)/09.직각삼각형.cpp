/*
	직각삼각형
	주어진 세변의 길이로 직각 삼각형인지 아닌지 구분하시오
*/
#include <iostream>
#include <cmath>

using namespace std;

int Max_check(int n1, int n2, int n3);

int main(){
	
	int n1,n2,n3,big;
	
	while(1){
		
		cin >> n1 >> n2 >> n3;
		
		big = Max_check(n1,n2,n3);

		if(n1 == 0 && n2 == 0 && n3 == 0)
			break;
		
		else{
			
			if(pow(big,2) == pow(n1,2) + pow(n2,2) + pow(n3,2) - pow(big,2))
				puts("right");
			else
				puts("wrong");
		}
	}
}

int Max_check(int n1, int n2, int n3){
	
	if(n1 > n2 && n1 > n3)
		return n1;
	
	else if(n2 > n1 && n2 > n3)
		return n2;

	else
		return n3;
}
