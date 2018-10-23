all: main.o open_close.o read_write.o header.h
  gcc main.o open_close.o read_write.o
  
main.o: main.c header.h
  gcc -c main.c
  
open_close.o: open_close.c header.h
  gcc -c open_close.c
  
read_write.o: read_write.c header.h
  gcc -c read_write.c
  
run:
  ./a.out
  
clean:
  rm *.o
