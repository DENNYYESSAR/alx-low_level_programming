section .data  ; Data section, initialized variables
    msg db "Hello, Holberton", 0  ; C string needs a null terminator
    fmt db "%s", 10, 0  ; The printf format, "\n", '0'

section .text  ; Code section.
    extern printf  ; The C function to be called

    global main  ; The standard GCC entry point

main:  ; The program label for the entry point
    push rbp  ; Set up stack frame, must be aligned

    mov rdi, fmt
    mov rsi, msg
    mov rax, 0  ; or can be xor rax, rax
    call printf  ; Call C function

    pop rbp  ; Restore stack

    mov rax, 0  ; Normal, no error, return value
    ret  ; Return
