#include <iostream>
#include <string>

using namespace std;

void print_numbered_board(){
  char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
  };
  cout << "\n-------\n";
  for (int i = 0; i <= 2; i++) {
    cout << '|';
    for (int j = 0; j <= 2; j++) {
      cout << board[i][j] << '|';
    }
    cout << "\n-------\n";
  }
}

void print_board(char board[3][3]){
  cout << "\n-------\n";
  for (int i = 0; i <= 2; i++) {
    cout << '|';
    for (int j = 0; j <= 2; j++) {
      cout << board[i][j] << '|';
    }
    cout << "\n-------\n";
  }
}

int get_play(){
  int play;
  cout << "What's your play? (1-9): ";
  cin >> play;
  return play;
}

void convert_to_2D(int n, int& row, int& col){
  row = (n - 1) / 3;
  col = (n - 1) % 3;
}

int main(){
  char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
  };
  print_numbered_board();
  print_board(board);
  int current_play = get_play();
  cout << current_play;

  int row; int col;
  convert_to_2D(current_play, row, col);
  board[row][col] = 'X';
  print_board(board);

  return 0;
}