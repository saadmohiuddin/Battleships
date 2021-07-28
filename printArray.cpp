/*
  This function prints a single board during for checking ship placement.
  It take the board size as input
*/


#include "headers.h"


void player::printArray(int n){
  char alphabet[26]={'A','B','C','D','E','F','G','H','I','J'};

  cout<<"                  "<<name<<"                    "<<endl;
  cout<<"    0   1   2   3   4   5   6   7   8   9  "<<endl;
  cout<<"  |---------------------------------------|"<<endl;
  for(int i =0;i<n;i++){
    cout<<alphabet[i]<<" | ";
    for(int j=0;j<n;j++){

      if(board[i][j]<0) cout<<'X';
      else if(board[i][j]==9) cout <<'-';
      else if(board[i][j]==0)cout<<' ';
      else cout<<'S';

      cout<<" | ";
    }
    cout<<endl<<"  |---------------------------------------|"<<endl;
  }
  cout <<endl;
}
