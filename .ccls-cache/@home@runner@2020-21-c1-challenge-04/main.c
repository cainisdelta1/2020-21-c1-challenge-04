#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

int input;
int i = 0;
int final;

void output() {
if (i < input + 1) {
    final = i + final;
    i++;
    output();
}
else {
    printf("The sum of these numbers is: %i\n", final);
}
}

int main(void) {
  printf("Please enter a number: \n");
  scanf("%i", &input);

  if (input < i) {
      printf("Invalid number.\n");
      return -1;
  }
  output();
  return 0;
}