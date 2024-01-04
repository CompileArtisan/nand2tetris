#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORD_LENGTH 20

char* getRandomWord();

int main() {
    char* word = getRandomWord();
    int wordLength = strlen(word);
    char guessedLetters[MAX_WORD_LENGTH];
    int numGuesses = 0;
    int maxGuesses = 6;
    int i;

    for (i = 0; i < wordLength; i++) {
        guessedLetters[i] = '_';
    }
    guessedLetters[wordLength] = '\0';

    printf("Welcome to Hangman!\n");
    printf("Guess the word: %s\n", guessedLetters);

    while (numGuesses < maxGuesses) {
        char guess;
        printf("Enter your guess: ");
        scanf(" %c", &guess);

        int found = 0;
        for (i = 0; i < wordLength; i++) {
            if (word[i] == guess) {
                guessedLetters[i] = guess;
                found = 1;
            }
        }

        if (!found) {
            numGuesses++;
            printf("Incorrect guess! You have %d guesses left.\n", maxGuesses - numGuesses);
        } else {
            printf("Correct guess!\n");
        }

        printf("Current progress: %s\n", guessedLetters);

        if (strcmp(word, guessedLetters) == 0) {
            printf("Congratulations! You guessed the word correctly: %s\n", word);
            break;
        }
    }

    if (numGuesses == maxGuesses) {
        printf("Game over! You ran out of guesses. The word was: %s\n", word);
    }

    free(word);
    return 0;
}

char* getRandomWord() {
    char* words[] = {"apple", "banana", "cherry", "date", "elderberry", "fig", "grape", "honeydew", "kiwi", "lemon"};
    int numWords = sizeof(words) / sizeof(words[0]);

    srand(time(NULL));
    int randomIndex = rand() % numWords;

    char* word = malloc(MAX_WORD_LENGTH * sizeof(char));
    strcpy(word, words[randomIndex]);

    return word;
}
