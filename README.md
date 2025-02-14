# Normal Distribution Integral Calculation
## Description
This project provides an implementation of a program that calculates the integral of a standard normal distribution between -Z and Z using the error function (erf). The program consists of a separate module (erf_module.c and erf_module.h) and a main file (main.c). The project also includes compilation instructions with optimization levels O2 and O3 to compare performance.

## Installation
### Requirements
- GCC compiler (or another C compiler)

### Compilation
#### Linux:

`gcc -Wall -o program main.c erf_module.c -lm`


## Usage
Run the compiled program and enter a Z-score:

` ./program`

Example output:
```
Enter Z-score: 1.96
The integral of a Normal (0,1) distribution between -Z and Z is: 0.95
```

To compare the difference in optimization levels, you can first compile the file with different optimization levels and then run it with the time command to measure execution time:
```
time ./program_O2
time ./program_O3
```

## Development Setup
To modify and test the program, follow these steps:
- Edit erf_module.c or erf_module.h.
- Recompile using the commands in the Installation section.
- Run the program and verify the output.


