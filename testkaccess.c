#include "types.h"
#include "user.h"

int main(void) {
  int *p = (int*)0xFFFFFFFF;
  *p = 1;
  exit();
}
