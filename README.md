# Dangling Pointers and Unexpected Pointer Behavior in C

This example demonstrates potential issues with dangling pointers in C, leading to unexpected program behavior.

## The Problem

In the code example, a pointer (`ptr`) is initially assigned to the address of an integer variable (`x`). The value of `x` is then modified through `ptr`. Later, `ptr` is reassigned to the address of a different variable (`y`), and the value of `y` is modified.  The problem occurs if `x` was not deallocated and `ptr` is reassigned to the address of `y`. In such a case, the value of `x` would be modified by modifying `y` which is undefined behaviour.

## Solution

Carefully managing pointer lifetimes is essential to avoid dangling pointers.  Always ensure that a pointer is either null or points to a valid memory location.  When finished working with dynamically allocated memory, always deallocate it using `free()`.   In this example, the modification of `x` after reassigning `ptr` was unintended. Therefore, the solution should focus on ensuring that no memory leak occurs, and proper cleanup is done.