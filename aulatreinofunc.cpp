#include <stdio.h>

void quad(int a, int b, char carac){

	for (int i=0;i<a;i++){
		printf("\n");
		for (int j=0;j<b;j++){
			printf("%c", carac);
		}
	}
}
