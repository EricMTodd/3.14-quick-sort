# 3.14-quick-sort


This week we continue our study of different sorts, focusing on the recursive ones merge and quick sort. Your lab this week is to write a center pivot (meaning that the pivot selection for partitioning should be in the middle, not one of the ends) quick sort. The lab utilizes a construct called SortTester which is designed to abstract the details of the object being sorted. You only have access to the functions compare(index1, index2) and swap(index1, index2).

You will need to fill in the functions partition and quickSort in main.cpp

IMPORTANT NOTE: For this assignment the testbench is not a comprehensive analysis of your submission. The testbench checks that you have correctly sorted the items in the SortTester object. I have also written a test for your partition function that will check the following in regards to the return value index. All values located at or below the index are less than or equal to the value that was located at the midpoint at point of call. That all values at a location higher than the index are greater than or equal to the value that was located at the midpoint at point of call. I will be checking your algorithms to see that you have a recursive function (one that calls itself repeatedly to get to a base case), that you are using a quicksort algorithm. If you do not have those elements, you will not receive full credit for this lab. The assignment is worth 25 points.
