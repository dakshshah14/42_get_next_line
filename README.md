# 42_get_next_line

## Problem Statement: Write a function in C that returns a line read from a file descriptor.
- A “line” is a succession of characters that end with ’\n’ (ascii code 0x0a) or with End Of File (EOF).
- The first parameter is the file descriptor that will be used to read.
- The second parameter is the address of a pointer to a character that will be used to save the line read from the file descriptor.
- The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed, or if an error has happened respectively.
- Your function get_next_line must return its result without ’\n’.
- Calling your function get_next_line in a loop will then allow you to read the text available on a file descriptor one line at a time until the end of the text, no matter the size of either the text or one of its lines.
- Make sure that your function behaves well when it reads from a file, from the standard output, from a redirection etc.
- In you header file get_next_line.h you must have at least the prototype of the function get_next_line and a macro that allows to choose the size of the reading buffer for the read function. That macro must be named BUFF_SIZE.
- Succeed get_next_line with a single static variable.
- Your function should be able to manage multiple file descriptor with your get_next_line. For ex- ample, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

## Breaking down the Problem:
1. Reading one character from the file (understanding **open(*file name, access rights*)** and **read(*file descripter, buffer, BUFF_SIZE)**)
2. Reading many characters from the file (understanding iteration on read using a ***while*** loop)
3. Read all characters from the file (understanding ***EOF***)
4. Appending read characters of ***buffer*** into the ***destination line*** (using ***ft_strjoin()***)
5. Stop appending when we reach ***\n*** (using ***ft_strchr()***)
6. At this point, we have read the first line, but when we try to read the next line, some ***remainder*** from the previously read line gets skipped
7. Save the ***remainder*** from the ***buffer*** (using ***ft_strcpy()***)
8. Now, before we read the next line, check if the remainder has any characters. If yes, add it to the ***destination line*** (using ***ft_strdup()***)
9. 
