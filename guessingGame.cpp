#include <iostream>
using namespace std;

int main(){
srand(time(NULL));
int number = rand() % 100 + 1;
int guess;
int guessCount = 0;

while(guess != number)
{
cout << "guess the number 1 - 100";
cin >> guess;
guessCount++;

 if (cin.fail())
 {
   cin.clear();
   cin.ignore();
   cout << "You dummy... that's not a number";
 }
 else if(guess == number)
 {
 cout << "You must be a genius-pants.";
 cout << "You got the answer in only: " << guessCount << "guesses. I expect better next time." << endl;
 }
 else if(guess > number)
 {
 cout << "That's too high... haha, you fail.";	
 }
 else
 {
 cout << "That was too low... It is no surprise that you have failed again. MWAHAHA";
 }
}
return 0;
}
