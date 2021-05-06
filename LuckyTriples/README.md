# Lucky Triple

## Explanation

It is a bright and sunny day and you decide to go for an adventure in the forest. But unfortunately in the middle of the forest you find yourself lost. As you move forward you come across a mysterious door with a complicated lock system. For some reason you decide to open that lock and find out what is on the other side. After polishing all the rust on the lock's surface, a list of positive integer numbers appear on it. You can read that it asks for the number of lucky tuples. So you wonder what a lucky triple is. As you continue to search for clues, you come across the definition of a lucky triple. A "lucky triple" is a tuple (x, y, z) where x divides y and y divides z, such as (1, 2, 4).

Write a function that takes a list of positive integers l and counts the number of "lucky triples" of (li, lj, lk) where the list indices meet the requirement i < j < k.  The length of l is between 2 and 2000 inclusive.  The elements of l are between 1 and 999999 inclusive.  The answer fits within a signed 32-bit integer.

## Test cases

Input:

	{1, 1, 1}
Output:

    1

Input:

	{1, 2, 3, 4, 5, 6}
Output:

    3