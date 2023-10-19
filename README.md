# _printf

_printf is a function that produces output according to a format, without automatically adding a new line and returns the no of characters printed out

As _printf accepts an unfixed no of arguments, there is a need for accessing the arguments and determining their types. All arguments are written out with the help of macros defined in stdarg.h library and format specifiers, which are particular characters, in the format string.

Format string: usually consists of characters to be written out as is and format specifiers for helping in accessing arguments whose syntax is: 

%[$][flags][width][.precision][length modifier]format

Each argument is introduced by a '%' and ends with a 'format specifier'
* Flag:not handled
* Width:not handled
* precision:not handled
* Length modifier:not handled

Format:
* c-
the int argument is converted to an unsigned char
* s-
the const char * argument is expected to be a pointer to an array of character type(pointer to a string)
* d,i-
The int argument is converted to signed decimal notation.
* b-(custom)
the unsigned int argument is converted to binary
* u,o,x,X-
the unsigned int argument is converted to unsigned octal(o), unsigned decimal (u), or unsigned hexadecimal (x and X) notation.  The letters abcdef are used for x conversions; the letters ABCDEF are used for X conversions.
* S-(custom)
prints the string.Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
* p-
The void * pointer argument is printed in hexadecimal (as if by %#x or %#lx).
* r-(custom)
prints the reversed string
* R-(custom)
prints the rot13'ed string
* %-
prints % sign

## Installation
### _printf
* Copy all files in root to you computer.
* archive the *.c and index the file eg: ar -rc - printf *.c 
 * ranlib printf.a
* link the lib file during compilation of any of your programs
### man page
* sudo cp _printf.1 /usr/share/man/man1/
* sudo mandb 

## Usage

``` C
 ui = 2147484671
 _printf("Unsigned:[%u]\n", ui);

# returns 'Unsigned:[2147484671]'

```

## Contributors

Eric Mutua &
Miriam Mukuhi
