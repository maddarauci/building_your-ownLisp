# building_your-ownLisp
you can find the book here[https://www.buildyourownlisp.com]


how to compile:
`cc -std=c99 -Wall $filename -o prompt` 
on windows use `gcc` instead of cc


compiling with Editline:

fatal error: editline/readline.h: No such file or directory #include <editline/readline.h>

to fix this on linux: `sudo apt-get install libedit-dev`

