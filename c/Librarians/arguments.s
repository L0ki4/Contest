global main
section .text

main:
push ebp
mov  ebp, esp
mov  eax, [ebp + 8]
sub  eax, 1
pop  ebp
ret
