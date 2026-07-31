#include <stdio.h>

int eh_palindromo(char texto[]);

int main(){
	char texto[50];

	printf("Informe uma palavra: ");
    scanf(" %[^\n]", texto);

	if(eh_palindromo(texto)){
		printf("%s é um palíndromo ",texto);
	}else{
		printf("%s não é um palíndromo :( ",texto);
	}

	return 0;

}

int eh_palindromo(char texto[]){
	int tamanho = 0;

	while(texto[tamanho] != '\0'){
		tamanho++;
	}

	for(int i = 0; i < tamanho / 2; i++){
		if(texto[i] != texto[tamanho -1 -i]){
			return 0;
		}
	}
	return 1;
}
