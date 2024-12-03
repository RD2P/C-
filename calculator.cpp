#include <iostream>
using namespace std;

int main(){

  int x, y, result;
  char o;

  cout << "Number: ";
  cin >> x;
  cout << "Operator: ";
  cin >> o;
  cout << "Second number: ";
  cin >> y;

  if (o == '+'){
    result = x + y;
  } else if (o == '-'){
    result = x - y;
  } else if (o == '/'){
    result = x / y;
  } else if (o == '*'){
    result = x * y;
  } else {
    cout << "Invalid operator.\n";
    return -1;
  }
  cout << x << ' ' << o << ' ' << y << " = ";
  cout << result;


  return 0;
}