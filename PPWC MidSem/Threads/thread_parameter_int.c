#include <stdio.h>
#include <pthread.h>
void *passint(void *arg);
int main()
{
    int x = 20;
    pthread_t t;
    pthread_create(&t, NULL, passint, (void *)&x);
    pthread_join(t, NULL);
    return 0;
}
void *passint(void *arg)
{
    int recv;
    recv = *((int *)(arg));
    printf("Parameter value=%d\n", recv);
    pthread_exit(NULL);
}