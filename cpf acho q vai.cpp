#include <stdio.h>
int main(){
	
	int cpf[11],digv1,digv2;
int valor,soma;
	
	printf("PROGRAMA VALIDADOR DE CPF");
	
	
	printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[0]);
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[1]);
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[2]);
	
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[3]);
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[4]);
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[5]);
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[6]);
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[7]);
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[8]);
	
	// DIGITO VERIFICADOR 1
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[9]);
	
	// DIGITO VERIFICADOR 2
		printf("DIGITE PRIMEIRO DIGITO:");
	scanf("%d",&cpf[10]);

 soma = (cpf[0]*10 + cpf[1]*9 + cpf[2]*8 + cpf[3]*7 + cpf[4]*6 + cpf[5]*5 + cpf[6]*4 + cpf[7]*3 + cpf[8]*2)*10 % 11;
if (soma == 10) soma = 0;
if (soma != cpf[9]) {
    printf("CPF invalido");
    return 0;
}

soma = (cpf[0]*11 + cpf[1]*10 + cpf[2]*9 + cpf[3]*8 + cpf[4]*7 + cpf[5]*6 + cpf[6]*5 + cpf[7]*4 + cpf[8]*3 + cpf[9]*2)*10 % 11;
if (soma == 10) soma = 0;
if (soma != cpf[10]) {
    printf("CPF invalido");
    return 0;
}

printf("CPF valido");
return 0;

}
