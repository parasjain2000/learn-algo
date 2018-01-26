#include <stdio.h>

int main () {
  int x = -1024;

  int num = x;
  int rev = 0;
  int neg = 1;
  int prev = 0;

  if (x < 0) {
    neg = -1;
    x = -x;
  }

  //prev = x % 10;

  while (x != 0) {
    int curr = x %10;

    rev = (rev *10) + curr;

    if (((rev - curr)/10) != prev)
    {
      return 0;
    }
    prev = rev;
    x = x / 10;
  }

  //return (neg * rev);
  printf("Reverse of %d is %d\n", num, (neg * rev));
  return 0;
}
