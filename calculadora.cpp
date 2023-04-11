#include <stdio.h>

int main() {
	char operador;
	int num1, num2, resultado;
	
	printf (" Digita uma operação matemática (+,-,*,/): ");
	scanf ("%c", &operador);
	
		printf ("Digita o primeiro número");
	scanf ("%d", &num1);	
	
		printf ("Digita o segundo número");
	scanf ("%d", &num2);
	
	switch (operador)	{
		case '+':
			resultado = num1 + num2;
			
		break;
		
			case '-':
			resultado = num1 - num2;
			
		break;
		
		
			case '*':
			resultado = num1 * num2;
			
		break;
		
		
			case '/':
			resultado = num1 / num2;
			
		break;
		
		default:
			printf ("Operaçao inválida, escreve direito da próxima!");
			return 0;
					
	}
	printf ("%d %c %d = %d\n" , num1, operador, num2, resultado );
	
	return 0;
}
