    .data
HelloStr:
    .ascii "Hello World\n"
    .global _start
    
    .text
_start:
    movq $1, %rax
    movq $1, %rdi
    movq HelloStr, %rsi
    movq $13, %rdx
    syscall
    movl $60, %eax
    movl $32, %edi
    syscall
