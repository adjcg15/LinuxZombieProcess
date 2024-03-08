#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid = fork();
    printf("Id del proceso: %d\n", pid);

    if(pid > 0) {
        sleep(60);
    } else if(pid == 0) {
        printf("\nProceso Zombie creado con éxito!");
        printf("\nEstará activo durante 60 segundos\n");
        exit(0);
    } else {
        printf("\nLo sentimos, el proceso hijo no pudo ser creado...");
    }

    return 0;
}