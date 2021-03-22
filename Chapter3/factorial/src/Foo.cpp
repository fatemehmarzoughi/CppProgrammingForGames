#include "Foo.h"
#include <iostream>

Foo::Foo() {

}
int result = 1;
int r = 0;
int Foo::factorial(int z) {

    if(z != 0)
    {
      result = result * z;
      factorial(z-1);
    }
    else
    {
      r = result;
      result = 1;
    }
  return r;
}
