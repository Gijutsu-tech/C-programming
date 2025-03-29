#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//processing
//compiling
//assembling
//linking

int generate_random(void);
void checkRandom(int randomNum);

int main(){

    printf("Welcome to guess the number game!\n");

    //generate a random number.
    srand(time(NULL)); //Seed random number generator so that a different number is generated each time
    int randomNum = generate_random();

    //check in a loop if the input matches the number.
    checkRandom(randomNum);
    

    return 0;
}

int generate_random(void){
    int randomNum = rand() % 10 + 1;
    return randomNum;
}

void checkRandom(int randomNum){
    int guessedNum = 0;
    int attempts = 0;
    do{
        printf("Enter a Number: ");
        scanf("%d", &guessedNum);
        attempts++;

        if (guessedNum > randomNum)
        {
            printf("Too High! Guess Lower.\n");
        }
        else if (guessedNum < randomNum)
        {
            printf("Too Low! Guess Higher.\n");
        }
        else{
            printf("Congratulations! You guessed correctly in %d attempts.\n", attempts);
        }
        
    } while(randomNum != guessedNum);
}