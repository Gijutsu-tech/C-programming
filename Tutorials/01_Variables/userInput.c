#include <stdio.h>


int main(){


    printf("This is a tutorial on User Input \n");

    int abc;

    printf("Enter a number: ");
    scanf("%d", &abc);
    printf("The number is %d \n", abc);

    
    //Recieving input of strings--
    
    //1. Using scanf--
    char name[20];  // Can store up to 19 characters + '\0' , Note that 20 or any other appropriate value is neccessary here.
    
    printf("Enter your name: ");
    scanf("%s", &name); //scanf can not include whitespaces
    printf("Hello %s \n", name);

    //fgets() - fgets() is a better way to store string input as it can include whitespaces. Always use fgets() over scanf for stings

    while (getchar() != '\n'); //If scanf was used earlier, always use this before using fgets to clear the '\n' buffer due to scanf.
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Read input safely

    printf("Hello, %s", name);
    //explaination--
        // Here, in line 27, 'name' is 'buffer' - the variable in which the input is stored, 'sizeof(name)' is 'size' - the maximum number of characters to read, and 'stdin' is 'source'.
        //Note that hardcoded values can be used as the 'size' but using the size of variable is a good practice to avoid errors.


    return 0;
}