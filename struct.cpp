#include <iostream>
#include <string>

  // named struct can be treated like a data type
struct student {
  std::string name;
  int grade;
  std::string nsid;
};

int main(){
  struct {
    std::string name;
    int grade;
    std::string nsid;
  } student1;

  student1.name = "Joe";
  student1.grade = 90;
  student1.nsid = "abc123";

  std::cout << student1.name << ' ';
  std::cout << student1.grade << '\n';

  student Jay;
  Jay.name = "Jay";
  Jay.nsid = "def456";

  std::cout << Jay.name << ' ';
  std::cout << Jay.nsid <<  ' ';
  std::cout << Jay.grade << '\n'; // unitialized, gives garbage


  return 0;
}