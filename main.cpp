
#include "headers.h"

int main(){
  srand(time(0));
  int n=10;
  string numPlayers="0";

  cout<<"LET'S BATTLESHIPS!"<<endl<<endl;
  cout<<"The Rules of the game:"<<endl<<endl;
  cout<<"1) You will have 5 ships of sizes 5,4,3,3, and 2 respectively."<<endl;
  cout<<"2) Place your ships on the boards using the coordinates on the board."<<endl;
  cout<<"  a) The coordinates can be input as a string of 2 characters. The first being a letter from A to J, the second being a number from 0 to 9."<<endl;
  cout<<"  b) You can place the ships horizontally or vertically."<<endl;
  cout<<"3) You can attack the enemy's ship by inputting the coordinates of the position you would like to attack."<<endl;
  cout<<"4) The first player to destroy all enemy ships wins. If both players destroy each other's ships within a turn, it is a draw."<<endl<<endl;

  cout<<"Board guide: "<<endl;
  cout<<"1) Empty box means hidden ship"<<endl;
  cout<<"2) '-' means unsuccessful attack"<<endl;
  cout<<"3) 'X' means successful attack"<<endl;
  cout<<"4) 'S' means the positions of your ships (only visible during placement and during single player matches)."<<endl<<endl;

  cout<<"The game is autosaved after each turn. You can quit game at any time using Ctrl+C."<<endl;
  cout<<"At the start of the game, you can choose to start new game or load the previously saved game."<<endl<<endl;

  while (true) {
    cout << "Input 1 for single player game or 2 for double player game" << endl;
    getline (cin, numPlayers);
    if (numPlayers == "1" || numPlayers == "2") break;
    cout << "invalid input " << endl;
  }

  if (numPlayers=="1"){
    singlePlayer();
  }

  else {
    doublePlayer();
  }



  return 0;
}
