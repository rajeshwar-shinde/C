all: main.elf 

main.elf : main.o globals.o
	arm-none-eabi-ld -Tmain.ld -Map=main.map -o main.elf main.o globals.o
	arm-none-eabi-readelf -a main.elf > main.txt

main.o : main.c
	arm-none-eabi-gcc -Wall -nostdlib -fno-builtin -ffreestanding -c main.c

globals.o : globals.c
	arm-none-eabi-gcc -Wall -nostdlib -fno-builtin -ffreestanding -c globals.c
	
clean:
	rm -rf *.o *.map *.elf *.txt
