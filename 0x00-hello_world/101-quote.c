#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int stderr_fd = open("/dev/stderr", O_WRONLY);

    write(stderr_fd, message, 43);
    close(stderr_fd);

    return (1);
}
