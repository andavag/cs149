#include <stdio.h>
#include <math.h>

int main(void) {
   int userNum;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   printf("You entered: %d\n", userNum);
   printf("%d squared is %.0f\n", userNum, pow(userNum, 2));
   printf("And %d cubed is %.0f!!\n", userNum, pow(userNum, 3));
   printf("Enter another integer:\n");
   int userNum2;
   scanf("%d", &userNum2);
   printf("%d + %d is %d\n", userNum, userNum2, userNum + userNum2);
   printf("%d * %d is %d\n", userNum, userNum2, userNum * userNum2);
   return 0;
}