#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

void startScreen() {
    cout << "      THIS MAN WILL BE HANGED!" << endl;
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |         O" << endl;
    cout << "    |        /|\\" << endl;
    cout << "    |         |" << endl;
    cout << "    |______  / \\" << endl;
    cout << endl;
    cout << "AND YOU HAVE SEVEN CHANCES TO SAVE HIM!" << endl;
    cout << "SELECT A CATEGORY:" << endl;
    cout << "1- Fruits" << endl;
    cout << "2- Animals" << endl;
    cout << "3- Countries" << endl;
    cout << " ? : ";

}

void man(int wrong) { // Her yanlışın aşamaları
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |   "; if (wrong >= 1) cout << "|"; cout << endl;
    cout << "    |   "; if (wrong >= 2) cout << "O"; cout << endl;
    cout << "    |  "; if (wrong == 3) cout << " |"; if (wrong == 4) cout << "/|"; if (wrong >= 5) cout << "/|\\"; cout << endl;
    cout << "    |   "; if (wrong >= 3) cout << "|"; cout << endl;
    cout << "    |  "; if (wrong == 6) cout << "/"; if (wrong >= 7) cout << "/ \\"; cout << endl;
    cout << "    |______" << endl;
    cout << endl;
}

void hangedMan() {
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |   |" << endl;
    cout << "    |   O" << endl;
    cout << "    |  /|\\ " << endl;
    cout << "    |   |" << endl;
    cout << "    |  / \\ " << endl;
    cout << "    |______" << endl;
    cout << endl;
}
void noMistake() {
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |______" << endl;
    cout << endl;
}
void firstMistake() {
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |   |" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |______" << endl;
    cout << endl;
}
void secondMistake() {
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |   |" << endl;
    cout << "    |   O" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |" << endl;
    cout << "    |______" << endl;
    cout << endl;
}
void thirdMistake() {
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |   |" << endl;
    cout << "    |   O" << endl;
    cout << "    |   |" << endl;
    cout << "    |   |" << endl;
    cout << "    |" << endl;
    cout << "    |______" << endl;
    cout << endl;
}
void fourthMistake() {
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |   |" << endl;
    cout << "    |   O" << endl;
    cout << "    |  /|" << endl;
    cout << "    |   |" << endl;
    cout << "    |" << endl;
    cout << "    |______" << endl;
    cout << endl;
}
void fifthMistake() {
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |   |" << endl;
    cout << "    |   O" << endl;
    cout << "    |  /|\\ " << endl;
    cout << "    |   |" << endl;
    cout << "    |" << endl;
    cout << "    |______" << endl;
    cout << endl;
}
void sixthMistake() {
    cout << endl;
    cout << "    -----" << endl;
    cout << "    |   |" << endl;
    cout << "    |   O" << endl;
    cout << "    |  /|\\ " << endl;
    cout << "    |   |" << endl;
    cout << "    |  /" << endl;
    cout << "    |______" << endl;
    cout << endl;
    cout << "LAST CHANCE! :O CHOOSE WISELY! (>_<)" << endl;
}

void hangingMan(int wrong) {
    switch (7 - wrong) {
    case 0:
        noMistake();
        break;
    case 1:
        firstMistake();
        break;
    case 2:
        secondMistake();
        break;
    case 3:
        thirdMistake();
        break;
    case 4:
        fourthMistake();
        break;
    case 5:
        fifthMistake();
        break;
    case 6:
        sixthMistake();
        break;
    case 7:
        hangedMan();
        break;
    }
}

class Words {
public:
    string fruits[23] = { "apple", "avocado", "banana", "blackberry", "blueberry", "cherry", "cranberry", "grape", "grapefruit", "kiwi", "lemon", "lime", "mango", "melon", "orange", "peach", "pear", "pineapple", "plum", "pomegranate", "raspberry", "strawberry", "watermelon" };
    string fruit = fruits[rand() % 23];

    string animals[22] = { "ant", "bear", "cat", "coyote", "dog", "donkey", "elephant", "fox", "giraffe", "horse", "jackal", "lion", "monkey", "mouse", "mule", "panda", "pig", "rat", "snake", "tiger", "wolf", "zebra" };
    string animal = animals[rand() % 22];

