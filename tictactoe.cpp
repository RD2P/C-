#include <iostream>

using namespace std;

void print_numbered_board(){
  // communicates numbers 1-9 associating with spots on the board
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

bool already_played(int plays[9], int play){
  // check if plays array contains the play
  for (int i = 0; i < 9; i++){
    if (plays[i] != 0 && plays[i] == play) {
      return true;
    }
  }
  return false;
}

void add_to_plays(int plays[9], int play){
  // add the play in the first index where the value is zero 
  for (int i = 0; i < 9; i++){
    if (plays[i] == 0){
      plays[i] = play;
      return;
    }
  }
}

int get_play(int plays[9], char player){
  int play;
  cout << "Player " << player <<  ", what's your play? (1-9): ";
  cin >> play;
  bool played = already_played(plays, play); // check if the spot is already taken
  //check if input is valid
  while ((play < 1 || play > 9) || played == true){
    if (play < 1 || play > 9){
      cout << "Please input a number between 1 and 9." << endl;
    }
    if (played == true) {
      cout << "This spot is already taken." << endl;
    }
    cin >> play;
    played = already_played(plays, play);
  }
  add_to_plays(plays, play);
  return play;
}

void convert_to_2D(int n, int& row, int& col){
  row = (n - 1) / 3;
  col = (n - 1) % 3;
}

bool check_win(char player, char board[3][3]){
  // check rows
  for (int r = 0; r < 3; r++){
    int play_count = 0;
    for(int c = 0; c < 3; c++){
      if (board[r][c] == player) play_count++;
    }
    if (play_count == 3) return true;
  }

  // check cols
  for (int c = 0; c < 3; c++){
    int play_count = 0;
    for(int r = 0; r < 3; r++){
      if (board[r][c] == player) play_count++;
    }
    if (play_count == 3) return true;
  }

  // check diagonals
  {
    int play_count = 0;
    for(int i = 0; i < 3; i++){
      if(board[i][i] == player) play_count++;
    }
    if (play_count == 3) return true;
  }

  {
    int play_count = 0;
    for(int i = 0; i < 3; i++){
      if(board[i][2-i] == player) play_count++;
    }
    if (play_count == 3) return true;
  }

  return false;
}

int main(){
  char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
  };

  int plays[9] = {0}; // initialized as all zeros, track which plays have been made

  cout << "Welcome to tic tac toe. To make your play, enter a number 1-9 according to the board below: " << endl;
  print_numbered_board();

  while (true){

    int current_play; int row; int col;

    current_play = get_play(plays, 'X');
    convert_to_2D(current_play, row, col);
    board[row][col] = 'X';
    print_board(board);
    if (check_win('X', board) == true){
      cout << "Player X wins!" << endl;
      break;
    };

    current_play = get_play(plays, 'O');
    convert_to_2D(current_play, row, col);
    board[row][col] = 'O';
    print_board(board);
    if (check_win('O', board) == true){
      cout << "Player O wins!" << endl;
      break;
    };
  }

  return 0;
}