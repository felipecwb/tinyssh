/* Public domain. */
#include <sys/types.h>
#include <termios.h>
#include <sys/ioctl.h>

extern int openpty(int *, int *, char *, struct termios *, struct winsize *);

static void foo(void) {
    int master, slave;
    openpty(&master, &slave, 0, 0, 0);
}

int main(void) {
    return 0;
}
