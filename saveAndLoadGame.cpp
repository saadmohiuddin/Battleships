#include "headers.h"

void saveGame(int ** board1,int ** board2, int n, string savegame){
  ofstream fout(savegame);

  for (int i =0;i<n;i++){
    for (int j=0;j<n;j++){
      fout << board1[i][j] << " ";
    }
  }
  for (int i =0;i<n;i++){
    for (int j=0;j<n;j++){
      fout << board2[i][j] << " ";
    }
  }


  //cout<<endl<<"Game saved! "<<board[0][0]<<endl;
  fout.close();
}

void loadGame(int ** board1,int ** board2, int n,string savegame){
  ifstream fin(savegame);

  for (int i =0;i<n;i++){
    for (int j=0;j<n;j++){
      fin >> board1[i][j];
    }
  }

  for (int i =0;i<n;i++){
    for (int j=0;j<n;j++){
      fin >> board2[i][j];
    }
  }
  //cout<<endl<<"Game loaded! "<<board[0][0]<<endl;
  fin.close();
}
