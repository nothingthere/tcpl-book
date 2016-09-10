/*希尔排序*/

#include <stdio.h>

void shellsort(int v[], int n);
void print_arr(int v[], int n, char msg[]);

int main(int argc, char const *argv[]) {
  int arr[] = {3, 4, 5, 2, 2, 123, 12, 1, 21};
  int count = 9;

  print_arr(arr, count, "原数组");
  shellsort(arr, count);
  print_arr(arr, count, "排序后");

  return 0;
}

void shellsort(int v[], int n) {}

void print_arr(int v[], int n, char msg[]) {
  printf("\n%s：\n", msg);
  int i;
  for (i = 0; i < n; i++) {
    printf(" %d", v[i]);
  }
  printf("\n");
}
