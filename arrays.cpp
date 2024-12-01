#include <iostream>
using namespace std;


void add_to_plays(int plays[9], int play){
  for (int i = 0; i < 9; i++){
    if (plays[i] == 0){
      plays[i] = play;
      return;
    }
  }
}

int main(){

  // int nums1[5] = {1,2}; // the rest are initialized to 0
  // cout << nums1[3]; // 0

  // char letters[5] = {'a', 'b'}; // {'a', 'b', '\0', '\0', '\0'};
  // cout << letters[2]; // '\0'

  // int nums[] = {1,2,3};
  // std::cout << nums[3];

  int plays[9] = {0};
  add_to_plays(plays, 3);
  add_to_plays(plays, 4);

  for(int i = 0; i < 9; i++){
    cout << plays[i];
  }




  
  return 0;
}