1) int strlen( char str[]);
returns the length of the string.

Implementation:
//string length is the count of characters till the first null character is found in a string
int strlen_1(char str[])
{
int i;
for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
return i;  // return the count.
}

2) void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

Implementation:

void strcpy_1( char d[], char s[])
{
int i = 0;
while( s[i] != '\0')
{
d[i] = s[i];
i++;
}
d[i] = '\0';
}

3) void strcat( char d[] , char s[]);

concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";

output: after concatenation d[] becomes " KernelMasters";

4)  void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string

5) void strupr (char str[]);
// convert all lower case alphabets to upper case in the given string

6) void strrev( char str[]);

//reverse the string (without using any extra array)

eg., input : str[] = "Kernel";

output : str[] = "lenreK"

7) int palindrome (char str[])

// return 1 if the given string is a palindrome, return 0 if it is not a palindrome

8) int strchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index. 
