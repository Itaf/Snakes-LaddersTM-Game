# Snakes-LaddersTM-Game

## Introduction
A console-version of the Snakes & Ladders (TM) game. Background information on this game is at www.bigmoneyarcade.com. 


## Program Requirements
The program plays a game of Snakes & Ladders with one COMPUTER player. A computer player means that the program plays by itself, with no input required by the user.

The requirements:

1. The board must match the one given on www.bigmoneyarcade.com

2. Each turn shall be randomly generated by the simulated rolling of two die. Two numbers between 1 and 6 are randomly generated for each turn.

 1. The function for random generation is rand().
 
 2. For true variability, rand() must be initialized by calling srand() ONCE before any/all calls to rand() are made. As follows:
 
         `#include <stdlib.>`
         
         `#include <time.h>`
         
         `srand( time(0) );`
 
3. The player shall start on the first square, and the program shall continue until the player reaches the last square, or beyond. You do not have to land exactly on the last square.

4. After each turn, the program shall print where the player is located.

5. Upon completion, the program shall print the number of turns taken to reach the end.

6. The program shall contain no extra printf() statements. 


## Design Solution
The first step in writing a program is figuring out how to represent the problem domain (in this case, the board for Snakes & Ladders and the player). At this level of programming, this means figuring out the key data structures to be used by your program.

The board has 100 squares. The key data structure will be an array of 100 integers. Why integers? What does the integer represent? 

The integer value in this array of 100 will equal the CHANGE in a player’s position if a player lands on this square:

* If the START of a ladder is on this square, the integer will be a positive number (because the player gets to move “forward” to the END of the ladder)
* If the START of a snake is on this square, the integer will be a negative number (because the player has to move “backward” to the END of the snake).
* If neither, the integer will be zero (because the player stays here)

Looking at the picture on www.bigmoneyarcade.com:
* The square with the number 4 has a ladder that ends at square 26, so the difference will be +22
* The square with the number 23 has a snake that ends at square 6, so the difference will be -17

For this game, I only programed the behavior of one player. Consequently, there is only one more required data variable required: an integer that stores the current square on which the player is located.

A sample program output is shown below...

![picture alt](https://github.com/Itaf/Snakes-LaddersTM-Game/blob/master/SampleOutput.png "Sample Output")
