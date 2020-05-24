#include<stdio.h>

void main(){
	int arr[10] = {1, 2, 3, 4, 5}, n, arri;				//변수, 배열 선언 
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++)		//초기 배열 출력 
		printf("%d번 인덱스 값: %d\n", i, arr[i]); 		
	printf("삽입할 원소의 인덱스와 그 값을 입력하세요: ");	//삽입 원소 입력 
	scanf("%d %d", &arri, &n);	
	for(int i = sizeof(arr)/sizeof(int); i>arri; i--)	//원소 삽입 - 한칸씩 밀기 
		arr[i] = arr[i-1];
	arr[arri] = n;			//원소 삽입 - 삽입 원소값 삽입 
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++)		//삽입 후 배열 출력 		
		printf("%d번 인덱스 값: %d\n", i, arr[i]);
}
