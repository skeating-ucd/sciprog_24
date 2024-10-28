# Practical 6

This folder contains code for practical 6.

## Overview

* Write a program to multiply two matrices.
* C(nxq) = A(nxp)B(pxq)
    * Here n = 5, p = 3, q = 4.
* A(i,j) = i + j
* B(i,j) = i - j
* Print out the 3 arrays with, with one matrix row per line.

* If you have time, create two files a main and matmult function. Have matmult return C to main.
    * Construct a Makefile that will compile both to generate the executable.
        * I have not currently implemented this step but may in a later branch.

## Compile

* gcc -o matmult\_0 matmult\_0.c -lm

## Execute

* ./matmult\_0
  
A: =  
0.0, 1.0, 2.0  
1.0, 2.0, 3.0  
2.0, 3.0, 4.0  
3.0, 4.0, 5.0  
4.0, 5.0, 6.0  
B: =  
0.0, -1.0, -2.0, -3.0  
1.0, 0.0, -1.0, -2.0  
2.0, 1.0, 0.0, -1.0  
C: =  
5.0, 2.0, -1.0, -4.0  
8.0, 2.0, -4.0, -10.0  
11.0, 2.0, -7.0, -16.0  
14.0, 2.0, -10.0, -22.0  
17.0, 2.0, -13.0, -28.0  

