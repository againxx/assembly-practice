global _start
    section .rodata
str: db "Hello World!", 10

    section .text
_start:
   mov rax, 1 
   mov rdi, 1
   mov rsi, str
   mov rdx, 14
   syscall
   mov eax, 60
   mov edi, 32
   syscall

