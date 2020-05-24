#include<stdio.h>

void main(){
	int arr[10] = {1, 2, 3, 4, 5}, arri;				//변수, 배열 선언 
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++)		//초기 배열 출력 
		printf("%d번 인덱스 값: %d\n", i, arr[i]); 		
	printf("삭제할 원소의 인덱스를 입력하세요: ");	//삭제 원소 입력 
	scanf("%d", &arri);	
	for(int i = arri+1; i<sizeof(arr)/sizeof(int); i++)	//원소 삭제 - 한칸씩 당기기 
		arr[i-1] = arr[i];
	arr[sizeof(arr)/sizeof(int) -1] = 0;
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++)		//삭제 후 배열 출력 		
		printf("%d번 인덱스 값: %d\n", i, arr[i]);
}
