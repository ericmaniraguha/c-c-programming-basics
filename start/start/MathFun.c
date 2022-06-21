#include <stdio.h>
#include <math.h>

int main()
{
  double A = sqrt(9);
  double B = pow(2, 4);
  int C = round(3.14);
  int D = ceil(152.2);
  int E = floor(3.999);
  double F = fabs(-1000);
  double G = log(3);
  double H = sin(45);
  double I = cos(45);

  double J = tan(45);

  printf("\nSquare Function => %lf ", A);
  printf("\nPower function => %lf \n", B);
  printf("\nRound Function => %d ", C);
  printf("\nCeil function => %d \n", D);
  printf("\nFloor Function => %d ", E);
  printf("\nAbsolute function => %lf \n", F);

  printf("\nLog function => %lf \n", G);
  printf("\nSin Function => %lf ", H);
  printf("\nCos function => %lf \n", I);
  printf("\ntan function => %lf \n", J);

  return 0;
}