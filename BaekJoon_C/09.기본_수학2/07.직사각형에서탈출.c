#include <stdio.h>

int main(){
	
	int x,y,w,h;

	scanf("%d %d %d %d",&x,&y,&w,&h);

	if(w-x<x){
		if(h-y<y)
			printf("%d\n",w-x < h-y ? w-x : h-y);
		else
			printf("%d\n",w-x < y ? w-x : y);
	}
	else{	
		if(h-y<y)
			printf("%d\n",x < h-y ? x : h-y);
		else
			printf("%d\n",x < y ? x : y);
	}
	return 0;
}
