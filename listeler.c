#include <stdio.h>
#include <stdlib.h>

struct Node {
		
		int data;
		struct Node* Link;
		
	};
	
void PrintList(struct Node* n){
	
	if(n==NULL){
		
		printf("liste bosss!");
		return;
	}
	while(n!=NULL){
		printf("%d==>",n->data);
		n=n->Link;
		
	}
}

int main(){
	
	struct Node* L1 = NULL;
	struct Node* L2 = NULL;
	struct Node* L3 = NULL;
	
	L1=(struct Node*)malloc(sizeof(struct Node));
	L2=(struct Node*)malloc(sizeof(struct Node));
	L3=(struct Node*)malloc(sizeof(struct Node));
	
	L1->data=10;
	L1->Link=L2;
	
	L2->data=15;
	L2->Link=L3;
	
	L3->data=20;
	L3->Link=NULL;
	
	printf("%d",L1->Link->Link->data);
	printf("\n");
	PrintList(L1);
	
	return 0;
}

