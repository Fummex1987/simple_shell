#include "main.h"
/*
 *
 */
int main() {
    char command[300];

    while (1) {
        print_function("Enter a command (or 'exit' to quit): ");
        fgets(command, sizeof(command), stdin);

        
        if (strcmp(command, "exit\n") == 0) {
            printf("Exiting the shell.\n");
exit(0)
}

      
}

return 0;
}

