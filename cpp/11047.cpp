#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char* argv[]){
    int coin, price;
    scanf("%d %d",&coin,&price); getchar();
    int* price_list=(int*)malloc(sizeof(int)*coin); // 입력된 코인의 수만큼 배열 크기 할당
	// 동전의 종류를 저장하는 배열 초기화 (동적할당사용)
    for(int i=0; i<coin; i++){
        scanf("%d",&price_list[i]); // 입력받아서 코인의 가격을 기록하는 배열에 넣기
        getchar(); // 입력 버퍼에 입력된 줄 바꿈 문자를 제거
        // printf("%d -- ",price_list[i]);
    }
	int used_coin=0;
	for(int k=coin-1; k>=0; k--){
		int greedy=price/price_list[k];
		if(greedy!=0){ // 큰 수부터 나눈 값이 0이 아니라면 
			used_coin+=greedy; // 나누어서 나온값을 사용 코인에 더해준다.
			price-=(price_list[k]*greedy); // 현재 코인과 사용해야할 갯수를 총 금액에서 뺴준다.
			if(price==0) break; // 총 금액이 0원이 된다면 반복문 종료
		}
	}
	free(price_list);
	printf("%d\n",used_coin);
	return 0;
}
