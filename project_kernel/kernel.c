#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
    printf("Loading Assets.................\n");
    printf("\n.............................\n");
    printf("\n.............................\n");
    printf("\n.............................\n");
    printf("\n.............................\n");
    printf("\n.............................\n");
    printf("\nAssets Loaded\n");
  printf("\nElder Kernel V0.0.1\n");
  printf("\nTESTING. Please be careful!\n")
  char str[100];
  int age;
   printf( "What is your age?");
   scanf("%d", &age );
   printf("\nYou entered %d.\n", age);
   if (age < 12) {
       printf("\nYou must be at least 12 to use One.\n");
       printf("\nOf course, you can lie about your age, but please don't.\n");
       printf("\nBecause you are not 12 or older, cannot continue running One.\n");
       abort;
   }
   else {
       printf("Welcome to Elder.");
   }
   return 0;
}
