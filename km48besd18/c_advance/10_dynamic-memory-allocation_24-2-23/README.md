1)  "Write a trim() function,that will remove the leading and trailing spaces from a string.
eg., Input : ""    str  str   ""
Output : ""str str"""

2) Implement your own realloc function using malloc and free using below steps: 
- Allocate memory for new size using malloc
- copy data from old address to new address
- release the old address
- return the new address

3) Write a string concatenation function that calculates the source string length, accordingly adjusts the size of destination string before concatenating the strings, to avoid size issues. For this the destination must be allocated dynamically in calling function.

4)
read a set of words from the user and concatenate all of them to make a sentence and print it back using the concatenation function above with spaces as delimiters and fullstop as end of the sentence.

input: 
Kernel
Masters
is
India's
leading
training
institute.

output: Kernel Masters is India's leading training institute.

eg., input : kernel  e   xxx

output: kxxxrnxxxl"

5) Read a set of strings in a loop , create every string dynamically based on the given string's length (first read the string into an array, calculate its length and using that allocated memory dynamically, and copy the string from array to dyanmic memory). Sort the strings in descending order and print.
