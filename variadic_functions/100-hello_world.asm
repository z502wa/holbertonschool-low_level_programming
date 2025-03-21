; File: 100-hello_world.asm
; Assemble with:
;   nasm -f elf64 100-hello_world.asm
; Link with:
;   ld -o hello 100-hello_world.o
; أو كما ذُكر في التعليمات:
;   nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello

global _start

section .data
    msg db "Hello, World", 10   ; النص المراد طباعته + سطر جديد
    len equ $ - msg             ; حساب طول النص

section .text
_start:
    ; استدعاء syscall للكتابة
    mov rax, 1                  ; رقم استدعاء النظام للكتابة (write)
    mov rdi, 1                  ; الرقم المميز لـ stdout
    mov rsi, msg                ; عنوان بداية الرسالة
    mov rdx, len                ; طول الرسالة
    syscall

    ; استدعاء syscall للخروج
    mov rax, 60                 ; رقم استدعاء النظام للخروج (exit)
    xor rdi, rdi                ; كود الخروج 0
    syscall
