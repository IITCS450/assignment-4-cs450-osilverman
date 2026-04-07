#include "types.h"
#include "user.h"
int main(void) {
  volatile int *p = (volatile int*)0xFFF;
  *p = 42;
  exit();
}