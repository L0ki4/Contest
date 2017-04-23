	.arch armv7-a
	.eabi_attribute 28, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"01-4.c"
	.section	.rodata
	.align	2
.LC0:
	.ascii	"%d %d\000"
	.align	2
.LC1:
	.ascii	"%d\012\000"
	.text
	.align	1
	.global	main
	.syntax unified
	.thumb
	.thumb_func
	.fpu vfpv3-d16
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r7, lr}
	sub	sp, sp, #8
	add	r7, sp, #0
	mov	r2, r7
	adds	r3, r7, #4
	mov	r1, r3
	ldr	r3, .L3
.LPIC0:
	add	r3, pc
	mov	r0, r3
	bl	__isoc99_scanf(PLT)
	ldr	r2, [r7, #4]
	ldr	r3, [r7]
	eors	r3, r3, r2
	str	r3, [r7, #4]
	ldr	r3, [r7, #4]
	mov	r1, r3
	ldr	r3, .L3+4
.LPIC1:
	add	r3, pc
	mov	r0, r3
	bl	printf(PLT)
	movs	r3, #0
	mov	r0, r3
	adds	r7, r7, #8
	mov	sp, r7
	@ sp needed
	pop	{r7, pc}
.L4:
	.align	2
.L3:
	.word	.LC0-(.LPIC0+4)
	.word	.LC1-(.LPIC1+4)
	.size	main, .-main
	.ident	"GCC: (Debian 6.3.0-12) 6.3.0 20170406"
	.section	.note.GNU-stack,"",%progbits