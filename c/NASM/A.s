global main
extern printf
section .text

main:

push svoboda
call printf
pop eax

xor eax, eax
ret

section .data
svoboda: db "Liberté, égalité, fraternité!", 0x0A, 0

section .bss