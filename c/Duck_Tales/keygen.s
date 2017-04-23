global main

extern scanf
extern printf

section .text
main:

push perem
push type

call scanf
pop eax
pop eax


mov ebx, [perem] ; ebx = 1
sub ebx, 100500 ; ebx = 1 - 100500

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