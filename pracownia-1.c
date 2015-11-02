#include <stdio.h>
#include <pthread.h>

void* thread(void* params);

int main(int argc, char *argv[]) 
{
  pthread_t tid;
  pthread_attr_t attr;

  pthread_attr_init(&attr);
  pthread_create(&tid, &attr, thread, NULL);
  pthread_join(tid, NULL);

  return 0;
}

void* thread(void* params) 
{
  printf("Jakis tekst\n");
}
