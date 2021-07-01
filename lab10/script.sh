gcc -c main.c
gcc -c create.c
gcc -c rmprint.c
gcc -o exe main.o create.o rmprint.o
./exe