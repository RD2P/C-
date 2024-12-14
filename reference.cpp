#include <iostream>

int main(){

  int num = 8;
  int &numref = num; // reference to num, pointing to same variable
  num+=3;
  std::cout << "num : " << num << '\n'; // 11
  std::cout << "numref : " <<  numref << '\n'; // 11
  std::cout << "&num: " << &num << '\n';
  std::cout << "&numref: " << &numref << '\n'; // same memory address, points to num


  int num2 = 7;
  int num3 = num2;
  num3 += 99;
  std::cout << "num 2: " << num2 << '\n'; // 7
  std::cout << "num 3: " << num3 << '\n'; // 101


  return 0;
}