section .data
    hello db 'Hello, Holberton', 0xa  ; The string to print followed by a newline
    hello_len equ $ - hello           ; Length of the string

section .text
    global _start

_start:
    ; Set up the parameters for the printf function
    mov rdi, format_string
    mov rsi, hello
    call printf

    ; Exit the program
    mov rax, 60        ; syscall number for exit
    xor rdi, rdi       ; exit code 0
    syscall

section .data
    format_string db '%s', 0      ; The format string for printf

