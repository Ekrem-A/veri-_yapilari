#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10

int stack[BOYUT];
int top=-1;


int isFull(){
	
	if (top >= BOYUT-1){
			
		return 1;
	}	
		return 0;
}

int isEmpty(){
	if(top == -1){
		
		return 1;
	}
	return 0;
	
}

void push(int x){
	
	if(isFull()){
		
		printf("stack dolu !!");
		
	}
	else {
		
		stack[++top]=x;
	}
	
	/*top++;
	stack[top]=y;*/
		
}


void peak(){
   if (isEmpty()){
       
	   printf("\nStack bos ");
   }
   else
   {
       printf("\nStack en tepede =%d\n",stack[top]);
   }
       
}


void pop(){
	
	if (isEmpty()){
		
		printf("eleman cikaramazsiniz!!! \n");
		
	}else{
		top--;
		
		
	}
	
}

void printStack(){
	
	if(isEmpty()){
		
		printf("stack bos!!");
		
	}else{
		
		for(int i=0; i<=top;i++)
			
		printf("%d ==> ",stack[i]);
		
	}
	printf("\n");
}

int main(){
	
	int secim,eleman;
		
	while (1) {
		
		printf("stack eleman ekleme=1 \n");
		printf("stack eleman cikarma=2 \n");
		printf("elemani goster=3 \n");
		printf("elemanlari yazdir=4 \n");
		printf("cikis yapmak icin=5 \n");
		
	
		printf("bir secim yapiniz:  ");
		scanf("%d",&secim);
	
		switch (secim){
		
			case 1:
		
				printf("eklenecek elemani giriniz: ");
				scanf("%d",&eleman);
				push(eleman);
		
				break;
		
			case 2:
			
				peak();
				pop();
				printf("cikan elaman : %d",eleman);
				break;
		
			case 3:
			
				peak();
				break;
		
			case 4:
			
				printStack();
				break;
			
			
			case 5:
			
				exit(0);
				break;
		}
	}
		
	return 0;
}