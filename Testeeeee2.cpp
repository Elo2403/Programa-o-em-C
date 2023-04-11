#include <stdio.h>

int main () {
    int nota = 0;
    char resp;
	
    printf("Leia o trecho a seguir e assinale a alternativa CORRETA. \"Trata-se de um componente essencial, não apenas nos computadores, mas também em equipamentos como smartphones ou tablets. É componente eletrônico que armazena dados de forma temporária, durante a execução do sistema operativo, para que possam ser rapidamente acedidos pelo processador. Esta é considerada a memória principal do sistema e, além disso, as velocidades de leitura e escrita são superiores em relação a outro tipo de armazenamento\"\n");
    printf("O trecho se refere a:\n");
    printf("A -> Memória ROM\n");
    printf("B -> Disco rígido\n");
    printf("C -> Memória RAM\n");
	
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

    printf("No Windows 7, o atalho do teclado Tecla do logotipo do Windows + Home tem a função de:\n");
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
    
    
    
	printf ("Nas opções representadas a seguir, qual das opções refere-se à função de um sistema operacional\n");
     printf ("instalado em um computador ou dispositivo:\n");
	printf ("A -> Exclusivamente permitir o acesso à rede INTERNET\n") ;
		printf ("B -> Software cujo único objetivo e gerar uma interface de comunicação com o usuário\n") ;
			printf ("C -> Principal software do computador, pois possibilita o funcionamento e utilização dos dispositivos acoplados e demais softwares\n") ;
		
				
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
     printf ("após selecionar um texto ou parte dele, deve-se proceder de que forma:\n");
	printf ("A -> Manter pressionada a tecla CTRL e ir selecionando com o mouse as partes de texto\n") ;
		printf ("B -> Manter pressionada a tecla SHIFT e ir selecionando com o mouse as partes de texto\n") ;
			printf ("C -> Pressionar a ferramenta PINCEL DE FORMATAÇÃO na barra de ferramentas e ir selecionando com o mouse as partes de texto\n") ;
	
	
	
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
			
			
			
printf ("O que é Um monitor?\n");
 
	printf ("A -> Um saco de batata\n") ;
		printf ("B -> é um dispositivo de saída do computador, cuja função é transmitir informação ao utilizador através da imagem.\n") ;
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
		printf ("B -> é usada para indicar ao computador que o usuário terminou uma cadeia de caracteres\n") ;
			printf ("C -> para dar espaço entre as palavras\n") ;
		
				
					
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
			
			
			
printf ("O que é uma placa mae?\n");
 
	printf ("A -> É uma peça central responsável por conectar e interligar todos os componentes\n") ;
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
 
	printf ("A -> é a parte que no permite interagir com os objetos que aparecem na tela através de um cursor que podemos ver no monitor.\n") ;
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
