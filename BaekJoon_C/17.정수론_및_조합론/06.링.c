/*
	링
*/
#include <stdio.h>

int denominator,molecule;

void func_gdc(int num1, int num2){
	
	int cnt = 2;
	int tmp = num1;
	while(1){
		
		if(tmp % cnt == 0 && num2 % cnt == 0){
			tmp /= cnt;
			num2 /= cnt;
		}
		
		else if(tmp <= cnt || num2 <= cnt){
			denominator = tmp;
			molecule = num2;
			break;
		}
		
		else
			cnt++;
			
	}
}

int main(){
	
	int N, arr[101];
	scanf("%d",&N);
	
	for(int i=0; i<N; i++)
		scanf("%d",&arr[i]);

	for(int i=1; i<N; i++){

		if(arr[0] % arr[i] == 0)
			printf("%d/1\n",arr[0]/arr[i]);
		
		else{
			func_gdc(arr[0],arr[i]);
			printf("%d/%d\n",denominator,molecule);
		}
	}
	
	return 0;
}
