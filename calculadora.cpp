#include <stdio.h>

int main() {
	char operador;
	int num1, num2, resultado;
	
	printf (" Digita uma opera��o matem�tica (+,-,*,/): ");
	scanf ("%c", &operador);
	
		printf ("Digita o primeiro n�mero");
	scanf ("%d", &num1);	
	
		printf ("Digita o segundo n�mero");
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
			printf ("Opera�ao inv�lida, escreve direito da pr�xima!");
			return 0;
					
	}
	printf ("%d %c %d = %d\n" , num1, operador, num2, resultado );
	
	return 0;
}
