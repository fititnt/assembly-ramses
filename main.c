/* 
 * File:   main.c
 * Author: fititnt
 *
 * Created on 5 de Setembro de 2014, 15:25
 */

#include <stdio.h>
#include <stdlib.h>

//char LUCRO[16];
//unsigned char VISITAS[31];
char TOTAL;

//char LUCRO[] = { 5, 7, 9, -1, -2, -3};
//unsigned char VISITAS[] = { 4, 2, 4, 0, 4};
int LUCRO[] = { 5, 7, 9, -1, -2, -3};
int VISITAS[] = { 4, 2, 4, 0, 4};

/*
 * 
 */
int main(int argc, char** argv) {
  int i = 1, soma = 0;
  while (i <= VISITAS[0]) {
    printf("Visita: %d Cidade: %d Lucro Atual: %d\n", i, VISITAS[i], LUCRO[VISITAS[i]]);
    soma += LUCRO[VISITAS[i]];
    i++;
  }

  printf("Total: %d\n", soma);
  return (EXIT_SUCCESS);
}

