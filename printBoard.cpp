/*
  This function prints both boards side by side
  It takes as input both player objects and the board size

*/
#include "headers.h"

using namespace std;

void printBoard(player p1, player p2, int n){
  char alphabet[26]={'A','B','C','D','E','F','G','H','I','J'};

  cout<<"           '-' means unsuccessful attack | ";
  cout<<" 'X' means successful attack"<<endl<<endl;

  cout<<"                 "<<p1.name<<"                 ";
  cout<<"                                 "<<p2.name<<endl<<endl;
  cout<<"    0   1   2   3   4   5   6   7   8   9 ";
  cout<<"              0   1   2   3   4   5   6   7   8   9 "<<endl;
  cout<<"   |---------------------------------------|";
  cout<<"           |---------------------------------------|"<<endl;
  for(int i =0;i<n;i++){ //printing each row
    cout<<" "<<alphabet[i]<<" | ";
    for(int j=0;j<n;j++){ //printing columns for p1.board
      //printing special characters for ships
      if(p1.boardstyle=="hidden"){
        if(p1.board[i][j]<0) cout<<'X';
        else if(p1.board[i][j]==9) cout <<'-';
        else cout<<' ';
        //cout<<p1.board[i][j];
      }
      else if(p1.boardstyle=="visible"){
        if(p1.board[i][j]<0) cout<<'X';
        else if(p1.board[i][j]==9) cout <<'-';
        else if(p1.board[i][j]==0)cout<<' ';
        else cout<<'S';
        //cout<<p1.board[i][j];
      }
      cout<<" | ";
    }
    cout<<"        "<<alphabet[i]<<" | ";

    for(int j=0;j<n;j++){ //printing columns for p2.board
      //printing special characters for ships, attacked, and missed
      if(p2.boardstyle=="hidden"){
        if(p2.board[i][j]<0) cout<<'X';
        else if(p2.board[i][j]==9) cout <<'-';
        else cout<<' ';
        //cout<<p1.board[i][j];
      }
      else if(p2.boardstyle=="visible"){
        if(p2.board[i][j]<0) cout<<'X';
        else if(p2.board[i][j]==9) cout <<'-';
        else if(p2.board[i][j]==0)cout<<' ';
        else cout<<'S';
        //cout<<p1.board[i][j];
      }
      cout<<" | ";
    }
    cout<<endl<<"   |---------------------------------------|";
    cout<<"           |---------------------------------------|"<<endl;
  }
  cout <<endl;
}
