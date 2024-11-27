; GROUP #4
; Members: HERCE, DOMINIC MARCUS REYES & TAN, PETER BENJAMIN ALELIGAY

section .data
const dd 255.0
section .text
bits 64
default rel
global imgCvtGrayDoubleToInt
imgCvtGrayDoubleToInt:
	; params: n = rcx, floatVec = rdx, intVec = r8
        movss xmm0, [rdx]
	movss xmm4, [const]
	mulss xmm0, xmm4
	cvtss2si rax, xmm0
        mov [r8], rax
        add rdx, 4
        add r8, 4
        dec rcx
        cmp rcx, 0
        jnz imgCvtGrayDoubleToInt
ret