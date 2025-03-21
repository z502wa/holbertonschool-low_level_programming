section .data
    hello db "Hello, World", 10  ; The string to print, followed by a newline (ASCII 10)
    hello_len equ $ - hello      ; Compute the length of the string

section .text
    global _start

_start:
    mov rax, 1         ; syscall number for sys_write (1)
    mov rdi, 1         ; file descriptor 1 (stdout)
    mov rsi, hello     ; pointer to the string
    mov rdx, hello_len ; length of the string
    syscall            ; invoke the system call

    mov rax, 60        ; syscall number for sys_exit (60)
    xor rdi, rdi       ; status 0 (success)
    syscall            ; invoke the system call
