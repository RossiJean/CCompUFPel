#include <stdio.h>
#include <string.h>

char vogais[]={'a','e','i','o','u','A','E','I','O','U',};
int tamanho_vogais = sizeof(vogais)/sizeof(vogais[0]);

void mascarar_texto(char texto[]);

int main(){

    char texto[100];
    
    printf("Digite seu texto: ");
    fgets(texto,sizeof(texto),stdin);

    mascarar_texto(texto);

    printf("\n%s", texto);

return 0;
}

void mascarar_texto(char texto[]){
    int tamanho = strlen(texto);
    for(int i = 0; i < tamanho; i++){
        int eh_vogal = 0;
        for(int j = 0; j < tamanho_vogais; j++){
            if(texto[i] == vogais[j]){
                texto[i] = '#';
                eh_vogal = 1;
                break;
            }
        }

    if(eh_vogal == 0){
        if(texto[i] >= 'a' && texto[i] <= 'z'){
            texto[i] = texto[i] -32;
        }else if(texto[i] >= 'A' && texto[i] <= 'Z'){
            texto[i] = texto[i] +32;
        }
    }
    }
}