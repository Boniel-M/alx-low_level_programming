#!/bin/bash
#compiling all the .c files into obeject files

gcc -c *.c
#creates a libabry 

ar rcs liball.a *.o
