section .text
    global IntergerAddSub_

IntergerAddSub_:
    mov eax, edi
    add eax, esi
    add eax, edx
    sub eax, ecx
    ret
