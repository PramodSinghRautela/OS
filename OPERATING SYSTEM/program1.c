 #include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
 int main(){
     fork();
     printf("%d\n",getpid());
     
 }
