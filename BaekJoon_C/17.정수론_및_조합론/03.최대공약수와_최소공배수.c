/*
	최대공약수와 최소공배수
	두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오
*/
#include <stdio.h>

void gdc(int a, int b);

int max, min;							//max = 최대공약수, min = 최소공배수

int main(){
	
	int num1, num2;
	scanf("%d %d",&num1, &num2);
	
	gdc(num1,num2);						//최대공약수와 최대공배수 구하는 함수

	printf("%d\n%d\n",max,min);


	return 0;
}

void gdc(int a, int b){
	
	int cnt = 2,sum = 1;
	
	for(int i=1; i<=10000; i++){		//최대 공약수 구하기
		if(a % i == 0 && b % i == 0){	//1씩 증가하면서 가장 큰수를 저장
			max = i;
		}

		if(i >= a || i >= b)			//매개변수보다 클경우 멈춤
			break;
	}

	while(1){							//최소 공배수 구하기
		if(a % cnt == 0 && b % cnt == 0){//매개변수를 cnt로 나누며 약수를 확인한다
			sum *= cnt;
			a /= cnt;
			b /= cnt;
		}
		else if(a < cnt || b < cnt){	//공약수를 모두 구했을경우 나머지를 곱해준다
			sum = sum * a * b;
			break;
		}
		else							//더이상 약수가 나오지 않으면 cnt + 1 해준다
			cnt++;
	}
	min = sum;
}
