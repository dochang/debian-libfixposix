#include <stdio.h>

#include <lfp.h>

int main()
{
    fd_set rset, wset, eset;

    lfp_fd_zero(&rset);
    lfp_fd_zero(&wset);
    lfp_fd_zero(&eset);

    for(unsigned i = 0; i < FD_SETSIZE; i++) {
        if(lfp_fd_isset(i, &rset)) {
            printf("%d ", i);
        }
    }

    return 0;
}
