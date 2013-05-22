/*****************************************************************************
 * ex02.cpp -- exercise 2 chapter 7
 *
 * Write a program that asks the user to enter up to 10 golf scores, which 
 * are to be stored in an array. You should provide a means for the user
 * to terminate input prior to entering 10 scores. The program should display
 * all the scores on one line and report the average score. Handle input,
 * display, and the average calculation with three separate 
 * array-processing functions.
 *
 */
#include <iostream>

const int kMaxNumScores = 10;

int read_scores(int[]);
void display_scores(const int*, int);
void average_scores(const int*, int);

int main()
{
    int scores[kMaxNumScores];

    int numScoresEntered = read_scores(scores);
    display_scores(scores, numScoresEntered);
    average_scores(scores, numScoresEntered);

    return 0;
}

int read_scores(int scores[])
{
    int score;
    int nScoresRead = 0;

    std::cout << "Please enter up to 10 golf scores (q to quit): \n";
    while (nScoresRead < kMaxNumScores && std::cin >> score) {
        scores[nScoresRead] = score;
        nScoresRead++;
    }

    return nScoresRead;
}

void display_scores(const int scores[], int nScores)
{
    std::cout << "Scores Entered\n";
    for (int i = 0; i < nScores; i++) {
        std::cout << scores[i] << ' ';
    }
    std::cout << std::endl;
}

void average_scores(const int scores[], int n_scores)
{
    int total = 0;
    for (int i = 0; i < n_scores; i++) {
        total += scores[i];
    }
    std::cout << "The average is: " << (double)total / (double)n_scores 
              << std::endl;

    
}
