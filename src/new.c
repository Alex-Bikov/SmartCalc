#include "calculate.h"

int main() {
  // char x[] = "-sin(x)";
  char x[] =
      "-cos(x)+ log(10) / tan(2) ^ sin(3) + (acos(x) - asin(x)) / atan(x) * "
      "sqrt(9) / ln(10)";
  double answer = 0.0;
  int error = go(x, "0.0", &answer);
  printf("error=%d\n", error);
  printf("answer=%lf", answer);
  return 0;
}