#include <stdio.h>

int main(){
int n1,n2;
int result;
scanf("%d %d",&n1,&n2);
result = n1*n2;
printf("%d\n",n1*(n2%10));
n2/=10;
printf("%d\n",n1*(n2%10));
n2/=10;
printf("%d\n",n1*(n2%10));
printf("%d\n",result);

return 0;
}
