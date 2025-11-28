#include <iostream>

namespace first{
   int x = 4;

}
namespace second{
   int x = 1;

}
namespace third{
   int x = 6;

}
int main(){
  using namespace second;
  std::cout << "x from second namespace using using namespace second: " << x << '\n';
  std::cout << "x from first namespace, forced: " << first::x;

}