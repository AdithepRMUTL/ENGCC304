#include <stdio.h>

int main() {
    char command;

    scanf("%c", &command);
    
    switch (command) {
        case 'A':
            printf("Add\n");
            break;
        case 'D':       
            printf("Delete\n");
            break;
        case 'U':
            printf("Update\n");
            break;
        default:
            printf("Unknown command\n");
    }

    return 0;
}