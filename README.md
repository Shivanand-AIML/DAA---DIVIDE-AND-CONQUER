# DAA – Divide and Conquer Method

This folder contains the five C programs from the supplied `DIVIDE AND CONQUER 2 part.docx` record.

## Programs
1. Count zeroes in an array containing 1s followed by 0s using binary search.
2. Find the majority element. The code is retained as provided in the record.
3. Find the floor of a value in a sorted array using recursive binary search.
4. Find two elements in a sorted array whose sum equals a target, using recursive two-pointer narrowing.
5. Sort integers using the C library `qsort` function.

## Important notes about the supplied solutions
- Program 2's submitted `majority` function is not a generally correct majority-element algorithm: it can leave `second` uninitialized and does not reliably determine the majority element. It is preserved from the source document rather than silently replaced.
- Program 5 calls the standard-library `qsort`; it does not implement the Quick Sort partition/recursion algorithm itself, despite the problem statement asking for Quick Sort.
- Programs 1 and 4 assume the input array is sorted in the stated required order. Program 4 specifically requires ascending order.

Compile an individual file with a C compiler, for example: `gcc 1-DAC-Count-Zeroes.c -o count_zeroes`.
