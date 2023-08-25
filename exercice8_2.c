#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
int i=0;
void sig_handler(int signo)
{
    switch(signo)
    {
        SIGINT : 
        SIGABRT :
        SIGALRM :
        SIGFPE :
        SIGHUP :
        SIGILL :
        SIGKILL :
        SIGPIPE :
        SIGQUIT :
        SIGSEGV :
        SIGTERM :
        default : 
            i++;
            psignal(signo, "ERROR SIG \n");
            break;
    }
}

int main(void)
{
    if( (signal(SIGINT, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n");
    if( (signal(SIGABRT, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    if( (signal(SIGALRM, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    if( (signal(SIGFPE, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    if( (signal(SIGHUP, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    if( (signal(SIGILL, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    if( (signal(SIGKILL, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    if( (signal(SIGPIPE, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    if( (signal(SIGQUIT, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    if( (signal(SIGSEGV, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    if( (signal(SIGTERM, sig_handler)) ==SIG_ERR)
        printf("\n cant catcc SIG \n"); 
    while(i<10) sleep(1);
    return 0;
}
