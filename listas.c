#include <stdio.h>
#include <stdlib.h>

const unsigned MAX = 10;
int l[MAX], pos = 0;

void inserir(int elemento);
int buscar(int elemento);
void remover(int elemento);

int obter(int indice);
int tamanho();
void imprimir();
void apagar();

int main(void) {
    inserir(5);
    inserir(10);
    inserir(5); // Teste de elemento duplicado
    imprimir(); // Deve mostrar: 5 10

    remover(10);
    imprimir(); // Deve mostrar: 5

    printf("Elemento na posição 0: %d\n", obter(0)); // Deve mostrar: 5

    apagar();
    imprimir(); // Deve mostrar: Lista vazia.

    return 0;
}


void inserir(int elemento){
  int i, p;
  if (pos < MAX){
    for (i = 0; i < pos; i++) {
      if (l[i] == elemento){
        printf("Não é possível inserir o elemento pois já tem um igual.\n");
        return;
      }
    }
    l[pos++] = elemento;
       
  }
  else {
    printf("Não foi possível inserir %d. Lista cheia.\n",elemento);
  }
}


int buscar(int elemento){
  for (int i = 0 ; i < pos ; i++){
	if (l[i] == elemento)
  	return i;
  }
  return -1;
}

void remover(int elemento){
  int p;
  
  do{
    p = buscar(elemento);
 
    if (p == -1)
	    return;
 
    for (int i = p ; i < pos -1; i++)
	    l[i] = l[i+1];
    pos--;
  } while (p != -1);
  
}

int obter(int indice){
  if (indice < 0 || indice >= pos) {
	  printf("Indice %d fora dos limites da Lista.\n", indice);
	  exit(1);
  }
  return l[indice];
}

int tamanho(){
  return pos;
}

void imprimir(){
  for (int i = 0 ; i < pos ; i++)
	  printf("%d ",l[i]);
    printf("\n");
}

void apagar(){
  pos = 0;
}




