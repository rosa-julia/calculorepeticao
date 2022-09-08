#include <stdio.h>
int main(){
	float nota1[3], nota2[3], media[3];
	int i;
	
	for(i=0; i<3; i++){
	printf("Digite a nota\n");
	scanf("%f",&nota1[i]);		
	}
	for(i=0;i<3;i++){
		printf("Nota: %.2f\n", nota1[i]);
	}
	
	for(i=0;i<3;i++){
	printf("Digite a nota 2\n");
	scanf("%f",&nota2[i]);
	}
	for(i=0;i<3;i++){
		printf("Nota:%.2f\n",nota2[i]);
	}
}
