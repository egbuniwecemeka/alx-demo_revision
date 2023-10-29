#include <unistd.h>

int main()
{
    __FILE__ fd;

    fd = fopen("create.txt", "w")

    if (fd == NULL)
    {
        printf("The created file is empty\n");
        return 1;
    }

    fclose(fd);
    return (0);
}