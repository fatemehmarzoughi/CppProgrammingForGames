
#include <iostream>
#include <stdlib.h>

#include "Foo.h"
// int result = 1;
int main()
{

  Foo d = Foo();
  std::cout<<"0! = "<<d.factorial(0)<<std::endl;

  std::cout<<"5! = "<< d.factorial(5)<<std::endl;

  std::cout<<"3! = "<<d.factorial(3)<<std::endl;

  std::cout<<"9! = "<<d.factorial(9)<<std::endl;

  return 0;
}
