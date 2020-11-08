#include <stdio.h>

/* funcao que retorna o quadrado do primeiro parametro e coloca no endereco
   apontado pelo segundo parametro o valor do cubo do primeiro parametro    */
int funcaoQuadradoCubo(int x, int* y){
	*y = x*x*x;
	return x*x;
}

int main(){
  int a = 3;
  int cubo;
  int quadrado = funcaoQuadradoCubo(a, &cubo);
  printf("valor: %i; valor ao quadrado: %i; valor ao cubo: %i\n", a, quadrado, cubo);
  return 0;
}