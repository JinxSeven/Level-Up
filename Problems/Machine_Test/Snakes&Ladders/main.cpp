#include <bits/stdc++.h>

class GameObject {
    public:
    std::unordered_map<int, int>snake;
    std::unordered_map<int, int>ladder;
    std::unordered_map<int, std::string>player;

    GameObject(int noOfSnakes, int noOfLadders, int noOfPlayers) {
        snake.reserve(noOfSnakes);
        ladder.reserve(noOfLadders);
        player.reserve(noOfPlayers);
    }

    void setSnakes(int head, int tail) {
        snake[head] = tail;
    }

    void setLadders(int bottom, int top) {
        ladder[bottom] = top;
    }

    void setPlayers(int id, std::string name) {
        player[id] = name;
    }
};

class Dice {
    public:
    int randNum;

    Dice() {
        randNum = 0;
    }

    int diceRoll() { 
        randNum = 1 + rand() % 6;
        return randNum;
    }
};

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "arg useage:./a.out <no_of_snakes> <no_of_ladders> <no_of_players>\n";
        return -1;
    }

    GameObject one(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    for (int x = 0; x < atoi(argv[1]); x++) {
        std::cout << "Enter snake head number and tail number: \n";
        int start, end;
        std::cin >> start >> end;
        one.setSnakes(start, end);
    }

    for (int x = 0; x < atoi(argv[2]); x++) {
        std::cout << "Enter ladder bottom number and top number: \n";
        int bottom, top;
        std::cin >> bottom >> top;
        one.setLadders(bottom, top);
    }

    std::unordered_map<int, int>playerPosition;
    for (int x = 0; x < atoi(argv[3]); x++) {
        std::cout << "Enter player name: \n";
        std::string userName;
        playerPosition[x] = 0;
        std::cin >> userName;
        one.setPlayers((x+1), userName);
    }

    Dice roller;
    int switcher = 0;
    bool winner = false;
    srand(time(0));
    while (!winner) {
        int diceout = roller.diceRoll();
        playerPosition[switcher] += diceout;
        std::string pName = one.player[switcher+1];

        if (playerPosition[switcher] > 100) playerPosition[switcher] -= diceout;
        else {
            std::cout << pName << " moved from " << playerPosition[switcher] - diceout << " to " << playerPosition[switcher] << std::endl;
            if (playerPosition[switcher] == 100) {
                std::cout << "We have a winner - " << pName << std::endl;
                winner = true;
            }
        }

        if (one.snake.find(playerPosition[switcher]) != one.snake.end()) {
            int newPos = one.snake[playerPosition[switcher]];
            std::cout << pName << " got bit and moved from " << playerPosition[switcher] << " to ";
            playerPosition[switcher] = newPos;
            std::cout << playerPosition[switcher] << std::endl;
        }

        if (one.ladder.find(playerPosition[switcher]) != one.ladder.end()) {
            int newPos = one.ladder[playerPosition[switcher]];
            std::cout << pName << " found a ladder and moved from " << playerPosition[switcher] << " to ";
            playerPosition[switcher] = newPos;
            std::cout << playerPosition[switcher] << std::endl;
        }

        switcher = (switcher + 1 ) % atoi(argv[3]);
    }
    return 0;
}
