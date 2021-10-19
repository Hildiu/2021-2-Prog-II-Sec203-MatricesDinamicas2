#include "UFunciones.h"

int main()
{
  int filas, col;
  TDato  * * mat = nullptr;

  srand(time(nullptr));
  cout << "Numero de filas: ";
  cin >> filas;
  cout << "Numero de columnas : ";
  cin >> col;
  mat = dimensionarMatriz(filas,col);
  llenaDatos(mat,filas,col);
  imprimirMatriz(mat, filas, col);
  cout << "El dato mas pequenno es : " << hallaElMenor(mat, filas, col) << "\n";
  cout << "La suma de los elementos de la diagonal es: " << sumarDiagonal(mat,filas,col) << "\n";
  cout << "Suma de los elementos ubicados por encima de la diagonal : " << sumarTrianguloSuperior(mat,filas) <<"\n";
  //---- liberamos memoria
  for(int f=0; f<filas; f++)
    delete   []mat[f];
  delete []mat;
  mat = nullptr;
  return 0;
}
