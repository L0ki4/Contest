global main

extern scanf
extern printf

section .text
main:

mov rsi, varp1
mov rdx, varp2
mov rdi, read
xor rax, rax

call scanf
mov rsi, [varp1]
mov rdx, [varp2]

add rsi, rdx
mov rdi, printNO
mov rbx, printYES

cmovc rdi, rbx
xor rax, rax

call printf

xor rax, rax
ret

section .data
read: db "%lu%lu", 0
printYES: db "YES", 0
printNO: db "NO", 0

section .bss
varp1: resq 1
varp2: resq 1