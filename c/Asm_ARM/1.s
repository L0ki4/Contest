.global satsum
satsum:
adds r0, r0, r1
movcs r0, #-1
bx lr