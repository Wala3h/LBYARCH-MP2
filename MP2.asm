section .data
const dd 255.0
section .text
bits 64
default rel
global CvtToInt
CvtToInt:
; params: floatVec[i][j] = xmm0
movss xmm4, [const]
mulss xmm0, xmm4
cvtss2si rax, xmm0
ret
