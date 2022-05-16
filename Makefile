all: default

default:
	@echo "Kein Recipe gewählt"

ansi_color:
	@echo "Compiliere ansi_color.c ..."
	gcc -o ansi_color.elf ansi_color.c

format:
	@echo "Compiliere format.c ..."
	gcc -o format.elf format.c

pp6:
	@echo "Compiliere pp6.c ..."
	gcc -o pp6.elf pp6.c
