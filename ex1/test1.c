#include <stdio.h>

int main(void) {

  int a, b, c;
  printf("整数値を3つ入力してください");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  int sum;
  sum = a + b + c;
  printf( "結果 = %d\n", sum );
  return 0;

}
