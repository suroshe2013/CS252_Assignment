# Solution
---
## Requirements
You will require Visual Studio Code and GNU Compiler Collection (GCC) in order to be able to run the program CollatzConjecture.c

[Steps to install GCC compiler on macOS](https://mkyong.com/mac/how-to-install-gcc-compiler-on-mac-os-x/)
[Download Visual Studio Code for macOS](https://github.com/microsoft/vscode-docs/blob/main/docs/setup/mac.md)

## Running the program
- The program can be run using Visual Studio Code.

## Implementation
- The program is written in C language for applying the Collatz Conjecture algorithm.
- The input is taken using the main() function.
- We then create a child process to perform the calculation.
- The parent process waits till the completion of the child process and then finishes executing.

## List of system calls used 
### 1. fork()
>  pid_t fork()
 - Creates a new process. The new process (the child process) is an exact duplicate of the process that calls fork() (the parent process)
 - Upon successful completion, fork() returns 0 to the child process and returns the process ID of the child process to the parent process. Otherwise, -1 is returned to the parent process, no child process is created.

  
  ### 2. wait()
  > pid_t wait(int *status_ptr)
  - Suspends the calling process until any one of its child processes ends. More precisely, wait() suspends the calling process until the system obtains status information on the ended child. 
  - The argument status_ptr points to a location where wait() can store a status value.
  - The status_ptr pointer may also be NULL, in which case wait() ignores the child's return status.



  
## References
#### functions
- [https://www.ibm.com/docs/en/zos/2.3.0?topic=functions-wait-wait-child-process-end]
- [https://www.ibm.com/docs/en/zos/2.3.0?topic=functions-fork-create-new-process]

#### Code and documentation assistance
- Mr. Prasad Savanur