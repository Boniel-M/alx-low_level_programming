section .data
    hello db "Hello, Holberton", 0x0a, 0

section .text
    global main

    extern printf

main:
    push rbx
    lea rdi, [hello]
    mov ebx, 0
    call printf
    pop rbx
    xor eax, eax
    ret
