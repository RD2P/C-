#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> nums = {1,2,3,4};
  // cout << nums.size();
  // cout << nums[0];
  // cout << nums.front() << '\n';
  // cout << nums.back() << '\n';
  // cout << nums.at(4); // bounds checking, safety in multithreaded env, slower, need try catch
  // cout << nums[4]; // gives garbage
  
  // nums.at(2) = 88;
  // cout << nums.at(2);

  // nums.push_back(99);
  // cout << nums.back();

  // cout << nums.pop_back(); // does not return anything, gives error

  // nums.pop_back();
  // cout << nums.back();

  // cout << nums.empty(); // 1 or 0

  // for (int n : nums){
  //   cout << n << '\n';
  // }

  // this also works with arrays
  // int nums2[] = {1,2,3};
  // for (int n : nums2){
  //   cout << n;
  // }

  return 0;
}