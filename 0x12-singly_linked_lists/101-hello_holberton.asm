section .data
    hello db "Hello, Holberton", 0

section .text
    extern puts

global main
main:
    ; Call puts function
    mov rdi, hello
    call puts

    ; Exit the program
    mov eax, 0
    ret
