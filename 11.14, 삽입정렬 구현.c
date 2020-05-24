#include<stdio.h>
#define N 8

void main(){
	int arr[N] = {0};
	printf("정렬할 배열을 입력하세요. (띄어쓰기로 구분, %d개 입력) : ", N-1);
	for(int i=1; i<N; i++)	scanf("%d", &arr[i]);
	
	for(int i=2; i<N; i++){
		int key = arr[i], j;	
		for(j = i-1; j>0; j--){
			if(key<arr[j])	arr[j+1] = arr[j];
			else break;	
		}
		arr[j+1] = key;	 
		printf("\n%d번째 정렬 결과 : ", i);
		for(int i=1; i<N; i++)	printf("%d ", arr[i]);
	}
	printf("\n\n정렬 결과 값: ");
	for(int i=1; i<N; i++)	printf("%d ", arr[i]); 
}
