global main

extern scanf
extern printf

section .text
main:

push perem
push type

call scanf
mov ebx, [perem] ; ebx - 1

call scanf
pop eax
pop eax
mov eax, [perem]  ; eax - 2

cmp eax, ebx
cmovg eax, ebx

push eax
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