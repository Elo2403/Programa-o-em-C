#include <stdio.h>

int main () {
    int nota = 0;
    char resp;
	
    printf("Leia o trecho a seguir e assinale a alternativa CORRETA. \"Trata-se de um componente essencial, n�o apenas nos computadores, mas tamb�m em equipamentos como smartphones ou tablets. � componente eletr�nico que armazena dados de forma tempor�ria, durante a execu��o do sistema operativo, para que possam ser rapidamente acedidos pelo processador. Esta � considerada a mem�ria principal do sistema e, al�m disso, as velocidades de leitura e escrita s�o superiores em rela��o a outro tipo de armazenamento\"\n");
    printf("O trecho se refere a:\n");
    printf("A -> Mem�ria ROM\n");
    printf("B -> Disco r�gido\n");
    printf("C -> Mem�ria RAM\n");
	
    resp = getchar();
    getchar();
	
    switch (resp) {
        case 'C':
        case 'c':
            nota++;
            break;
        default:
            break;
    }

    printf("No Windows 7, o atalho do teclado Tecla do logotipo do Windows + Home tem a fun��o de:\n");
    printf("A -> Minimizar todas as janelas, menos a ativa\n");
    printf("B -> Abrir a pasta de Downloads\n");
    printf("C -> Enviar comando para impressora\n");
	
    resp = getchar();
    getchar();
	
    switch (resp) {
        case 'A':
        case 'a':
            nota++;
            break;
        default:
            break;
    }
    
    
    
	printf ("Nas op��es representadas a seguir, qual das op��es refere-se � fun��o de um sistema operacional\n");
     printf ("instalado em um computador ou dispositivo:\n");
	printf ("A -> Exclusivamente permitir o acesso � rede INTERNET\n") ;
		printf ("B -> Software cujo �nico objetivo e gerar uma interface de comunica��o com o usu�rio\n") ;
			printf ("C -> Principal software do computador, pois possibilita o funcionamento e utiliza��o dos dispositivos acoplados e demais softwares\n") ;
		
				
		resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'C':
				case 'c':
				nota++;
				break;
				default:
				break; 
			}
			
			
			

printf ("Para selecionar partes ALTERNADAS (palavras, frases, letras) usando mouse e teclado de um texto do Microsoft Word\n");
     printf ("ap�s selecionar um texto ou parte dele, deve-se proceder de que forma:\n");
	printf ("A -> Manter pressionada a tecla CTRL e ir selecionando com o mouse as partes de texto\n") ;
		printf ("B -> Manter pressionada a tecla SHIFT e ir selecionando com o mouse as partes de texto\n") ;
			printf ("C -> Pressionar a ferramenta PINCEL DE FORMATA��O na barra de ferramentas e ir selecionando com o mouse as partes de texto\n") ;
	
	
	
		resp = getchar ();
			getchar ();
			
			switch (resp) {
				
				case 'A':
				case 'a':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
printf ("O que � Um monitor?\n");
 
	printf ("A -> Um saco de batata\n") ;
		printf ("B -> � um dispositivo de sa�da do computador, cuja fun��o � transmitir informa��o ao utilizador atrav�s da imagem.\n") ;
			printf ("C -> um fini de morango\n") ;
		
					resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'B':
				case 'b':
				nota++;
				break;
				default:
				break; 
			}


printf ("pra q serve um pend drive\n");
 
	printf ("A -> guardar arquivos\n") ;
		printf ("B -> Para jogar\n") ;
			printf ("C -> para ouvir musuca\n") ;
		
			
				resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'A':
				case 'a':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
			
			
			

printf ("pra que serve a tecla enter?\n");
 
	printf ("A -> para desligar o pc\n") ;
		printf ("B -> � usada para indicar ao computador que o usu�rio terminou uma cadeia de caracteres\n") ;
			printf ("C -> para dar espa�o entre as palavras\n") ;
		
				
					
					resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'B':
				case 'b':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
printf ("O que � uma placa mae?\n");
 
	printf ("A -> � uma pe�a central respons�vel por conectar e interligar todos os componentes\n") ;
		printf ("B -> um ventilador\n") ;
			printf ("C -> usado para decorar o pc\n") ;
		
					resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'A':
				case 'a':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
			
printf ("O mouse serve pra que?\n");
 
	printf ("A -> � a parte que no permite interagir com os objetos que aparecem na tela atrav�s de um cursor que podemos ver no monitor.\n") ;
		printf ("B -> baixar aplicativos\n" ) ;
			printf ("C -> para acessar um site\n") ;
		
					resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'A':
				case 'a':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
			
	
    printf("Sua nota eh %d.\n", nota);
	
    return 0;
}
