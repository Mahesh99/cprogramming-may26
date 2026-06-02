#include<stdio.h>
void main() {
    char class;
    printf("Enter class:");
    scanf("%c",&class);
    switch (class) { 
        case 'B':
        case 'b': printf("Battleship\n");
                    break;
        case 'C':
        case 'c': printf("Cruiser\n");
                    break;
        case 'D':
        case 'd': printf("Destroyer\n");
                    break;
        default: printf("Unknown ship class%c\n",
                        class);
    }
}