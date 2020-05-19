#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float asmm,wirtlen,practive;
	printf("\nNHap Asm ");
	scanf("%f",&asmm);
	printf("\nNHap wirtlen ");
	scanf("%f",&wirtlen);
	printf("\nNHap practive ");
	scanf("%f",&practive);
		if(asmm>=4 && asmm<10)
		printf("\nBan da pass qua mon asmm");
		else if(asmm<4 && asmm>0)
		printf("\nToach roi");
		if(wirtlen>=40 && wirtlen<100)
		printf("\nBan da pass qua mon wirtlen");
		else if(wirtlen <40 && wirtlen >0)
		printf("\nToach roi");
		if(practive>=6 && asmm<15)
		printf("\nBan da pass qua mon practive");
		else if(practive <6 && practive>0)
		printf("\nToach roi");
	return 0;

}
