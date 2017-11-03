#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <dirent.h>

int main(){
  printf("Analyzing directory: csstuffs:\n");
  DIR * d;
  int i;
  d = opendir("csstuffs");
  struct dirent * dent;
  dent = readdir(d);
  int k;
  struct stat sb;
  while(dent){
    if(dent->d_type == DT_REG){
      struct stat sb;
      stat(dent->d_name, &sb);
      k+=(int)sb.st_size;
      //printf("%s\n", dent->d_name);
    } 
    dent = readdir(d);
  }
  DIR * d1;
  DIR * d2;
  d1 = opendir("csstuffs");
  struct dirent * dent1;
  d2 = opendir("csstuffs");
  struct dirent * dent2;
  dent1 = readdir(d1);
  dent2 = readdir(d2);
  printf("Total size of directory: %d\n", k);
  printf("\n");
  printf("Directories:\n");
  while(dent1){
    if(dent1->d_type == DT_DIR){
      printf("%s\n", dent1->d_name);
      //dent1 = readdir(d1);
    }
    dent1 = readdir(d1);
  }
  printf("\n");
  printf("Regular files:\n");
  while(dent2){
    if(dent2->d_type == DT_REG){
      printf("%s\n", dent2->d_name);
    }
    dent2 = readdir(d2);
  }
  closedir(d1);
  closedir(d2);
  closedir(d);
  return 0;
}
