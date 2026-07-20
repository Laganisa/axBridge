.section .text.start
.global _start

_start:
    bl main
    mov w0, w0
    bl axlib_exit

hang:
    b hang