    string countries[196] = { "Afghanistan", "Argentina", "Australia", "Austria", "Azerbaijan", "Belgium", "Bolivia", "Botswana", "Brazil", "Bulgaria", "Cambodia", "Canada", "Chile", "China",
        "Colombia", "Croatia", "Cuba", "Cyprus", "Czechia", "Denmark", "Dominica", "Ecuador", "Egypt", "Estonia", "Ethiopia", "Fiji", "Finland", "France", "Georgia", "Germany", "Ghana",
        "Greece", "Grenada", "Guatemala", "Haiti", "Hungary", "Iceland", "India", "Indonesia", "Iran", "Iraq", "Ireland", "Italy", "Jamaica", "Japan", "Jordan", "Kazakhstan", "Kenya",
        "Kuwait", "Kyrgyzstan", "Latvia", "Libya", "Liechtenstein", "Lithuania", "Luxembourg", "Madagascar", "Malaysia", "Malta", "Mexico", "Moldova", "Monaco", "Mongolia", "Mozambique",
        "Myanmar", "Nepal", "Netherlands", "Niger", "Nigeria", "Norway", "Oman", "Pakistan", "Palestine", "Panama", "Paraguay", "Peru", "Philippines", "Poland", "Portugal", "Qatar",
        "Romania", "Russia", "Senegal", "Serbia", "Singapore", "Slovakia", "Slovenia", "Somalia", "Spain", "Sudan", "Suriname", "Sweden", "Switzerland", "Syria", "Tajikistan", "Tanzania",
        "Thailand", "Tunisia", "Turkey", "Turkmenistan", "Uganda", "Ukraine", "Uruguay", "Uzbekistan", "Venezuela", "Vietnam", "Yemen", "Zambia", "Zimbabwe" };
    string country = countries[rand() % 108];

};
class Game {
public:
    void gamePlay(bool restart) {
        startScreen();

        Words* word = new Words();
        string selected;

        int choice;
        try {
            cin >> choice;
            switch (choice) {
            case 1:
                selected = word->fruit;
                break;
            case 2:
                selected = word->animal;
                break;
            case 3:
                selected = word->country;
                break;
            default: cout << "Please write 1, 2 or 3! : ";
            }
        }
        catch (...) {
            cout << "Please write 1, 2 or 3! : ";
        }

        int tries = 7;
        int found = 0;
        int flagFound = 0;
        char guess = ' ';
        string guessedLetters;
        string dispWord(selected.length(), '_');


        while (tries >= 0) {

            system("cls");

            switch (choice) {
            case 1:
                cout << " Guess the Fruit" << endl << endl;
                break;
            case 2:
                cout << " Guess the Animal" << endl << endl;
                break;
            case 3:
                cout << " Guess the Country" << endl << endl;
                break;
            }

            for (int i = 0; i < selected.length(); i++) {
                cout << " " << dispWord[i] << " ";
            }
            cout << endl << endl;
            cout << "Wrong Attempts:" << 7 - tries << "/7" << endl;
            cout << "Guessed Letters:" << guessedLetters;

            hangingMan(tries);

            if (found == selected.length()) { // Eğer bilinen harf sayısı kelimenin harf sayısına eşitse kazanır
                cout << endl;
                cout << "/*\\*/*\\*/*\\*/*\\*/*\\*/*\\" << endl;
                cout << "|                     |" << endl;
                cout << "|    You Saved Him!   |" << endl;
                cout << "|                     |" << endl;
                cout << "/*\\*/*\\*/*\\*/*\\*/*\\*/*\\" << endl;
                break;
            }

            if (tries == 0) break; // Tahmin hakkı bittiyse bitir

            cout << "Type a Letter:";
            try {
                cin >> guess; // Tahmin edilen harfi alma
            }
            catch (...) {
                cout << endl << "Please type only letters:";
            }

            guessedLetters = guessedLetters + " " + guess; // Harfleri toplama

            if ((dispWord.find(toupper(guess)) != string::npos) || (dispWord.find(tolower(guess)) != string::npos)) tries++;

            flagFound = 0;

            if (toupper(guess) == selected[0] && dispWord[0] == '_') {
                dispWord[0] = toupper(guess);
                found++;
                flagFound = 1;
            }

            for (int i = 0; i < selected.length(); i++) {
                if (guess == selected[i] && dispWord[i] == '_') {
                    dispWord[i] = guess;
                    found++;
                    flagFound = 1;
                }
            }

            if (!flagFound) tries--;

        }

        if (found != selected.length()) {
            cout << endl;
            cout << "XxXxXxXxXxXxXxXxXxXxXxXxXxXxX" << endl;
            cout << "X                           X" << endl;
            cout << "X  HE HAS BEEN HANGED! X_X  X" << endl;
            cout << "X                           X" << endl;
            cout << "XxXxXxXxXxXxXxXxXxXxXxXxXxXxX" << endl;
            cout << "   (It was \"" << selected << "\")" << endl;
        }

        cout << "Restart or Exit? [R/E] : ";
        char c = ' ';
        try {
            cin >> c;
            if (c == 'E' || c == 'e') {
                restart = 0;
                exit(0);
            }
            else if (c == 'R' || c == 'r') {
                restart = 1;
            }
        }
        catch (...) {
            cout << "Please type E or R! : ";
        }
    }
};

int main()
{
    bool restart = true;
    while (restart) {

        srand(time(0));
        system("cls");

        Game* game = new Game();
        game->gamePlay(restart);
    }
}
