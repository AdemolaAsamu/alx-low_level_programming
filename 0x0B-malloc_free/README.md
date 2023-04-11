This is a readme file for the Malloc Tasks which Involved the Following

1. Float like a butterly, sting like a bee. 
Write a function that crates an array of chars and initializes it with a specific char
Prototype: char *create_array(unsigned int size, char c);
Returns NULL if size = 0
Returns a pointer to the array, or null if it fails
Compiler: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a

2. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

Prototype: char *_strdup(char *str);
The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
Returns NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.
Compiler: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s

3. Write a function that concatenates two strings.

Prototype: char *str_concat(char *s1, char *s2);
The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
if NULL is passed, treat it as an empty string
The function should return NULL on failure
Compiler: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c

4. Write a function that returns a pointer to a 2 dimensional array of integers.

Prototype: int **alloc_grid(int width, int height);
Each element of the grid should be initialized to 0
The function should return NULL on failure
If width or height is 0 or negative, return NULL
Compiler: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o g

5. Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

Prototype: void free_grid(int **grid, int height);
Note that we will compile with your alloc_grid.c file. Make sure it compiles.
Compiler: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o f

6. Write a function that concatenates all the arguments of your program.

Prototype: char *argstostr(int ac, char **av);
Returns NULL if ac == 0 or av == NULL
Returns a pointer to a new string, or NULL if it fails
Each argument should be followed by a \n in the new string
Compiler: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args

7. Write a function that splits a string into words.

Prototype: char **strtow(char *str);
The function returns a pointer to an array of strings (words)
Each element of this array should contain a single word, null-terminated
The last element of the returned array should be NULL
Words are separated by spaces
Returns NULL if str == NULL or str == ""
If your function fails, it should return NULL
Compiler: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow
