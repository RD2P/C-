#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(){

  vector<string> names = {"John", "Joe", "Jake", "Jason"};
  
  // cout << *names.begin() << "\n\n"; // dereference pointer to first element

  // vector<string>::iterator it; // can also use auto it;
  // for(it = names.begin(); it != names.end(); ++it){
  //   cout << *it << endl;
  // }

  // auto i = names.begin(); // have to initialize with a pointer, can't just declare iterator
  // for (i; i != names.end(); ++i ){
  //   cout << *i << endl;
  // }

  // cout << *names.begin() << endl;
  // cout << *(names.end() - 1) << endl;

  // iterating in reverse
  // for(auto i = names.rbegin(); i != names.rend(); i++){ // use rbegin and rend
  //   cout << *i << endl;
  // }

  // can also do it this way
  // for (auto i = names.end() - 1; i != names.begin() - 1; i--){
  //   cout << *i << endl;
  // }

  // use iterators when we want to modify something during iteration
  // for (auto i = names.begin(); i != names.end(); i++){
  //   if(*i == "Joe"){
  //     *i = "Goat";
  //   }
  // }


  // for (auto& name : names){  // auto name creates copy of every element, &name creates reference
  //   if (name == "Joe"){
  //     name = "Goat"; // element can be changed with reference, so good practice to use const auto& name in loops (const correctness)
  //   }
  //   cout << name << endl;
  }

  // this works, but not good practice
  // map<int, string> numbers = { {1, "one"}, {2, "two"} };
  // for (auto n : numbers){
  //   if (n.first == 1){
  //     cout << n.first << n.second << endl;
  //     numbers[n.first] = "FIVE";
  //   }
  // }
  // for (auto n : numbers){
  //   cout << n.second << endl;
  // }

  return 0;
}