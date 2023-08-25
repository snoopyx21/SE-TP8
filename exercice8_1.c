#include<stdio.h>
#include<signal.h>
#include<unistd.h>
int i=0;
void sig_handler(int signo)
{
    if (signo ==SIGINT)
    {
        printf("received SIGINT\n");
        i++;
    }
}

int main(void)
{
    if ((signal(SIGINT, sig_handler)) == SIG_ERR)
        printf("\ncan't catch SIGINT\n");
    while(i<5)
       sleep(1);
    return 0;
}
