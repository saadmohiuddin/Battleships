/*
  This function lets a computer player attack
*/
#include "headers.h"

void computer::attack(int ** board, int n){

  int x,y=0;

  while(true){
    x= rand()%n;
    y= rand()%n;

    if (board[y][x]!=9) break;
  }


  //x corresponds to column number
  //y corresponds to row number

  if(board[y][x]==0 || board[y][x]==9) board[y][x]=9;
  else if(board[y][x]<0) ; //pass for negative values
  else board[y][x] *= -1;
  }
