#include <iostream>

int main(){

  int num = 8;
  int* pnum = &num;
  int** ppnum = &pnum; // pointer to pointer
  int nval = *pnum; // dereference pointer
  

  std::cout << "num " << num << '\n';
  std::cout << "pnum " << pnum << '\n';
  std::cout << "ppnum " << ppnum << '\n';
  std::cout << "nval " << nval << '\n';

  std::cout << &pnum << '\n';
  *pnum = 77; // change value referenced by the pointer
  std::cout << "new num " << num << '\n'; // 77

  int* pnval = &nval;
  *pnval = 99;
  std::cout << "new nval " << nval;

  return 0;
}