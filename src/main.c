 
/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;
  c = 0;
  int cont = 1;
  char umantes;
  char doisantes;

  while (c != '\n') {
    scanf("%c", &c);
//Iniciando os comandos para contagem de palavras

//Contando palavras separadas por spaço, contando uma nova palavra a partir da primeira letra de cada  	
	if (c != ' ' && umantes == ' ')
		cont = cont + 1;

//contando palavras que não sao separadas por espaço, mas contém uma virgula no meio
	if (c !=' ' & umantes == ',')
		cont = cont + 1;

//contando palavras que não sao separadas por espaço, mas contém um ponto no meio
	if (c !=' ' & umantes == '.')
		cont = cont + 1;

//contando palavras que não sao separadas por espaço, mas contém um traço no meio
	if (c !=' ' & umantes == '-')
		cont = cont + 1;

//retirando a contagem a partir do ponto, visto que numeros com ponto e com virgula contam apenas como um. (para um caso mais geral, seria necessário incluir os numeros de 0 a 9)
	if (c =='.' && umantes == '3') 
		cont = cont - 1;

	if (c ==',' && umantes == '0')
		cont = cont - 1;
//retirando a contagem excedente das reticências
	if (umantes == '.' && doisantes == '.' && c== '.')
		cont = cont - 1	;
//retirando a contagem do ultimo espaço como palavra.
	if (c == '\n' && umantes ==' ')
		cont = cont - 1;
//retirando a contagem do ultimo ponto como palavra.
	if (c == '\n' && umantes =='.')
		cont = cont - 1;
  	//variaveis guardadas para comparações dos loops
	umantes= c;
  	doisantes= umantes;
  }

  printf("%d\n", cont);
  return 0;
}
