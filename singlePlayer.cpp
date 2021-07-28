/*
  This function runs the human vs computer version of the game
*/


#include "headers.h"

void singlePlayer(){
  int n=10;

  human p1;
  cout<<"Enter your name"<<endl;
  cin>>p1.name;
  p1.boardstyle="visible";

  computer p2;
  p2.name="Computer";
  p2.boardstyle="hidden";

  //making the first board
  //int ** board1;
  p1.board = new int*[n];
  for(int i = 0; i < n;i++){
  p1.board[i] = new int[n];
  }

  //making the second board
  //int ** board2;
  p2.board = new int*[n];
  for(int i = 0; i < n;i++){
  p2.board[i] = new int[n];
  }



  char input='0';
  while (input!= 'n' && input!='l'){
    cout<<"Input 'n' for new game or 'l' to load saved game"<<endl;
    cin>>input;
  }

  if (input=='n'){
    p1.InitBoard(n);
    //p1.printArray(n);
    p2.InitBoard(n);
    //p2.printArray(n);
  }
  else if(input=='l'){
    loadGame(p1.board,p2.board, n, "savegame.txt");
  }

  printBoard(p1,p2,n);

  bool gameover=false;
  while (!gameover){

    saveGame(p1.board,p2.board,n,"savegame.txt");

    p1.attack(p2.board,n);
    statusBoard(&p2,n);
    printBoard(p1,p2,n);

    p2.attack(p1.board,n);
    statusBoard(&p1,n);
    printBoard(p1,p2,n);

    if (p1.loss_status&&p2.loss_status) {
      cout<<"It's a draw!"<<endl;
      gameover=true;
    }
    else if (p2.loss_status==true) {
      cout <<"               "<< p1.name<<" has won!"<<endl;
      gameover=true;
    }

    else if (p1.loss_status==true) {
      printBoard(p1,p2,n);
      cout <<"               "<< p2.name<<" has won!"<<endl<<endl;
      gameover=true;
    }



  }




  //deallocating the first array
  for(int i = 0; i < n;i++){
  delete[] p1.board[i];
  }
  delete[] p1.board;
  p1.board=0;

  //deallocating the second array
  for(int i = 0; i < n;i++){
  delete[] p2.board[i];
  }
  delete[] p2.board;
  p2.board=0;





}
