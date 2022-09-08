# Teach C++ Programming with Fun Experiments
> Besides learning by actually doing new stuff, experiments are also a great opportunity to improve yourself.

## Table of contents
* [General info](#general-info)
* [Technologies](#technologies)
* [Status](#status)
* [Contact](#contact)

## General info
In this repository, I'll break down what C++ game programming is by building some simple to complex games for beginer game programmer.

-Nim 

The game
Nim is a mathematical strategy game, where 2 players take turns taking items from distinct heaps. On your turn, you must take at least one item, and you may take as many as you want, provided that you only take from one heap. The player that takes the last item wins! This is a solved game. Before I go into the strategy, you can try playing it online here (http://www.goobix.com/games/nim/).

- The Strategy
The winning strategy is explained very clearly and simply here at this link. I will explain it using a little bit more technical terms. The way to win this game, is to always take as many items as possible so that the binary-digital-sum is always 0. Consider the following board:

         *
       * *
     * * *
   * * * *
 * * * * *
 1 2 3 4 5
To find the binary-digital-sum of this board, you must:

Convert the number in each row to binary. So we have 001, 010, 011, 100 and 101.

Add all the numbers together, and ignore any carrying.

 001
 010
 011
 100
+101
----
 001
You can also bitwise-xor each number, and this will achieve the same result.

Now, if the sum in this current configuration is 001, then this is not (yet) a winning board. But you can make it a winning board! If we take one item off of columns 1, 3 or 5, the sum will be 0. This is a winning board, which means that, provided you don't make a mistake, the next player to move will lose. So you must always end your turn with a winning board. Lets say you take one item off of column 5. Now the board looks like this:

       * *
     * * *
   * * * *
 * * * * *
 1 2 3 4 5
As long as you don't screw up, you have a guaranteed win. There is nothing your opponent can do to stop you. Lets say he takes all of the items from column 5.

       *
     * *
   * * *
 * * * *
 1 2 3 4 5
Where would you go next? Don't scroll down yet, and try to figure it out for yourself.

Right now, the sum is 100. The best move (and only winning move) would be to take everything from column 4. That would leave the board like this:

     * 
   * * 
 * * * 
 1 2 3 4 5
and the sum like this

 001
 010
+011
----
 000
that means that you are in a winning board! Yay!

## Technologies
* C++

## Status
Project is unde development.

## Contact
Created by @Danisoft Arad 2022(https://danipedro2006.github.io/) - feel free to contact me!
