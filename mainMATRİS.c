#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int dizi[7][7];
	int i,j;
	for(i=0;i<7;i++){
		for(j=0;j<7;j++)
			if(i==j)
	dizi[i][j]=1;
	else if(i+j==6)
	dizi[i][j]=1;
	else
	
	dizi[i][j]=0;
	}	
	

	for(i=0;i<7;i++){
		for(j=0;j<7;j++)
		printf("%d ",dizi[i][j]);
		printf("\n");
	}

	return 0;
}