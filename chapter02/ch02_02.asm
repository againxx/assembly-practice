    extern g_Val1
    global IntegerLogical_

    section .text
IntegerLogical_:
    and edi, esi
    or edi, edx
    xor edi, ecx
    add edi, [g_Val1]
    mov eax, edi
    ret
