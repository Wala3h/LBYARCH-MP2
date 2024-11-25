nasm -f win64 MP2.asm
gcc -c MP2.c -o MP2.obj -m64
gcc MP2.obj MP2.obj -o MP2.exe -m64
MP2.exe
3 4
0.25 0.35 0.45 0.33
0.55 0.65 0.75 0.33
0.85 0.95 0.15 0.33