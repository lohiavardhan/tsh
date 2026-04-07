.section .text
.global _start
_start:
    xor  %rbp, %rbp
    pop  %rdi               /* argc */
    mov  %rsp, %rsi         /* argv */
    and  $-16, %rsp         /* align stack */
    lea  8(%rsi,%rdi,8), %rdx  /* envp */
    call main
    mov  %rax, %rdi
    mov  $60, %rax          /* SYS_exit */
    syscall
