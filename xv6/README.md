# Adding ps_xv6 in xv6 to simulate the ps command of linux

In the process, totally we will modify 7 files.
1. Define system call and assign it a number in **syscall.h**
2. Add actual function’s prototype in **syscall.c** Note that we don’t define the function implementation here.
3. Add interface in  **usys.S**
4. Add the function in  **user.h**
5. Add the return function in  **sysproc.c**
6. Add the actual implementation of syscall in  **proc.c**

      ● The function starts with  **sti()** This enables interrupts on the processor.

      ● **acquire(&ptable.lock)** locks the ptable before operating over it. Because xv6 runs on multiprocessor. There might be interrupt handlers running at the same time as other kernel’s code.
  
      ● **cprintf()**  return its value on console.
  
      ● Release the lock.
7. Add function prototype in //proc.c of  **defs.h**

You can just download the xv6 folder and run it in your setup.

### How to Run:

1. Enter **make qemu** on terminal
2. See the commands in xv6 by **ls**
3. After assuring **ps_xv6** is in the list, enter **ps_xv6** in qemu.
4. Terminate qemu.

### Output: 

​ The output shows name, process id and state of the used processes on the console.


### References:

[1] ​ https://medium.com/@viduniwickramarachchi/add-a-new-system-call-in-xv6-5486c2437573

[2] ​ https://youtu.be/21SVYiKhcwM
