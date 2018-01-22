#include <stdio.h>
int main(){
	int i;
	int array[5];

	for(i=0;i<5;i++){
	printf("%d번째 데이터 입력: ",i);
	scanf("%d", &array[i]);
	}

	puts("");
	for(i=0;i<5;i++){
	printf("array[%d]=%d\n",i,array[i]);
	}
}