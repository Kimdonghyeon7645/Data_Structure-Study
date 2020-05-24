#include<stdio.h>
#include<windows.h> 
#define Table_Max 10 

int Table_is_Full = 0;
int save_index = -1;
int over_flow_check(int table[])
{
// 오버플로우 처리기법 : 개방주소 > 선형주소법 사용 
	int searching_index = save_index+1;
    while(table[searching_index] != 0){   
	// 두평이의 조언, != 는 비교연산자지만, =!는 =(단순대입연산자)와 !(NOT연산자) 가 된다.
	// 학동 쌤의 명언, 조건문에서 (변수 <연산자> 상수)와 같이 하지말고, (상수 <연산자> 변수). (연산자 잘못 쓰이면 에러 나게) 
		if(searching_index == save_index){
			Table_is_Full = 1; 
			return -1;
		}else if(searching_index > 9)	searching_index = -1;  // 차피 아래서 ++ 됌 
		searching_index++;
	}
	return searching_index; 	
}

int hashing_fuc(int table[], int key)
{
// 해싱 함수 : 제산 함수 사용 
	save_index = key % Table_Max;
	if(table[save_index] != 0)	save_index = over_flow_check(table);
	if(Table_is_Full == 0)	table[save_index] = key;
}

void show_table(int table[])
{
	printf("※해시 테이블의 상태 \n\n(칸위의 숫자는 주소 값) \n<상태>");
	if(Table_is_Full == 1){
		printf(" 해시 테이블이 가득찼습니다! (삽입불가) \n");
	}else if(save_index != -1){
	    printf(" 들어간 값: %d\n", table[save_index]);
	}else{
		printf(" 맨 처음 시작 단계입니다!\n");
	}
	printf("┌─ 0─┬─ 1─┬─ 2─┬─ 3─┬─ 4─┬─ 5─┬─ 6─┬─ 7─┬─ 8─┬─ 9─┐\n");
	for(int index = 0; index < 10; index++)
	{
		printf("┃ ");
		if(table[index] != 0)    
		    printf("%3d", table[index]);
		else	
		    printf("   ");
	}
	printf("┃\n");
	printf("└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘\n"); 
}

void main()
{
	int key;
    int hash_table[Table_Max] = {0};
	while(1){
	    show_table(hash_table);	
		printf("키를 입력하세요 : ");
		scanf("%d", &key);
		hashing_fuc(hash_table, key);
	    system("cls");
    }
}
