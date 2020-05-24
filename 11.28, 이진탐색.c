#include <stdio.h>
#define N 7

int BinarySearch(int arr[], int key, int n, int m){		//n = 시작 인덱스, m = 끝 인덱스  
	int pivot = (n+m)/2;
	if(arr[pivot]==key)	return pivot;	
	if(n<m){
		if(arr[pivot]<key)	return BinarySearch(arr, key, pivot+1, m);
		else	return BinarySearch(arr, key, n, pivot-1);
	}
	return -1;
}

void main(){
	int arr[N], key, result;
	char jang;
	printf("탐색할 배열을 입력하세요(%d개 만큼): ", N);
	for(int i=0; i<N; i++)	scanf("%d", &arr[i]);
	printf("탐색할 값을 입력하세요: ");
	scanf("%d", &key);
	result = BinarySearch(arr, key, 0, N);
	if(result != -1)	printf("\n<탐색성공>\n탐색할 값이 %d 인덱스 배열값에 있습니다!", result); 
	else	printf("\n<탐색실패>\n탐색할 값과 일치하는 배열의 값을 찾지 못했습니다!");
}
