#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>
using namespace std;
#define MAX_FRIEND 20

int get_parent(int parent[], int vertex){
	if(parent[vertex] == vertex){
		return vertex;	
	}
	return parent[vertex] = get_parent(parent,parent[vertex])
}

void set_union(int parent[],int a, int b){
	a=get_parent(parent,a);
	b=get_parent(parent,b);
	if(a>b) parent[a]=b;
	else if(a<b) parent[b]=a;
}
int find_union(int parent[],int a,int b){
	a=get_parent(parent,a);
	b=get_parent(parent,b);
	if(a==b) return 1;
	else return 0;
}

int main(int argc, char* argc[]){
	int test_case,relation;
	scanf("%d",&test_case); getchar();
	scanf("%d",&relation); getchar();
	char* friend=(char**)malloc(sizeof(char**)); // 수정 요망
	for(int i=0; i<test_case; i++){
		for(int j=0; j<realtion; j++){
			char *input=(char)malloc(sizeof(char)*40);
			fgets(input,sizeof(char)*40,stdin);
			input[strlen(input)-1]='\0';
			queue<char*>name_buf;
			char* p=input;
			while(p!=NULL){
				p=strtok(input," "); // 공백을 기준으로 슬라이싱
			}
		}
	}
}













