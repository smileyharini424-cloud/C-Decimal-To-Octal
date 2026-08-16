# C Decimal To Octal

## Explanation

This program converts a non-negative decimal number into its octal representation.

Octal is a number system that uses digits from 0 to 7.

The conversion is performed by repeatedly dividing the decimal number by 8 and storing the remainders.

## Problem Statement

Write a C program to convert a decimal number into its octal equivalent.

## Features

- Accepts a non-negative decimal number
- Converts decimal to octal
- Uses an array to store remainders
- Uses repeated division by 8
- Handles zero separately

## How It Works

The program repeatedly divides the decimal number by 8.

The remainder from each division becomes an octal digit.

The remainders are stored in an array.

Since the remainders are obtained from right to left, they are printed in reverse order to produce the correct octal number.

## Technologies Used

- C
- GCC Compiler
- Code Editor

## Data Structure Used

- Integer array

The array temporarily stores the octal digits.

## Methods Used

- main()
- printf()
- scanf()

## Control Structures Used

- while loop
- for loop
- if statement

## Operators Used

- %
- /
- >
- --

## Program Flow

Start
↓
Read decimal number
↓
Check whether number is non-negative
↓
Check for zero
↓
Divide number by 8
↓
Store remainder
↓
Continue until number becomes zero
↓
Print remainders in reverse order
↓
End

## Sample Input

Enter a non-negative decimal number: 25

## Sample Output

Octal = 31

## Sample Input 2

Enter a non-negative decimal number: 64

## Sample Output 2

Octal = 100

## Time Complexity

O(log n)

where n is the decimal number.

## Space Complexity

O(log n)

because the array stores the octal digits.

## Key Learning

This program teaches number-system conversion and demonstrates how repeated division can be used to convert decimal values into octal.

## File Location

decimal_octal.c

## Repository Structure

C-Decimal-To-Octal/
├── README.md
└── decimal_octal.c

## Author

V.Harini
