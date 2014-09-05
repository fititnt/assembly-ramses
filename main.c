/* 
 * File:   main.c
 * Author: fititnt
 *
 * Created on 5 de Setembro de 2014, 15:25
 */

#include <stdio.h>
#include <stdlib.h>

// Lucro/prejupizo de cada cidade de referencia
//char LUCRO[16]; 
// VISITAS[0]: Total de visitas; Demais visitas realizadas 
//unsigned char VISITAS[31];
char TOTAL;

// Testes
// 0. Resultado 10
//char LUCRO[] = { 5, 7, 9, -1, -2, -3};
//unsigned char VISITAS[] = { 4, 2, 4, 0, 4};

// 1. Resultado 10
//char LUCRO[] = {5, 7, 9, -1, -2, -3};
//unsigned char VISITAS[] = {4, 2, 4, 0, 4};

// 2. Resultado 172
char LUCRO[] = {1,-1,2,3,5,7,-11,13,17,19,-23,29,31,-3,-1,-2};
unsigned char VISITAS[] = {30,0,2,4,6,8,10,12,14,1,3,5,7,9,11,13,15,15,13,12,11,10,1,2,3,4,5,6,7,8,9};

// 3. Resultado 0
//char LUCRO[] = {1, 1, 2, 2, 3, 3};
//unsigned char VISITAS[] = {0, 1, 1, 1};

// 4. Resultado 52
//char LUCRO[] = {1,2,3,4,5,6,7,-1,-2,-3,-4,-5,-6,-7,11,53};
//unsigned char VISITAS[] = {13,0,1,2,3,4,8,9,10,11,15,1,7,9,5};

int calculo() {
  int i = 1, soma = 0;

  while (i <= VISITAS[0]) {
    printf("Visita: %d Cidade: %d Lucro Atual: %d\n", i, VISITAS[i], LUCRO[VISITAS[i]]);
    soma += LUCRO[VISITAS[i]];
    i++;
  }
  return soma;
}

/*
 * 
 */
int main(int argc, char** argv) {
  TOTAL = calculo();

  printf("Total: %d\n", TOTAL);
  return (0);
}

