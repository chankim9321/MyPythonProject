#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>
using namespace std;

int get_parent(int parent[],int vertex){
	if(parent[vertex]==vertex){
		return vertex;
	}
	return vertex = get_parent(parent,parent[vertex]); // 해당 원소가 루트 인덱스를 찾을때 까지 재귀순환
}
void set_union(int parent[],int a,int b){
	a=get_parent(parent,a);
	b=get_parent(parent,b);
	if(a>b) parent[a]=b; // 작은 값울 루트로 설정
	else if(a<b) parent[b]=a;
}
int find_union(int parent[],int a,int b){
	a=get_parent(parent,a);
	b=get_parent(parent,b);
	if(a==b) return 1;	// 두 원소가 같은 집합에 속하면 1을 반환
	else return 0;
}
int main(int argc, char* argv[]){
	int n,m;
	scanf("%d %d",&n,&m); getchar();
	int* union_info=(int*)malloc(sizeof(int)*n+1); // 입력을 1부터 줌으로써 0인덱스는 사용x
	for(int i=1; i<n+1; i++){ // 합집합 정보 배열 초기화
		union_info[i]=i;
	}
	for(int k=0; k<m; k++){
		int proc,a,b;
		queue<char*>result; // 문자열 버퍼 큐
		scanf("%d %d %d",&proc,&a,&b);
		getchar()!
		if(proc==0){ // 합집합 연산이라면 
			set_union(union_info,a,b); // 합집합 연산 수행
		}
		else if(proc==1){
			if(find_union(union_info,a,b){
				result.push("YES");
			}
			else {
				result.push("NO");
			}
		}
	{
	
}
