Q21:

*Source*: 
1. https://github.com/SeanStaz/theCollatzConjecture.c
2. https://man7.org/linux/man-pages/man2/fork.2.html


*Modifications*:
1. Removed a print statement

 *Explanation* :
 1. Check if entered number is less than zero
 2. if not ask user to enter a new number.
 3. Start a child process
 4. Check the ID (child process returns 0, parent process returns child process ID)
 5. If ID is zero (child process), start a while loop to implement the Collatz algorithm.
 6. If ID is non zero, then parent process is completed and the whole thing is over.

 *Additional Instructions* :
1. Clone the repo using git clone.
2. Compile the Q21.c file using gcc Q21.c -o Q21
3. To run the assignment go to the terminal and find the directory that contains the compiled file. 
4. To run the program type ./Q21. 

Q27:

*Source*: https://github.com/manojkmeena/OS-Project

*Modifications*:
1. Removed comments to run the file and added as a part of README.md

*Explanation* :

*Additional Instructions* :
1. Clone the repo using git clone.
2. Compile the Q21.c file using gcc filecopy.c -o cp
3. In Terminal, Run echo "enter any data here." > input.txt
3. In Terminal, Run ./cp input.txt copy.txt
4. In Terminal, Run cat copy.txt