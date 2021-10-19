//
// Created by MARIA HILDA BERMEJO RIOS on 10/19/21.
//

#ifndef PROG_II_SEC_203_19_DE_OCTUBRE_UFUNCIONES_H
#define PROG_II_SEC_203_19_DE_OCTUBRE_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace  std;

using TDato = unsigned long int;

TDato   * * dimensionarMatriz(int filas, int  col);
void llenaDatos(TDato **mat, int filas, int col);
void imprimirMatriz(TDato **mat,int  filas, int col);
TDato hallaElMenor(TDato  **mat, int filas,int col);
TDato sumarDiagonal( TDato **mat, int filas,int col);
TDato sumarTrianguloSuperior( TDato **mat, int filas);

#endif //PROG_II_SEC_203_19_DE_OCTUBRE_UFUNCIONES_H
