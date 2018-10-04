#include <stdio.h>
#include "funcs.h"

int main (){
	int a, b, c;
	int op = 0;
	printf("escolha uma das operacoes:\n 1 - fatorial\n 2 - potência\n");
	scanf("%c", &op);
	switch (op) {
	case '1':
		printf("escolha um numero para a fatorial\n");
		scanf("%d", &a);
		printf("seu resultado e:%d\n", fat(a));
	break;
	
	case '2':   
		printf("escolha dois numeros para a exponencial\n");
		scanf("%d""%d", &b, &c);
		printf("seu resultado e:%d\n", exp(b, c));
	break;

	default:
        	printf("São 2 opçoes\n");
	break;
	}
return 0;
}
