/*
  This function initiates human player's board using user inputs for positions of ships
  It take the boardsize as input
*/

#include "headers.h"


using namespace std;

void human::InitBoard( int n){
  //declaring variables for rows and columns to select placement of ship
  int r=-1,c=-1;
  char row;
  char column;
  string rowCoords="ABCDEFGHIJ";
  string columnCoords="0123456789";

  while (true){ //keep trying to make board until no error

    for (int i=0;i<n;i++){
      for (int j=0;j<n;j++){
        board[i][j]= 0 ;
      }
    }
    int flag=0; //flag for invalid board initlized to zero

    int shipsize[5]={5,4,3,3,2}; //ships
    string orientation; //vertical or horizontal

    /*coordinates of ship relative to orientation i.e if orientation ==h, x is horizontalaxis and y
       is vertical axis else if orientation==v, y is horizontal axis and x is vertical axis*/
    int x,y;

    //iterating over ships
    for (int ship=0;ship<5;ship++){
      printArray(n);

      // loop to check if 'v' or 'h' is entered. not really needed for computer.
      cout << "Place your ships, "<<name<<endl<<endl;
      cout << "IMPORTANT: If your ships overlap, you will have to restart the ship placement from scratch."<<endl<<endl;

      cout << "If you would like to place ship no."<<ship+1<<"(size = "<<shipsize[ship]<<") horizontally, enter 'h'."<<endl;
      cout << "If you would like to place ship no."<<ship+1<<"(size = "<<shipsize[ship]<<") vertically, enter 'v'."<<endl;

      while(true){
       cin >> orientation;
       if (orientation=="v" || orientation =="h") break;
       else cout << "Please enter 'v' or 'h'"<<endl;
      }



      if (orientation=="v"){
        r=10;c=10; //r and c initlized out of range to allow loop to run

        while(c<0 || c>n-1 ||r<0|| r>n-shipsize[ship]){
          cout<<"ship no. "<<ship+1<<endl;
          cout << "Please input the coordinates you would like to place the head of your ship e.g. A0"<<endl;
          cout<<"first coordinate must be between "<<rowCoords[0]<<" and "<<rowCoords[n-shipsize[ship]]<<endl;

          string input;
          cin>>input;
          for(int i=0;i<input.length();i++){
            input[i]=toupper(input[i]); //to allow both upper and lower case letters
          }
          row = input[0];
          column =input[1];

          //getting the row and column number from the input coordinates
          for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
              if(row==rowCoords[i]) r=i;
              if(column==columnCoords[j]) c=j;
            }
          }
        }

        /*
        while(y<0 || y>n-shipsize[ship]){
          cout << "Please input y coordinate for the head of ship no." <<ship+1<<" between 0 and "<<n-shipsize[ship]<<endl;
          cin >> y;
        }
        */

        for (int i=r;i<r+shipsize[ship];i++){

          if (board[i][c]!=0){
            flag =1; //invalid board, flag set to 1,
            cout <<"Invalid board. Start again"<<endl;
            break; //break to avoid unnecessary loops
          }

          board[i][c]=ship+1; //ship no. =1 not zero, x and y coordinates flipped for rows and columns
        }

      }

      else if (orientation=="h"){
        r=10;c=10; //x and y initlized out of range to allow loop to run
        while(c<0 || c>n-shipsize[ship]||r<0 || r>n-1){
          cout<<"ship no. "<<ship+1<<endl;
          cout << "Please input the coordinates you would like to place the head of your ship e.g. A0"<<endl;
          cout<<"second coordinate must be between "<<columnCoords[0]<<" and "<<columnCoords[n-shipsize[ship]]<<endl;
          string input;
          cin>>input;
          for(int i=0;i<input.length();i++){
            input[i]=toupper(input[i]); //to allow both upper and lower case letters
          }
          row = input[0];
          column =input[1];

          //getting the row and column number from the input coordinates
          for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
              if(row==rowCoords[i]) r=i;
              if(column==columnCoords[j]) c=j;
            }
          }
        }

        /*
        while(y<0 || y>n-1){
          cout << "Please input y coordinate for the head of ship no." <<ship+1<<" between 0 and "<<n-1<<endl;
          cin >> y;
        }
        */

        for (int i=c;i<c+shipsize[ship];i++){

          if (board[r][i]!=0){
             flag =1;//invalid board, flag set to 1,
             cout <<"Invalid board. Start again"<<endl;
             break; //break to avoid unnecessary loops
          }

          board[r][i]=ship+1; //ship no. =1 not zero
        }

      }


      if (flag==1) break; //break to avoid unnecessary loop over ships
    }

    if (flag==0) break;
  }

}
