/*
	최소공배수
	두 자연수 A와 B가 주어 졌을때 A와 B의 최소공배수를 구하는 프로그램 작성
*/
#include <stdio.h>

int func_LCM(int a, int b);					//최소공배수 함수 선언

int main(){
		
	int T,A,B;
	scanf("%d",&T);

	for(int i=0; i<T; i++){
		scanf("%d %d",&A, &B);

		printf("%d\n",func_LCM(A,B));
	}
	return 0;
}

int func_LCM(int a, int b){
	
	int min = 1;
	int cnt = 2;
	while(1){
		if(a % cnt == 0 && b % cnt == 0){	//a 와 b의 약수 일경우 min에 cnt를 곱해준다
			min *= cnt;
			a /= cnt;
			b /= cnt;
		}
		else if(a <= cnt || b <= cnt){		//a or b가 cnt보다 작을경우 나머지를 min에 곱해준후 멈춤
			min *= a*b;
			break;
		}

		else							//더이상 나눌수 없을경우 cnt + 1
			cnt++;
	}
	return min;
}
