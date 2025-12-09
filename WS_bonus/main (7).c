#include <stdio.h>
#include <math.h>

int main(void) {
   double x;
   double y;
   double z;

   scanf("%lf %lf %lf", &x, &y, &z);

   printf("%.2lf %.2lf %.2lf %0.2lf\n", pow(x, z), pow(x, pow(y, 2)), fabs(y), pow(pow(x * y, z), 0.5));
   return 0;
}
