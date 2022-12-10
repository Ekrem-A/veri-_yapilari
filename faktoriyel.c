#include <stdio.h>

/*int faktoriyel(int n){
	
	int sonuc = 1;
	if(n == 0)
		return 1;
	if(n < 0)
		return -1;
	for(int i = n ; i > 0 ; i--  ){
		
		sonuc = sonuc * i;
	}
		return sonuc;
}

int faktoriyel2(int n){
	
	if(n<0)
		return -1;
	if(n == 0)
		return 1;
	return n * fakt2(n-1);
	
	
}*/

int recursivebolme(int x,int y){
	
	if (y == 0)
		return -1;
	if (y > x )
		return 0;
	return 1+recursivebolme(x-y,y);
	
}

int main (){
	
	printf("15/5=%d",recursivebolme(15,5));
	
	return 0;
}