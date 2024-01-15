/*Construa um programa que lê uma string e um caractere e mostre na tela o número de vezes
que este caractere aparece na string.*/

#include <stdio.h>
#include <string.h>
#define TAM 100
int main(void) {
  int i,contCh=0;
  char nome[TAM];
  char Ch;

  printf("Digite uma frase: ");
  gets(nome);
  printf("Digite um caractere: ");
  scanf("%c",&Ch);
  
  int tam = strlen(nome);
  for(i=0;i<tam;i++){
    if(nome[i] == Ch){
      contCh++;
    }
  }printf("A frase '%s' Tem # %d # Caracter '%c'",nome,contCh,Ch);
  return 0;
}