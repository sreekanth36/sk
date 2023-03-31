// 2. What is difference between fork, vfork and exec system call?

Differences between fork() and vfork()
 " fork()"                                
->create a child process               
  pid_t fork(void);
-> both child and parent process will have different address space					
					  
-> behaviour is predictable
-> both parent and child execute simultaneously
->this uses cow(copy on write)
-> on success of fork returns zero and +ve at a time
->on failure returns -1




"vfork()"
->create a child process and block parent
pid_t vfork(void)

-> both child and parent process will have same address space					

-> behaviour is  not predictable
->parent process will suspended untill child execution is completed
-> this does not use cow
->on success of


"exec()"
replace the current process with a new program
       int execve(const char *filename, char *const argv[],
                  char *const envp[]);
-> it family members are
	execl,execlp,execle,execv,execvpe,execvp
-> on success of execve() does not return any value
-> on failure it returns -1
	
