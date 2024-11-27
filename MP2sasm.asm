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
        movss xmm0, [rdx] ; get value of passed array address
	movss xmm4, [const] ; move the 255 const value to xmm4 for multiplication
	mulss xmm0, xmm4 ; multiply val w/ 255
	cvtss2si rax, xmm0 ; convert to integer
        mov [r8], rax ; move to integer array
        
        ; move to the next element
        add rdx, 4 
        add r8, 4
        
        ; counter for each array element
        dec rcx
        cmp rcx, 0
        jnz imgCvtGrayDoubleToInt
ret