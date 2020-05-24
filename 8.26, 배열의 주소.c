#include<stdio.h>

void main(){
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(int i = 0; i<10; i++)
		printf("%2d锅掳 历厘等 蔼:%d, 林家:%p = %d\n", i+1, arr[i], &arr[i], &arr[i]);
}

