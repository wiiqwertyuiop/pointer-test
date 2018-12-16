#include <iostream>

int main() {

  int a = 22;
  int b = 23;
  int c;
  
  std::cin >> c;
  
  a += 11;
  
  int *ptr[] = {&a, &b, &c, NULL};

  b++;
  
  int z = 0;
  
  while(ptr[z] != NULL) {
    std::cout << *ptr[z] << "\n";
    z++;
  }
  
  return 0;
}