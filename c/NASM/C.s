global main

extern scanf
extern printf

section .text
main:

push perem
push type

call scanf
mov ebx, [perem]

call scanf
pop eax
pop eax
mov eax, [perem]

sub ebx, eax

push ebx
push type

call printf
pop eax
pop eax

xor eax, eax
ret

section .data
type: db "%d", 0

section .bss
perem: resd 1