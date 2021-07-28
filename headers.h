#ifndef MB_H
#define MB_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;

// player struct to store variables and functions common to both kinds of players
struct player{
  string name;
  bool loss_status=false;
  string boardstyle="visible";
  void InitBoard( int n);
  void attack(int ** board, int n);
  int ** board;
  void printArray(int n);
  string rowCoords="ABCDEFGHIJ";
  string columnCoords="0123456789";
};

//substruct of player to store variables and functions specifically for human players
struct human: public player
{
  void InitBoard( int n);
  void attack(int ** board, int n);
};

//substruct of player to store variables and functions specifically for human players
struct computer: public player
{
  void InitBoard(int n);
  void attack(int ** board, int n);
};

//other functions
void statusBoard(player * p,int n);
void printBoard(player p1, player p2, int n);
void saveGame(int ** board1,int ** board2, int n,string savegame);
void loadGame(int ** board1,int ** board2, int n,string savegame);
void singlePlayer();
void doublePlayer();

#endif
