#include <stdio.h>
#include <stdlib.h>

struct Node {
		int data;
		struct Node* Link;
		
	};
	struct Node* root=NULL;
void PrintList(){
	
	if(root==NULL){
		
		printf("liste bosss!");
		return;
	}
	struct Node * n;
	n=root;
	while(n!=NULL){
		printf("%d==>",n->data);
		n=n->Link;
		
	}
}

void ListeyeEkle(){
	
	struct Node *temp =NULL;
	
	temp=(struct Node*)malloc(sizeof(struct Node));
	
	printf("liste elemaninin datasini giriniz!");
	scanf("%d",&temp->data);
	
	temp->Link=NULL;
	
	if(root!=NULL)
	{
		
		root=temp;
		
	}
	
	else
	{
		
		struct Node* p;
		p=root;
		while(p->Link!=NULL)
		{
			p=p->Link;
		}
		
		p->Link=temp;
		
		
	}
	
}
int LenghtList(){
	int count=0;
	if(root==NULL)
		
		return count;
		struct Node* temp;
		temp=root;
		while(temp!=NULL){
			temp=temp->Link;
			count++;
			
		}
	return count;
	
	}
	
void ArayaEkle(){
	int count =1;
	int n;
	int len=LenghtList;
	printf("kacinci elemandan sonra deger ekleyeceksiniz: \n");
	scanf("%d",&n);
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(n>len){
		printf("liste boyutu fazla!");
		return;
	}
	if(n==len){
		printf("git sola ekle");
	}
	if(n==1){
		printf("root degismeli");
		return;
		
	}
	struct Node * p;
	struct Node* temp=NULL;
	p = root;
	while(count<n){
		
		p=p->Link;
		
	}
	temp->data=100;
	temp->Link=P->Link;
	p->Link=temp;
}
int main(){
	
	while(1){
		
		int eleman;
		int ch;
		
		printf("\n1-eleman ekle\n");
		printf("2-listeyi yazdir\n");
		printf("3-liste boyutu\n");
		printf("araya ekle\n");
		printf("5-exit");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				ListeyeEkle();
			break;
			case 2:
				PrintList();
			
			
			break;
			case 3:
				printf("liste boyutu =%d",LenghtList());
			
			break;
			case 4:
				
				ArayaEkle();
				
			break;
			
			case 5:
			
				return 0;
		}

	}
	return 0;
}

