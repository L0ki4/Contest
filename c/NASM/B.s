global main
extern printf
extern scanf
section .text

main:

push perem
push input
call scanf
pop eax
pop eax

mov eax, [perem]
and eax, 0xffff
push eax
push output

call printf
pop eax
pop eax

xor eax, eax
ret

section .data
input: db "%u", 0
output: db "%u", 0x0A, 0
section .bss
perem: resd 1