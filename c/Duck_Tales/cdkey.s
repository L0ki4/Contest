global main

extern scanf
extern printf

section .text
main:

push perem
push type

call scanf
mov ebx, [perem] ; ebx = 1

call scanf
pop eax
pop eax
mov eax, [perem] ; eax = 2

add ebx, eax ; ebx = 1 + 2
cmp ebx, 42

je .L0
push outputN

jne .L1 

.L0:
push outputY

.L1:

call printf
pop eax

xor eax, eax

ret

section .data
outputY: db "Accepted!", 0
outputN: db "Wrong key!", 0
type: db "%d", 0

section .bss
perem: resd 1