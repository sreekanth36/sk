// 4. Write a list of system calls used in process management with proper syntax?

There are some system calls used in Linux for process management. These are as follows:

"1"=>Fork(): It is used to create a new process
       fork - create a child process

"2"=> Exec(): It is used to replacing a current running process
        execv - execute a programme
	int execve(const char *filename, char *const argv[],
                  char *const envp[]);


"3"=> Exit(): It is used to exit or terminate the process
		
           _ISOC99_SOURCE || _POSIX_C_SOURCE >= 200112L



"4"=> Wait(): It is used to make the process to wait
         
        wait, waitpid, waitid - wait for process to change state
	 pid_t wait(int *wstatus);
        


       pid_t waitpid(pid_t pid, int *wstatus, int options);

       int waitid(idtype_t idtype, id_t id, siginfo_t *infop, int options);
                       /* This is the glibc and POSIX interface; see
                          NOTES for information on the raw system call. */


"5"=> Getpid(): It is used to find the unique process ID
       pid_t getpid(void);
       pid_t getppid(void);

      getpid, getppid - get process identification

	
"6"=> Getppid(): It is used to check the parent process ID
Nice(): It is used to bias the currently running process property
         nice - change process priority
         int nice(int inc);


