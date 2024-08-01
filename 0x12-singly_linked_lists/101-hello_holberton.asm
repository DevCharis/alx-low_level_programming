section .data
    msg db 'Hello, Holberton', 0x0A  ; The message with a newline character
    len equ $ - msg                  ; Calculate the length of the message

section .text
    global _start                    ; Provide the global entry point

_start:
    ; Write the message to stdout
    mov rax, 1                       ; syscall number for sys_write
    mov rdi, 1                       ; file descriptor 1 is stdout
    mov rsi, msg                     ; address of the message
    mov rdx, len                     ; number of bytes
    syscall                          ; invoke the system call

    ; Exit the program
    mov rax, 60                      ; syscall number for sys_exit
    xor rdi, rdi                     ; exit code 0
    syscall                          ; invoke the system call

