#include <stdio.h>
#include <stdlib.h>
#define LENGHT 10

int top=-1;
int array[LENGHT];


int isEmpty(){
	if(top==-1){
		
		return 1;
	}
	else{
		
		return 0;
	}
	
}

int isFull(){
	if(top>=LENGHT-1){
		return 1;
		
	}
	else{
		return 0;
	}
	
	
}

void push(int x){
	if(isFull()){
		printf("dizi dolu ");
	}
	else{
		array[++top]=x;

	}
	
	
}

void pop(){
	if(isEmpty()){
		
		printf("dizi bos eleman cikaramazsiniz!\n");
		
	}
	else{
		
		top--;
		
	}
	
	
}
void peak(){
	if(isEmpty()){
		
		printf("dizi bos eleman yok");
	}
	else{
		printf("dizinin en tepe elamanı: %d\n",array[top]);
	}
	
	
	
}
void PrintArray(){
	if(isEmpty()){
		
		printf("dizi bos eleman yok!\n");
	}
	else{
		
		for(int i=0;i<=top;i++)
			printf("%d,",array[i]);
		
	}
	
	
}


int main(){
	
	int secim;
	int eleman;
	
	while(1){
		
		printf("*************STACK KULLANIMI***************\n");
		printf("1 eleman ekleme\n");
		printf("2 eleman cıkarma\n");
		printf("3 tepe elemanı goster\n");
		printf("4 diziyi goster\n");
		printf("5 to exit\n");
		
		printf("secimi yapınız!\n ");
		scanf("%d",&secim);
		
		switch(secim){
			
			case 1: 
				printf("eklenecek elemanı giriniz:\n ");
				scanf("%d",&eleman);
				push(eleman);
			break;
			
			case 2:
				peak();
				pop();
			
			break;
			
			case 3:
				peak();
			
			break;
			
			case 4:
				
				PrintArray();
				
			break;
			
			case 5: 
				
				exit(0);
			
			break;
			
		}
		
	}
	
	
	
	
	
	return 0;
}