#include "Gambling.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


Player::Player(std::string name) {
    this->name = name;
}

GamblingGame::GamblingGame() {
    string name1, name2;
    cout << "***** ���� ������ �����մϴ�. *****" << endl;
    cout << "ù ��° ���� �̸� >> ";
    cin >> name1;
    cout << "�� ��° ���� �̸� >> ";
    cin >> name2;
    players[0] = new Player(name1);
    players[1] = new Player(name2);
}

void GamblingGame::play() {
    srand(time(0));
    int currentPlayer = 0;

    while (true) {
        Player* player = players[currentPlayer];
        cout << player->name << ":<Enter>" << endl;
        cin.ignore();
        cin.get();

        int numbers[3];
        for (int i = 0; i < 3; i++) {
            numbers[i] = rand() % 3;
        }

        cout << "\t\t";
        for (int i = 0; i < 3; i++) {
            cout << numbers[i] << "\t";
        }

        if (numbers[0] == numbers[1] && numbers[1] == numbers[2]) {
            cout << player->name << "�� �¸�!!" << endl;
            break;
        }
        else {
            cout << "�ƽ�����!" << endl;
        }

        currentPlayer = (currentPlayer + 1) % 2;
    }
}

GamblingGame::~GamblingGame() {
    delete players[0];
    delete players[1];
}
