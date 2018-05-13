echo 'Compiling...'
nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding
echo 'Linking the 2 kernels...'
ld -m elf_i386 -T link.ld -o aleeos/boot/kernel.bin kasm.o kc.o 
echo 'Generating ISO and grub...'
grub-mkrescue -o aleeos.iso aleeos/
echo 'Launching QEMU...'
qemu-system-x86_64 -kernel aleeos/boot/kernel.bin

read a