#include <stdio.h>
#include <math.h>
int main(){
	int i;
	double sine[25];
	for(i=0;i<=24;i++){
		sine[i]=sin((i*15)*3.14/180);
	}
	for(i=0;i<=24;i++)
		printf("sine(%3d)=%5.2lf\n",i*15,sine[i]);
}