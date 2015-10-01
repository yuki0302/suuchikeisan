#include <stdio.h>
#include <math.h>

int main(void) {

  float r;
  printf("半径rを入力してください");
  scanf("%f", &r);

  float cir;
  float cirs;
  float ballv;
  float balls;

  cir = 2 * r * M_PI;
  cirs = r * r * M_PI;
  ballv = 4 * M_PI * r * r * r / 3;
  balls = 4 * M_PI * r * r;

  printf( "円周 = %.4f\n", cir );
  printf( "円の面積 = %.4f\n", cirs );
  printf( "円の面積 = %.4f\n", ballv );
  printf( "球の表面積 = %.4f\n", balls );

  return 0;

}
