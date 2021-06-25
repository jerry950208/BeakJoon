#include <stdio.h>
int x[4],y[4];
int main(){
	
	for(int i=0; i<3; i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	if(x[0]==x[1])
		printf("%d ",x[2]);
	else if(x[0]==x[2])
		printf("%d ",x[1]);
	else if(x[1]==x[2])
		printf("%d ",x[0]);

	if(y[0]==y[1])
		printf("%d\n",y[2]);
	else if(y[0]==y[2])
		printf("%d\n",y[1]);
	else if(y[1]==y[2])
		printf("%d\n",y[0]);
	return 0;
}
