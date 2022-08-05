## Multithreaded-Sortying-Application
CS 421 Assignment Spring '22

Directions:  
Write a multithreaded sorting program that works as follows: A list of integers is divided into two smaller lists of equal size. Two separate threads sort each sublist using a sorting algorithm of your chioce. The two sublists are then merged by a third thread - a merging thread - which merges the two sublists into a single sorted list. Because global data are shared across all threads, perhaps the easiest way to set up the data is to create a global array. Each sorting thread will work on one half of this array. A second global array of the same size as the unsorted integer array will also be established. The merginging thread will then merge the two sublists into this second array. 
