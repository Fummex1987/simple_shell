#include "main.h"

int main(int argc, char *argv[]) {
    
if (argc == 1) {
print_function("No command-line arguments.\n");
} 
else {
print_function("Command-line arguments:\n");
        
for (int i = 1; i < argc; i++) {
print_function("Argument %d: %s\n", i, argv[i]);
}
}
return 0;
}

