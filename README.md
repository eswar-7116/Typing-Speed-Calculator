# Typing Speed Calculator

## Overview

The Typing Speed Calculator is a C program that measures how quickly you can type a sentence. It calculates the time taken to type using the clock function, converts this time to minutes, and then estimates typing speed in words per minute (wpm).

## Features

- Measures typing speed in words per minute (wpm).
- Uses basic C functions and libraries for timing and string manipulation.

## Requirements

- A C compiler (e.g., GCC)
- Standard C library (included with most C compilers)

## How It Works

1. **Input**: The program prompts you to type a sentence and captures the input.
2. **Timing**: It measures the time taken to type the sentence using the `clock()` function.
3. **Calculation**: 
   - Converts the elapsed time from clock ticks to minutes.
   - Estimates the number of words based on an average of 5 characters per word.
   - Computes the typing speed in words per minute.
4. **Output**: Displays the calculated typing speed, rounded to the nearest whole number.

## Compilation

To compile the program, use the following command:

```
gcc -o typing_speed_calculator typing_speed_calculator.c
```

## Usage

Run the compiled program:

```
./typing_speed_calculator
```

Follow the on-screen prompt to type a sentence. The program will then display your typing speed.

## Example Output
```
Enter a sentence
The quick brown fox jumps over the lazy dog

Your typing speed is 30 wpm
```
