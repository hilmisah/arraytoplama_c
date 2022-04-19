#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayilar[] = {25,35,65,45,14};
	int i;
	int toplam=0;
	for (i=0;i<5;i++)
	{ 
		toplam=toplam+sayilar[i];
			
	}
	 printf("toplam: %d", toplam);
	
	
	return 0;
}
