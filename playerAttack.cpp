/*
  This function lets a human player attack.
  It takes as input the other player's board, and the board size
*/


#include "headers.h"

void human::attack( int ** board,int n){



  int r=0,c=0; //initialize to dummy value
  string inputAttack;
  cout<<"Please input the coordinates you would like to attack e.g. A0"<<endl;
  cin >> inputAttack;
  while (!isalpha(inputAttack[0]) || !isdigit(inputAttack[1])) {
    cout<<"invalid input!"<<endl;
    cout<<"Please input the coordinates you would like to attack e.g. A0"<<endl;
    cin>>inputAttack;
  }

  inputAttack[0]=toupper(inputAttack[0]); //to allow both upper and lower case letters




  //left a little Easter Egg cheat code
  if (inputAttack=="X9"){
    for(int i =0;i<n;i++){
      for(int j=0;j<n;j++){
        if(board[i][j]==0 || board[i][j]==9) board[i][j]=9;
        else if(board[i][j]<0||board[i][j]==5); //pass for negative values
        else board[i][j] *= -1;
      }
    }
  }

  char row = inputAttack[0];
  char column =inputAttack[1];
  string rowCoords="ABCDEFGHIJ";
  string columnCoords="0123456789";

  //getting the row and column number from the input coordinates
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if(row==rowCoords[i]) r=i;
      if(column==columnCoords[j]) c=j;
    }
  }



  if(board[r][c]==0 || board[r][c]==9) board[r][c]=9;
  else if(board[r][c]<0); //pass for negative values (already attacked ships)
  else board[r][c] *= -1;
  }
