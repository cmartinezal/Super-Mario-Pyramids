# Super-Mario-Pyramids
A program that recreates adjacent pyramids of blocks, using hashes (#) for bricks

## Problem description
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below.

![pyramids](https://github.com/cmartinezal/Super-Mario-Pyramids/assets/84383847/89234664-dd7f-4274-8b99-5950ed430272)

Implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:

```sh
   #  #
  ##  ##
 ###  ###
####  ####
```

And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive int between, say, 1 and 8, inclusive.

```sh
$ ./mario
Height: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########
```

If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

```sh
$ ./mario
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```

Notice that width of the “gap” between adjacent pyramids is equal to the width of two hashes, irrespective of the pyramids’ heights.

## Getting Started
Let's start to use this project.

## Prerequisites

A compiler for C must be installed. Python 3 must be installed.

## Installation

To execute the project open the terminal and go to the project folder. Then compile the code with a C compiler and execute the file generated:

```sh
make mario
./mario
```

To execute with Python use this command:

```sh
python3 mario.py
```
