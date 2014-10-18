SwapSort
========

Sorting Logic: Check the highest and lowest elements. If the highest(subscript 0) is greater than the lowest, swap them. Continute inwards.
Do the same in halves, quarters, eighths, sixteenths, and 32nds.
Then bubble sort and repeat until sorted. 

I plan on continuing to extend this until the improvements are negligible. 

Notes:

As it stands now:
100,000 int array sorted in ~500 miliseconds
1,000,000 int array sorted in ~46000 miliseconds
This is on a MacBook Pro
2 GHz Intel Core i7
16 GB 1600 MHz DDR3

Compressing parts of it into for loops slows it down.
Dividing via bitshifting slows it down