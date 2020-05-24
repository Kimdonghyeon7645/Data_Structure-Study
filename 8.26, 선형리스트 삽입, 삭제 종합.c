#include<stdio.h>

int arr[10] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0}, n, arri;	

void arr_insert(){ 
	int i;
	printf("삽입할 원소의 인덱스와 그 값을 입력하세요: "); 
	scanf("%d %d", &arri, &n);
	if(arri>=sizeof(arr)/sizeof(int)){
		printf("인덱스 범위가 큽니다!\n\n");
		return; 
	}		
	for(i = sizeof(arr)/sizeof(int)-1; i>arri; i--)
		if(arr[i]==0)
			break;	
	if(arr[i]!=0 && arr[i-1]!=0){
		printf("배열이 모두 꽉찼습니다!\n\n");
		return;
	}					
	for( ; i>=arri; i--)
			arr[i]=arr[i-1];
	arr[arri] = n;
}

void arr_remove(){
	printf("삭제할 원소의 인덱스를 입력하세요: ");
	scanf("%d", &arri);	
	if(arri>=sizeof(arr)/sizeof(int)){
		printf("인덱스 범위가 큽니다!\n\n");
		return; 
	
	}else if(arr[arri]==0){
		printf("이미 없는 원소 입니다!\n\n");
		return;
	}
	for(int i = arri+1; i<sizeof(arr)/sizeof(int); i++)
		arr[i-1] = arr[i];
	arr[sizeof(arr)/sizeof(int) -1] = 0;
}

void main(){
	while(1){
		int cho;
		for(int i = 0; i<sizeof(arr)/sizeof(int); i++)
			printf("%d번 인덱스 값: %d\n", i, arr[i]);
		printf("\n하실 연산을 입력하세요. (1 -> 삽입,  2 -> 삭제,  3 -> 종료)\n");	
		scanf("%d", &cho);
		switch(cho){
			case 1:	arr_insert();	break;
			case 2: arr_remove();	break;
			case 3:	return;	break; 
			default: printf("제대로된 숫자를 입력해 주십시오. /n");	break; 
		}
	} 		
}
