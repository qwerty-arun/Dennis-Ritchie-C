# Example 1 - Header file not included
```c
//# include <stdio.h>
void main()
{
	printf("Hello World!\n");
}
```
> ### warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
> ### warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]

# Example 2 - No return type
```c
# include <stdio.h>
main()
{
	printf("Hello World!\n");
}
```
> ### warning: return type defaults to ‘int’ [-Wimplicit-int]

# Example 3 - Removing #
```c
include <stdio.h>
int main()
{
	printf("Hello World!\n");
}
```
> ### error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘<’ token

# Example 4 - Skipping angled braces
```c
# include stdio.h
int main()
{
	printf("Hello World!\n");
}
```
> ### note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
> ### warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]

# Example 5 - Missing a brace
```c
# include <stdio.h>
int main()
	printf("Hello World!\n");
}
```
> ### error: expected declaration specifiers before ‘printf’
> ### error: expected declaration specifiers before ‘}’ token
> ### error: expected ‘{’ at end of input

# Example 6 - Missing a semicolon
```c
# include <stdio.h>
int main()
{
	printf("Hello World!\n")
}
```
> ### error: expected ‘;’ before ‘}’ token

# Example 7 - Missing double quotes
```c
# include <stdio.h>
int main()
{
	printf("Hello World!\n);
}
```
> ### error: missing terminating " character

# Example 8 - 'print' instead of 'printf'
```c
# include <stdio.h>
int main()
{
	print("Hello World!\n");
}
```
> ### warning: implicit declaration of function ‘print’; did you mean ‘printf’? [-Wimplicit-function-declaration]
> ### 1_1.c:(.text+0x18): undefined reference to `print'
> ### collect2: error: ld returned 1 exit status

# Example 9 - No paranthesis for main function
```c
# include <stdio.h>
int main
{
	print("Hello World!\n");
}
```
> ### error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘{’ token

# Example 10 - Semicolon after paranthesis for main function
```c
# include <stdio.h>
int main
{
	print("Hello World!\n");
}
```
> ### error: expected identifier or ‘(’ before ‘{’ token

# Example 11 - No main function itself
```c
# include <stdio.h>
	print("Hello World!\n");
```
> ### error: expected declaration specifiers or ‘...’ before string constant

# Example 12 - Continuation of Example 11
```c
# include <stdio.h>
	print(..."Hello World!\n");
```
> ### error: ISO C requires a named argument before ‘...’
