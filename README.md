**Problem 3.21**

**Resources:**
1. [Code](https://github.com/SeanStaz/theCollatzConjecture.c)
2. [fork() Documentation](https://man7.org/linux/man-pages/man2/fork.2.html) 
3. [Tutorial fork(), exec()](https://www.youtube.com/watch?v=IFEFVXvjiHY)


**Modifications**:
1. Removed a print statement

 **Explanation** :
 1. Check if entered number is less than zero
 2. If not ask user to enter a new number.
 3. Start a child process
 4. Check the ID (child process returns 0, parent process returns child process ID)
 5. If ID is zero (child process), start a while loop to implement the Collatz algorithm.
 6. If ID is non zero, then parent process is completed and the whole thing is over.

 **Additional Instructions** :
1. Clone the repo using git clone.
2. Compile the Q21.c file using gcc Q21.c -o Q21
3. To run the assignment go to the terminal and find the directory that contains the compiled file. 
4. To run the program type ./Q21.
5. Use man to get documentation from terminal

**Problem 3.27**

**Resources**: 
1. [Source code](https://github.com/manojkmeena/OS-Project) 
2. [read() Documentation](https://man7.org/linux/man-pages/man2/read.2.html)
3. [open() Documentation](https://man7.org/linux/man-pages/man2/open.2.html)
4. [Tutorial open(), read(), write()](https://www.youtube.com/watch?v=dP3N8g7h8gY)
5. [open() parameters](https://stackoverflow.com/questions/2245193/why-does-open-create-my-file-with-the-wrong-permissions )

**Modifications**:
1. Removed comments to run the file and added as a part of README.md

**Explanation** :
1. Use open() to open "fileOpen" to be read and "targetFile" to be copied to.
2. O_RDWR: Allow both read and write operations on the file
3. O_CREAT: Create the file if it doen't exist before opening.
4. O_APPEND: Dont erase file contents everytime it's used/opened.
5. The set of permissions used here is 0 and 0666 respectively.
6. 

**Additional Instructions** :
1. Clone the repo using git clone.
2. Compile the Q21.c file using gcc filecopy.c -o cp
3. In Terminal, Run echo "enter any data here." > input.txt
3. In Terminal, Run ./cp input.txt copy.txt
4. In Terminal, Run cat copy.txt
5. Use man to get documentation from terminal