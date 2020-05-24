#include <stdio.h>
#define N 7

int Sequential_Search_nojang(int arr[], int key){
	for(int i=0; i<N; i++)	if(key==arr[i])	return i;	// return key가 아니라 i를 반환!  
	return 0;
}
int Sequential_Search_jang(int arr[], int key){
	for(int i=0; key>=arr[i]; i++)	if(key==arr[i])	return i;	// return key가 아니라 i를 반환!  
	return 0;
}

void main(){
	int arr[N], key, result;
	char jang;
	printf("탐색할 배열을 입력하세요(%d개 만큼): ", N);
	for(int i=0; i<N; i++)	scanf("%d", &arr[i]);
	printf("탐색할 값을 입력하세요: ");
	scanf("%d", &key);
	getchar();
	printf("탐색할 배열이 정렬되어 있습니까? y/n : ");
	scanf("%c", &jang);
	if(jang=='y')	result = Sequential_Search_jang(arr, key);
	else if(jang=='n')	result = Sequential_Search_nojang(arr, key);
	if(result)	printf("\n<탐색성공>\n탐색할 값이 %d 인덱스 배열값에 있습니다!", result); 
	else	printf("\n<탐색실패>\n탐색할 값과 일치하는 배열의 값을 찾지 못했습니다!");
}
