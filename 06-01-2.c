#include <stdio.h>
int main(){
	int i;
	int array[5];

	for(i=0;i<5;i++){
	printf("%d��° ������ �Է�: ",i);
	scanf("%d", &array[i]);
	}

	puts("");
	for(i=0;i<5;i++){
	printf("array[%d]=%d\n",i,array[i]);
	}
}