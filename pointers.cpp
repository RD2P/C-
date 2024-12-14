#include <iostream>

int main(){

  int num = 8;
  int* pnum = &num;
  int** ppnum = &pnum; // pointer to pointer
  int nval = *pnum; // dereference pointer

  std::cout << "num " << num << '\n';
  std::cout << "pnum" << pnum << '\n';
  std::cout << "ppnum" << ppnum << '\n';
  std::cout << "nval " << nval;

  return 0;
}