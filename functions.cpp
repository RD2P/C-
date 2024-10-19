#include <iostream>

using namespace std;

void sayHello(){
  cout << "Hello";
}

void greet(string name){
  cout << "Hello " << name << endl;
}

void greet(string name, string lastname){
  cout << "Hello " << name << " " << lastname << endl;
}

int main(){
  // sayHello();
  // greet("Joe");
  // greet("Joe", "Pera");
  return 0;
}