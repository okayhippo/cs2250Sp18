/*
 * =====================================================================================
 *
 *       Filename:  ch5_program.c
 *
 *    Description:  Enter players' numbers and ratings into an array, and
 *                  print roster
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:13:11 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int LEN = 5;

// Function Prototypes

// Main Function
int main()
{
    
    int jersey[LEN];
    int rating[LEN];
    int numPlayer = 0;
    int menuJersey;
    char menuChoice;

    while (numPlayer < LEN) {
        printf("Enter player %d's jersey number:\n", (numPlayer + 1));
        scanf("%d", &jersey[numPlayer]);

        // Check for valid rating input
        printf("Enter player %d's rating:\n", (numPlayer + 1));
        scanf("%d", &rating[numPlayer]);

        while (rating[numPlayer] < 1 || rating[numPlayer] > 9) {
            printf("Invalid rating entry. Please enter a number between 1 and 9\n");
            scanf("%d", &rating[numPlayer]);
        }

        printf("\n");
        numPlayer++;
    }

    printf("ROSTER\n");
    for (int i = 0; i < LEN; i++) {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, jersey[i], rating[i]);
    }

    
    do {
        // Menu
        printf("\n");
        printf("MENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n\n");
        printf("Choose an option:\n");
        scanf(" %c", &menuChoice);

        // OUTPUT ROSTER
        if (menuChoice == 'o') {
            printf("ROSTER\n");
            for (int i = 0; i < LEN; i++) {
                printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, jersey[i], rating[i]);
            }
        }// end output roster
        
        // UPDATE RATING
        else if (menuChoice == 'u') {
            printf("\n\n");
            printf("Enter a jersey number:\n");
            scanf("%d", &menuJersey);
            
            // Loop to find jersey number
            for (int i = 0; i < LEN; i++) {

                // Check for matching jersey
                if (menuJersey == jersey[i]) {
                    printf("Enter a new rating for player:\n");
                    scanf("%d", &rating[i]);

                    // Check for valid rating
                    while (rating[i] < 1 || rating[i] > 9) {
                        printf("Invalid rating entry. Please enter a number between 1 and 9\n");
                        scanf("%d", &rating[i]);
                    }
                }

                // No matching jersey jersey
                else if (menuJersey != jersey[LEN - 1]) {
                    printf("There is no jersey with this number\n");
                }
            }
        } // end update rating

        // OUTPUT ABOVE RATING
        else if (menuChoice == 'a') {
            int timesRun = 1;
            int playerRating;

            printf("\n\n");
            printf("Enter a rating:\n");
            scanf("%d", &playerRating);
            
            printf("ABOVE %d\n", playerRating);

            // Check for player ratings
            for (int i = 0; i < LEN; i++) {
                if (rating[i] > playerRating) {
                    printf("Player %d -- Jersey number: %d, Rating: %d", timesRun, jersey[i], rating[i]);
                }

                timesRun++;
            }
        } // end output above


        // REPLACE PLAYER
        else if (menuChoice == 'r') {
            int jerseyNum;

            printf("\n\n");
            printf("Enter a jersey number:\n");
            scanf("%d", &jerseyNum);

            // Loop to find jersey num
            for (int i = 0; i < LEN; i++) {
                
                // Check for number
                if (jerseyNum == jersey[i]) {
                    printf("Enter a new jersey number:\n");
                    scanf("%d", &jersey[i]);

                    printf("Enter a rating for the new player:\n");
                    scanf("%d", &rating[i]);
                }
                else if (jerseyNum != jersey[LEN - 1]) {
                    printf("Jersey number does not match any known players\n");
                    continue;
                }
            }
        }

    } while (menuChoice != 'q');

    return 0;
}
// Function Definitions


