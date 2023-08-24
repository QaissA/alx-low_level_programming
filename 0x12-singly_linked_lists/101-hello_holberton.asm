section .data
    hello db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main
    extern printf

main:
    ; Call printf with the format string and the address of the hello string
    mov rdi, format
    mov rsi, hello
    xor rax, rax ; Clear RAX register (return value of printf)
    call printf

    ; Exit the program
    xor rdi, rdi ; Exit code 0
    mov rax, 60  ; syscall number for exit
    syscall
