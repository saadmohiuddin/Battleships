/*
  This function initiates computer player's board using randomly selected positions for ships
*/

#include "headers.h"


using namespace std;

void computer::InitBoard( int n){

  while (true){ //keep trying to make board until no error
    for (int i=0;i<n;i++){
      for (int j=0;j<n;j++){
        board[i][j]= 0 ;
      }
    }
    int flag=0; //flag for invalid board initlized to zero

    int shipsize[5]={5,4,3,3,2}; //ships
    char orientation; //vertical or horizontal

    /*coordinates of ship relative to orientation i.e if orientation ==h, x is horizontalaxis and y
       is vertical axis else if orientation==v, y is horizontal axis and x is vertical axis*/
    int x,y;

    //iterating over ships
    for (int ship=0;ship<5;ship++){
      //srand(time(0)+ship);
      x= rand()%n; //for human initiated board, take input from player for x and y.
      //srand(time(0)+1+ship);
      y= rand()%(n+1-shipsize[ship]);
          //iterating over board: case 1 vertically place


      srand(time(0)+2+ship);
      orientation=(rand()%2)?'v':'h'; //for computer initiated board
      //cin >> orientation; reserve this for human initiated board
      if (orientation=='v'){
        for (int i=y;i<y+shipsize[ship];i++){

          if (board[i][x]!=0){
            flag =1; //invalid board, flag set to 1,
            break; //break to avoid unnecessary loops
          }

          board[i][x]=ship+1; //ship no. =1 not zero
        }

      }
      else if (orientation=='h'){
        for (int i=y;i<y+shipsize[ship];i++){

          if (board[x][i]!=0){
             flag =1;//invalid board, flag set to 1,
             break; //break to avoid unnecessary loops
          }

          board[x][i]=ship+1; //ship no. =1 not zero
        }

      }

      if (flag==1) break; //break to avoid unnecessary loop over ships
    }

    if (flag==0) break;
  }

}
