
# Comp2113_Project_Battleships

COMP 2113 Game: Battleship - Group 35: Saad Mohiuddin and Arminder Singh

The objective of Battleship is to try and sink all of the other player's before they sink all of your ships. The user will try and hit the computer’s grid by calling out the coordinates of one of the squares on the grid.  The computer also tries to hit user ships by randomly selecting out coordinates. 

Our version of battleship is a simple C++ program in which the player has to locate 5 ships on a 10 by 10 grid map. The ships’ sizes would be 5,4,3,3, and 2. Ships can only be placed vertically or horizontally. We also have a 2 player version in which players can play against each other and the ships won't be visible on the board while playing.
The game autosaves after each turn. A player can quit at any point in the game using Ctrl + C. When restarting the game, using the load option will bring the payer back to the last move before quitting.

1)To compile the game, clone the repository, and run the command "make run" on the terminal.
2)To play the game, execute the file "run" after compilation.

Project requirements:
1.Generation of random game sets or events
-Implementation of rand function to determine the coordinates of the computer’s battleships, as well as the computer’s moves when the computer determines its coordinates.

2. Data structures for storing game status:
-Arrays to store the board of both computer and user. The array will be updated on every move. Once all the battleships of the user or the computer have been destroyed, the game is over.

-User defined structs and substructs to handle different kinds of players (human, computer).

-Used the structs to make two versions of the games (single player and double player) without a lot of changes to the code.

3. Dynamic memory management
-Use dynamic memory management to allocate memory to our arrays.

4. File input/output (e.g., for loading/saving game status)
-Store arrays in a file to be used for loading a saved game. 

5.Program codes in multiple files
-Different functions like statusBoard(), attack(), initBoard etc. stored on different files for ease of reading and debugging.

