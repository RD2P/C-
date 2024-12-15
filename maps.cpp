#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

  map<int, string, greater<int>> nums; // greater<> type sorts key in descending order
  nums[1] = "one";
  nums[2] = "two";
  for (auto num : nums){
    cout << num.first << num.second << endl;
  }

  cout << nums.at(1) << endl;
  cout << nums.empty() << endl;

  nums.insert({3, "three"}); // another way to add key, val item

  for (auto num : nums){
    cout << num.first << num.second << endl;
  }

  nums.erase(3); // remove an item using key
  for (auto num: nums){
    cout << num.first << num.second << endl;
  }

  cout << "size: " << nums.size() << endl; // size of map
  return 0;
}