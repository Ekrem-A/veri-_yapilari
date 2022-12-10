#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int diziboyut = 4;
	int *dizi;
	int *ydizi;
	
	dizi=(int *)malloc(sizeof(int)*diziboyut);
	for (int i = 0 ; i < 10 ; i++){
		if(diziboyut == i){
			ydizi=(int *)malloc(sizeof(int)*diziboyut*2);
			for(int j = 0; j < i ; j++){
				ydizi[j]=dizi[j];
			}
			//free = dizi;
			dizi = ydizi;
			diziboyut = diziboyut*2;
			printf("\n dizinin boyutu arttirildi %d",diziboyut);
		}
	printf("dizinin %d. elemanını giriniz: ", i+1);
	scanf("%d   ",&dizi[i]);
	}
	
	return 0;
}