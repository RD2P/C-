#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main(){

  // string names[] = { "Bob", "Joe", "Bill"};
  // cout << names[0];

  // for (string name: names){
  //   cout << name << endl;
  // }

  // vector<string> fruits = {"apple", "banana", "cherry"};
  // fruits.push_back("date");
  // cout << fruits[3];

  // Getting size of array using sizeof - not reliable
  // int nums[] = {1,2,3,4,5,6};
  // cout << sizeof(nums) / sizeof(int);

  // Getting size of Array class
  array<int> nums = {1,2,3,4,5};
  cout << nums.size();

  return 0; 
}