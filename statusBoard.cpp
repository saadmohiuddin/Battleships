/*
  This function checks the board to see how many ships are left for player p
*/


#include "headers.h"



void statusBoard(player * p,int n){
// 5 ships have individial bool values
  p->loss_status=false;
  bool ship_1=0;
  bool ship_2=0;
  bool ship_3=0;
  bool ship_4=0;
  bool ship_5=0;
//total ship variable to show amount of ships destroyed
  int total_ship=0;

  int ship_one=0;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (p->board[i][j]==-1)
      {
        ship_one+=1;
      }
    }
  }
// based on the call number of ship destroyed, the variable increments based on number of coordinates destroyed
  if (ship_one==5)
  {
    ship_1=1;
    total_ship+=1;
  }


  int ship_two=0;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (p->board[i][j]==-2)
      {
        ship_two+=1;
      }
    }
  }

  if (ship_two==4)
  {
    ship_2=1;
    total_ship+=1;
  }

  int ship_three=0;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (p->board[i][j]==-3)
      {
        ship_three+=1;
      }
    }
  }

  if (ship_three==3)
  {
    ship_3=1;
    total_ship+=1;
  }

  int ship_four=0;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (p->board[i][j]==-4)
      {
        ship_four+=1;
      }
    }
  }

  if (ship_four==3)
  {
    ship_4=1;
    total_ship+=1;
  }


  int ship_five=0;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (p->board[i][j]==-5)
      {
        ship_five+=1;
      }
    }
  }

  if (ship_five==2)
  {
    ship_5=1;
    total_ship+=1;
  }

  //shipsleft = total_ship;
  //cout<<" You have succesfully destroyed "<< total_ship<< " ships";

  if (ship_1 ==1 && ship_2==1 && ship_3==1 && ship_4==1 && ship_5 ==1)
    {
      p->loss_status= true;
    }



}
