; GROUP #4
; Members: HERCE, DOMINIC MARCUS REYES & TAN, PETER BENJAMIN ALELIGAY

section .data
const dq 255.0
section .text
bits 64
default rel
global imgCvtGrayDoubleToInt
imgCvtGrayDoubleToInt:
        ; params: n = rcx, floatVec = rdx, intVec = r8
        movsd xmm0, [rdx] ; get value of passed array address
		movsd xmm4, [const] ; move the 255 const value to xmm4 for multiplication
		mulsd xmm0, xmm4 	; multiply val w/ 255
		cvtsd2si rax, xmm0  ; convert to integer
        mov [r8], rax 	; move to integer array
        
        ; move to the next element
		xor rax, rax
        add rdx, 8
        add r8, 1
        
        ; counter for each array element
        dec rcx
        cmp rcx, 0
        jnz imgCvtGrayDoubleToInt
ret