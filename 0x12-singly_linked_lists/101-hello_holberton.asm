section .data
    hello db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main
    extern printf

main:
    sub rsp, 8              ; Align the stack

    mov rdi, format         ; Set format string as first argument
    mov rsi, hello          ; Set hello string as second argument
    xor rax, rax            ; Clear RAX register (return value of printf)
    call printf             ; Call the printf function

    add rsp, 8              ; Restore the stack
    xor rdi, rdi            ; Set exit code to 0
    mov rax, 60             ; syscall number for exit
    syscall

section .bss
    resb 8                  ; Reserved space for stack alignment
