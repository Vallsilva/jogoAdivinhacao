#include<stdio.h>
#include<math.h>

int main(){
	printf("Escolha o grau de dificuldade, sendo 1 mais facil, 2 medio e 3 dificil. \n");
	int nivel;
	scanf("%d", &nivel);
	if(nivel==1){
	printf("Você tera 10 tentativas para acertar o valor de X, que pode variar de 0 a 20. \n");
	int x=15;
	int numero;
	
	int i;
	for (i=1;i<=10;i++){
		printf("Sua %dª tentativa eh: \n", i);
		scanf("%d", &numero);
		if(numero<x){
			printf("O numero a ser descoberto eh menor. \n");
		}
		if(numero>x){
			printf("O numero a ser descoberto eh maior. \n");
		}
		if(numero==x){
			printf("Parabens, voce acertou! \n");
		}
	}
	printf("Nao foi dessa vez. Tente novamente. \n");
}
	if(nivel==2){
	printf("Você tera 7 tentativas para acertar o valor de X, que pode variar de 0 a 20. \n");
	int x=15;
	int numero;
	
	int i;
	for (i=1;i<=7;i++){
		printf("Sua %dª tentativa eh: \n", i);
		scanf("%d", &numero);
		if(numero<x){
			printf("O numero a ser descoberto eh menor. \n");
		}
		if(numero>x){
			printf("O numero a ser descoberto eh maior. \n");
		}
		if(numero==x){
			printf("Parabens, voce acertou! \n");
		}
	}
	printf("Nao foi dessa vez. Tente novamente. \n");
}
	if(nivel==3){
	printf("Você tera 5 tentativas para acertar o valor de X, que pode variar de 0 a 20. \n");
	int x=15;
	int numero;
	
	int i;
	for (i=1;i<=5;i++){
		printf("Sua %dª tentativa eh: \n", i);
		scanf("%d", &numero);
		if(numero<x){
			printf("O numero a ser descoberto eh menor. \n");
		}
		if(numero>x){
			printf("O numero a ser descoberto eh maior. \n");
		}
		if(numero==x){
			printf("Parabens, voce acertou! \n");
		}
	}
	printf("Nao foi dessa vez. Tente novamente. \n");
}	
return 0;
}
