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

int get_play(char player){
  int play;
  cout << "Player " << player <<  ", what's your play? (1-9): ";
  cin >> play;
  return play;
}

void convert_to_2D(int n, int& row, int& col){
  row = (n - 1) / 3;
  col = (n - 1) % 3;
}

void check_win(){
  
}

int main(){
  char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
  };

  cout << "Welcome to tic tac toe. To make your play, enter a number 1-9 according to the board below: " << endl;
  print_numbered_board();

  bool win = false;

  while (win == false){

    int current_play; int row; int col;

    current_play = get_play('1');
    convert_to_2D(current_play, row, col);
    board[row][col] = 'X';
    print_board(board);

    current_play = get_play('2');
    convert_to_2D(current_play, row, col);
    board[row][col] = 'O';
    print_board(board);
    
    // win = true;
  }

  return 0;
}