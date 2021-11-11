The details provided below are in accordance with  [Operating System Concepts, Tenth Edition](https://codex.cs.yale.edu/avi/os-book/OS10/index.html)

# Problem 3.21

**Resources:**
1. [Code](https://github.com/SeanStaz/theCollatzConjecture.c)
2. [fork() Documentation](https://man7.org/linux/man-pages/man2/fork.2.html) 
3. [Tutorial fork(), exec()](https://www.youtube.com/watch?v=IFEFVXvjiHY)


**Modifications**:
1. Removed a print statement

 **Explanation** :
 1. Check if entered number is less than zero
 2. If not ask user to enter a new number.
 3. Execute the fork() system call. 
 4. Check the ID returned by fork. Zero implies child process else it's a parent process (returns child process ID).
 5. If ID is zero (child process), start a while loop to implement the Collatz algorithm, n/2 if 'n' is even or 3n + 1 if 'n' is odd, until you reach 1.
 6. If ID is non zero, then parent process is completed and the program terminates.

 **Additional Instructions** :
1. Clone the repo using 
    ```
    git clone https://github.com/haran2001/CS252_assignment
    ```
2. Compile the Q21.c file using 
    ```
    gcc Q21.c -o Q21
    ```
3. To run the assignment go to the terminal and find the directory that contains the compiled file. 
4. Run the program from the terminal using
```
./Q21
```
5. Enter a number 'n' in the terminal to apply the algorithm.
6. Result will be displayed on the screen.
6. You can use the man command to get documentation on any system call from terminal.

# Problem 3.27

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
6. The ID returned by fork() is 0, then the child process has been returned.
7. If the ID is positive then the parent process is returned.
8. If Id is negative then the pipr has failed.

**Additional Instructions** :
1. Clone the repo using 
    ```
    git clone https://github.com/haran2001/CS252_assignment
    ```
2. Compile the Q21.c file using gcc Q27.c -o Q27
3. Enter some content in a new file using
```
vi source.txt
```
4. Run the binary using
```
./Q27 source.txt target.txt
```
5. Contents of the source will be copied to target.txt
6. You can check the contents of target using
```
vi target.txt
```
5. Use 'man' to get documentation from terminal and 'find' to check if a given file exists in a directory.