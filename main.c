#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
  printf("demo open:******************************************\n\n");
  int filedesc = open("testfile.txt", O_RDWR);
    
  printf("demo read:******************************************\n\n");
  char filechars[100];
  read(filedesc, filechars, 100);
  int i=0;
  while(filechars[i]){
    printf("%c", filechars[i]);
    i++;
  }
  
  printf("demo write:*****************************************\n\n");
  printf("%d", write(filedesc, "12345678910", 10));
  
  printf("demo close:*****************************************\n\n");

  return 0;
}



