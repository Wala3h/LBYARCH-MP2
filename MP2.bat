nasm -f win64 MP2sasm.asm
gcc -c MP2c.c -o MP2c.obj -m64
gcc MP2c.obj MP2sasm.obj -o MP2.exe -m64
MP2.exe