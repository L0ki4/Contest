.extern printf
.extern varspec
format: .ascii "%u\n\0"
.global main
main:
stmfd sp!, {lr}

ldr r0, =format

ldr r1, =varspec
ldr r1, [r1]

bl printf

mov r0, #0
ldmfd sp!, {pc}