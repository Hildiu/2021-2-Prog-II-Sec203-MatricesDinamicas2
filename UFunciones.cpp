//
// Created by MARIA HILDA BERMEJO RIOS on 10/19/21.
//

#include "UFunciones.h"

TDato   * * dimensionarMatriz(int filas, int  col)
{
  TDato **pMat = new  TDato *[filas];
  for(int f=0; f<filas; f++)
    pMat[f] = new TDato[col];
  return pMat;
}


void llenaDatos(TDato **mat, int filas, int col)
{
  for(int f=0; f<filas; f++)
    for(int c=0; c<col; c++)
      mat[f][c] = rand() % 99 +1;
}


void imprimirMatriz(TDato **mat,int  filas, int col)
{
  cout << "\n";
  for(int f=0; f<filas; f++)
  {
    for(int c=0; c<col; c++)
      cout << setw(6) << mat[f][c];
    cout << "\n";
  }
}

TDato hallaElMenor(TDato  **mat, int filas,int col)
{
  TDato elMenor= mat[0][0];

  for(int f=0; f<filas; f++)
    for(int c=0; c<col; c++)
      if(mat[f][c]<elMenor)
        elMenor = mat[f][c];
  return elMenor;
}

TDato sumarDiagonal( TDato **mat, int filas,int col)
{
  TDato suma=0;
  for(int f=0; f<filas;f++)
    suma = suma + mat[f][f];
  return suma;
}


TDato sumarTrianguloSuperior( TDato **mat, int filas)
{
  TDato suma=0;
  for(int f=0; f<filas-1; f++)
    for(int c=f+1; c<filas;c++)
      suma = suma + mat[f][c];
  return  suma;
}