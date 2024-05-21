# Searching and Sorting Algorithms in C++

Welcome to the **Searching and Sorting Algorithms** repository! This repository contains C++ implementations of various fundamental searching and sorting algorithms. These algorithms are essential for understanding data structures and algorithms and are frequently used in computer science and software engineering.

## Table of Contents

- [Introduction](#introduction)
- [Algorithms](#algorithms)
  - [Searching Algorithms](#searching-algorithms)
    - [Binary Search Iterative](#binary-search)
    - [Binary Search Recursive](#binary-search)
  - [Sorting Algorithms](#sorting-algorithms)
    - [Bubble Sort](#bubble-sort)
    - [Heap Sort](#heap-sort)
    - [Quick Sort](#quick-sort)
    - [Selection Sort](#selection-sort)
    - [Insertion Sort](#insertion-sort)
    - [Counting Sort](#counting-sort)
    - [Merge Sort](#merge-sort)
- [How to Use](#how-to-use)

## Introduction

This repository provides C++ implementations of several key searching and sorting algorithms. These implementations can be used for educational purposes, benchmarking, or as a reference for your projects.

## Algorithms

### Searching Algorithms

#### Binary Search
Binary Search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

- **Complexity**: O(log n)
- **File**: `BinarySearchIR.cpp`
- **File**: `BinarySearchRec.cpp`

### Sorting Algorithms

#### Bubble Sort
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

- **Complexity**: O(n^2)
- **File**: `BubbleSort.cpp`

#### Heap Sort
Heap Sort is a comparison-based sorting technique based on a binary heap data structure. It is similar to selection sort where we first find the maximum element and place the maximum element at the end. We repeat the same process for the remaining elements.

- **Complexity**: O(n log n)
- **File**: `HeapSort.cpp`

#### Quick Sort
Quick Sort is an efficient sorting algorithm that, like Merge Sort, is based on the divide-and-conquer principle. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot.

- **Complexity**: O(n log n) on average, O(n^2) worst-case
- **File**: `QuickSort.cpp`

#### Selection Sort
Selection Sort is a simple and inefficient sorting algorithm. It works by dividing the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list.

- **Complexity**: O(n^2)
- **File**: `SelectionSort.cpp`

#### Insertion Sort
Insertion Sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

- **Complexity**: O(n^2)
- **File**: `InsertionSort.cpp`

#### Counting Sort
Counting Sort is an integer sorting algorithm. It operates by counting the number of objects that have distinct key values (kind of hashing). Then do some arithmetic to calculate the position of each object in the output sequence.

- **Complexity**: O(n + k), where n is the number of elements in the input array and k is the range of the input.
- **File**: `CountingSort.cpp`

#### Merge Sort
Merge Sort is an efficient, stable, comparison-based, divide and conquer sorting algorithm. Most implementations produce a stable sort, meaning that the implementation preserves the input order of equal elements in the sorted output.

- **Complexity**: O(n log n)
- **File**: `MergeSort.cpp`

## How to Use

1. Repository:
   ```sh
   https://github.com/AdityaSinghMandrawal/Searching-Sorting-Algorithms.git
