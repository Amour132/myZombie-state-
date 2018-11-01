#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t id = fork();
  if(id < 0)
  {
    printf("fork error\n");
    exit(1);
  }

  else if(id == 0)//child
  {
    printf("child[%d] is begin Z\n",getpid());
    sleep(5);
    exit(0);
  }
  else 
  {
    printf("parent[%d] is sleep\n",getpid());
    sleep(60);
  }
  return 0;
}
