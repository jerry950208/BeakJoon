#include <stdio.h>
#include <math.h>

int func_max(int a1, int a2, int a3){
	if(a1>a2 && a1>a3)
		return a1;
	else if(a2>a1 && a2>a3)
		return a2;
	else
		return a3;
}

int main(){
	int a1,a2,a3;
	int max;
	while(1){
		scanf("%d %d %d",&a1,&a2,&a3);
		max=func_max(a1,a2,a3);
		if(a1==0 && a2==0 && a3==0)
			break;
		else{
			if(pow(max,2) == pow(a1,2) + pow(a2,2) + pow(a3,2) - pow(max,2))
				printf("right\n");
			else
				printf("wrong\n");
		}
		
	}
	return 0;
}
