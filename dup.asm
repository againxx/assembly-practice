    .data
HelloStr:
    .ascii "Hello World\n"
    .global _start
    
    .text
_start:
    movq $32, %rax
    movq $2, %rdi
    syscall
    movq %rax, %rdi
    movq $1, %rax
    movq $HelloStr, %rsi
    movq $13, %rdx
    syscall
    movl $60, %eax
    movl $32, %edi
    syscall
