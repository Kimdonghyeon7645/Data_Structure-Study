#include<stdio.h>
#define N 10

int arr[N] ={0};
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void quickSort(int arr[], int left, int right);

void main(){
	printf("정렬할 배열 입력 (%d개 만큼) : ", N);
	for(int i=0; i<10; i++)	scanf("%d", &arr[i]);
	
	quickSort(arr, 0, N-1);
	
	printf("\n\n퀵 정렬 결과 : ");
	for(int i=0; i<10; i++) printf("%d ", arr[i]);
}

void quickSort(int arr[], int left, int right){
	int i=left+1, j=right, pivot=left, temp;
	if(left<right){
		while(i<j){
			while(arr[i]<arr[pivot])	i++;	 
			while(arr[j]>arr[pivot])	j--;	
			if(i<j)	swap(&arr[i], &arr[j]);		//i, j가 교차했으면 swap X 
		}
		swap(&arr[j], &arr[pivot]);
	}
	for(int i=left; i<=right; i++) printf("%d ", arr[i]);
	if(right==N-1){
		printf("\n");
	}else 	printf("  ");	
	if(left<right){
		quickSort(arr, left, j-1);
		quickSort(arr, j+1, right);	
	}
}
