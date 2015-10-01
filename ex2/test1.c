#include <stdio.h>
#include <math.h>

int main(void) {
  double deta[9]={0, 10, 20, 30, 40, 50, 60, 70, 80};
  int i, sum;
  sum=0;
  i=0;
  while (i<9){
  	printf("---------------------------------\n");
  	printf("θ=%.0f°のsinは%f\n", deta[i], sin(deta[i]));
  	printf("θ=%.0f°のcosは%f\n", deta[i], cos(deta[i]));
  	printf("θ=%.0f°のtanは%f\n", deta[i], tan(deta[i]));
  	i=i+1;
  }

  return(0);
}
