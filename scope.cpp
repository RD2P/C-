#include <iostream>

int main() {

  int c = 0;
  int i = 0;
  int j = 0;

  while (i < 5){
    while (j < 2) {
      c++;
      j++;
    }
    i++;
  }

  std::cout << "j: " << c; // 2
  return 0;
}