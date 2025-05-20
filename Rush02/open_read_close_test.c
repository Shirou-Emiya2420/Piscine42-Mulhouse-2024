#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    char    buf[1024];
    int     fd;
    int     success;
    int     byte_read;
    int     i;

    if (argc != 2)
        return (0);

    //open
    fd = open(argv[1], O_RDONLY);
    printf("fd        = %d\n", fd);
    if (fd == -1)
    {
        printf("Error opening the file\n");
        return (-1);
    }

    //read
    byte_read = read(fd, buf, 1000);
    i = -1;
    /* replace new line by what you want */
    while (++i < 1000)
        if (buf[i] == '\n')
            buf[i] = '\n';
    printf("byte_read = %d\n", byte_read);

    //close
    success = close(fd);
    printf("success   = %d\n", success);
    if (success != 0)
    {
        printf("Error closing the file\n");
        return (-1);
    }
    printf("\n%s", buf);
    return (0);
}
