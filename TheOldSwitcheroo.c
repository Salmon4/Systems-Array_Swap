#include <stdio.h>
#include <stdlib.h>
int main() {
  srand( time(NULL) );
  //int randNum = rand();
  int arr[10];
  int i;
  for (i = 0; i < 10; i++){
    arr[i] = rand();
  }
  arr[9] = 0;

  printf("First array\n");
  int k;
  for (k = 0; k < 10; k++){
    printf("%d\n", arr[k]);
  }


  int *pointer = arr+9;
  int arr2[10];
  int *pointer2 = arr2;
  int n;
  for (n = 0; n < 10; n++){
    *pointer2 = *pointer;
    *pointer2++;
    *pointer--;
  }

  printf("\nSecond array\n");
  int o;
  for (o = 0; o < 10; o++){
    printf("%d\n", arr2[o]);
  }
}
