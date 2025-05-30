# Hamming-code

Hamming Code Error Detection and Correction (C++)

This project demonstrates how Hamming Code is used to detect and correct single-bit errors in an 8-bit data stream using C++.

What is Hamming Code?
---------------------
Hamming Code is an error-detection and correction method invented by Richard Hamming. 
It adds parity bits to the data bits to allow the detection and correction of 1-bit errors. 
It’s widely used in communication systems, computer memory, and data transmission.

How It Works:
-------------
1. For every group of data bits, redundant parity bits are added at certain positions (powers of 2).
2. These parity bits help check the correctness of the data.
3. If a bit is corrupted, the parity checks will point out the exact bit position.
4. That bit is flipped (corrected), recovering the original data.

Working of This Code
--------------------
Input:
- You provide 8 bits (0s or 1s) manually as input.

Process:
1. These bits are placed into a 12-bit array with parity bits at positions 1, 2, 4, and 8.
2. The code calculates each parity:
   - p1 checks positions (1, 3, 5, 7, 9, 11)
   - p2 checks positions (2, 3, 6, 7, 10, 11)
   - p4 checks positions (4, 5, 6, 7, 12)
   - p8 checks positions (8, 9, 10, 11, 12)
3. Based on parity, the program detects the bit position where an error occurred (if any).
4. If an error is found, it flips that bit to correct the data.

Output:
- Displays whether the data is correct or not.
- If there's an error, shows:
  - Error bit position
  - Original data
  - Corrected data

Example
-------
Enter the 8-bit data (bit by bit): 1 0 1 1 0 0 1 0
Parity of 2^0 is 0 (Even).
Parity of 2^1 is 1 (Odd).
Parity of 2^2 is 0 (Even).
Parity of 2^3 is 0 (Even).
Error detected at position: 2
Old data: 1 0 1 1 0 0 1 0
Corrected data: 1 0 1 1 0 0 1 0

Files
-----
- main.cpp: Main C++ program for Hamming Code implementation.

Features
--------
- Detects single-bit errors.
- Automatically corrects the error.
- Simple and educational for beginners learning error correction.

How to Run
----------
1. Compile the program:
   g++ main.cpp -o hamming

2. Run the program:
   ./hamming

Learn More
----------
- https://en.wikipedia.org/wiki/Hamming_code

Feel free to fork or modify the code for your own learning or projects!
----------
Note - This only works for single bit detection and correction and if there is more than single bit error then this cannot detect and correct the 8-bit data
