**Objectives**

- To be able to use the functions of the character handling library(ctype).
- To be able to use the string character and character input/output functions of the standard input/output library(stdio).
- To be able to use the conversion functions of the general utilities library(stdlib).
- To be able to use the string processing functions of the string handling library(string).
- To appreciate the power of function libraries as a means of achieving software reusability.

**Introduction**

C standard library functions facilitate string and character processing.The functions enable programs to process characters,strings,lines of text and blocks of memory.
Techniques used to develop editors,word processors,page layout software,computerised typesetting systems and other kinds of text processing software are discussed.

--- 

**Fundamentals of strings and characters**

Characters are fundamental building blocks of source programs.Every program is composed of a sequence of characters that when grouped together meaningfully is interpreted by the computer as a series of instructions used to accomplish a task.A program may contain character constants.
A character constant is an int value represented as a character in single quotes.The value of a character constant is the integer value of the character in the machines set.For example,'z' represents the integer value of z,and '\n' represents the integer value of newline.

A string is a series of characters treated as a single unit.A string include letters,digits and various special characters such as +,-,*,/ and $.String literals,or string constants,in C are written in double quotation marks.

A string in C is an array of characters ending in the null character ('\0').A string is accessed via a pointer to the first character in the string.The value of a string is the address of its first character.In C its appropriate to say that a string is a pointer - infact,a pointer to the string first character.