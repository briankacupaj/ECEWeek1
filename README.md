/**
Author: Dr. Jannatun Naher, Ph.D
Contributor: Brian Kacupaj
Lehigh University Electrical and Computer Engineering Department
ENG 005 Lab 1
*/


The 'main.c' file contains the code that should be run in order to execute the intended function in the board:
 - Calling for the initialization of the buttons on the side of the board
 - Calling for the initialization of the LEDs at the bottom of the board
 - Calling the functions to read user input

Download all files into one folder, and run the main file.

The files titled 'GPIO_driver' contain important functions for the purpose of simplification of the main file. This file contains all functions pertaining to the initialization and reading of the pins and buttons on the board.
- The file contains functions meant to reduce repetition in the main file
- The functions recieve pin inputs from the main file, and in the background initialize the pins using repetitive functions
- The file contains a function to react to user input, detecting button press with slight delay to reduce false positive/negative values of 1/0.
