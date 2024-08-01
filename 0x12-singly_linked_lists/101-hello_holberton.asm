section .data
    hello db "Hello, Holberton", 0 ; null-terminated string

section .text
    global _start
    extern printf

_start:
    ; Call printf
    mov rdi, hello   ; Set the first argument (format string)
    xor rax, rax     ; Clear rax (no floating-point arguments)
    call printf      ; Call printf function

    ; Exit program
    mov rax, 60      ; syscall: exit
    xor rdi, rdi     ; exit code: 0
    syscall          ; invoke syscall

