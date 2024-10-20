# Practical 5  

This folder contains code for practical 5  

## Overview

* Utilise scanf() in our code to ask for user inputs.
* Create two programs.
* 1. A program which which prints out the first n numbers of the fibonacci sequence, where n is defined by the user.
* 2. A program which values of tanh^-1(x) for [-0.9,0.9] in steps of 0.01, using maclaurin series and seperately natural log.
* In 2 the user defines a delta, order of precision which will stop the maclaurin series calculation. Store values for both calcs and compare the difference.

## Compile

* gcc -o fib fib.c -lm
* gcc -o artanh artanh.c -lm

## Execute

* ./fib

Enter a positive integer:  
10 (example input)  
The first 10 fibonacci numers are:  
0 1 1 2 3 5 8 13 21 34  

* ./artanh

Please enter a positive real number (int)  
5 (example input)  
X = -0.90 || Artanh1: -1.129473 || Artanh2: -1.472219 || Difference: 0.3427465769  
X = -0.89 || Artanh1: -1.103797 || Artanh2: -1.421926 || Difference: 0.3181285388  
X = -0.88 || Artanh1: -1.079093 || Artanh2: -1.375768 || Difference: 0.2966747709  
X = -0.87 || Artanh1: -1.055305 || Artanh2: -1.333080 || Difference: 0.2777747837  
X = -0.86 || Artanh1: -1.032381 || Artanh2: -1.293345 || Difference: 0.2609633814  
X = -0.85 || Artanh1: -1.010273 || Artanh2: -1.256153 || Difference: 0.2458798405  
X = -0.84 || Artanh1: -0.988933 || Artanh2: -1.221173 || Difference: 0.2322402482  
.  
.  
.  
