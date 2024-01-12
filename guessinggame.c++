#include <iostream>
using namespace std;
#include <ctime>
int main() {
  int user;
  int attempt = 0;
  cout << "Welcome to the number guessing game!\n";
  cout << "select any random number between 1 to 1000. attempt to guess it.\n";

  srand(time(0));
  int k = rand() % 1000 + 1;
  while (1) {
        cout << "Enter your guess: ";
        cin >> user;
        attempt++;


        if (user == k) {
            cout << "Congratulations! You did it " << k << " in " <<attempt << " attempt.\n";
            break;
        } else if (user< k) {
            cout << "Too low! retry.\n";
        } else {
            cout << "Too high! retry.\n";
        }
    }

    return 0;
}
