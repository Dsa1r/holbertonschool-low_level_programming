section .data
    msg db "Hello, World", 10
    len equ $ - msg

section .text
    global main

main:
    ; write syscall
    mov rax, 1          ; syscall: write
    mov rdi, 1          ; file descriptor: stdout
    mov rsi, msg        ; address of string
    mov rdx, len        ; length of string
    syscall

    ; exit syscall
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status = 0
    syscall
