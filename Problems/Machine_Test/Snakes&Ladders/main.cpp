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

    void setLadders(int top, int bottom) {
        ladder[top] = bottom;
    }

    void setPlayers(int id, std::string name) {
        player[id] = name;
    }
};

class Dice {
    public:
    int randNumber;

    Dice() : randNumber (0) {};

    int rollDice() { 
        randNumber = 1 + rand() % 6;
        return randNumber;
    }
};

int main(int argc, char **argv) {
    bool winner = false;
    GameObject one(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    for (int x = 0; x < atoi(argv[1]); x++) {
        int start, end;
        std::cin >> start >> end;
        one.setSnakes(start, end);
    }

    for (int x = 0; x < atoi(argv[2]); x++) {
        int start, end;
        std::cin >> start >> end;
        one.setLadders(start, end);
    }
    int playerPosition[atoi(argv[3])];
    for (int x = 0; x < atoi(argv[3]); x++) {
        int userId;
        std::string userName;
        playerPosition[x] = 0;
        std::cin >> userId >> userName;
        one.setPlayers(userId, userName);
    }
    int swap = 0;
    bool winners = false;
    while (!winners) {
        if (swap % 2 == 0) {
            Dice roller;
            if ((playerPosition[1] += roller.rollDice()) > 100) continue;
            else playerPosition[1] += roller.rollDice();
            
            if (playerPosition[0] == 100) {
                std::cout << one.player[1] << " - won the game!\n";
                winners = true;
            }
            for (auto x = one.snake.begin(); x != one.snake.end(); x++) {
                if (playerPosition[0] == x->first) playerPosition[0] = x->second;
            }
            for (auto x = one.ladder.begin(); x != one.ladder.end(); x++) {
                if (playerPosition[0] == x->first) playerPosition[0] = x->second;
            }
        } else {
            Dice roller;
            if ((playerPosition[1] += roller.rollDice()) > 100) continue;
            else playerPosition[1] += roller.rollDice();
            
            if (playerPosition[1] == 100) {
                std::cout << one.player[1] << " - won the game!\n";
                winners = true;
            }
            for (auto x = one.snake.begin(); x != one.snake.end(); x++) {
                if (playerPosition[0] == x->first) playerPosition[1] = x->second;
            }
            for (auto x = one.ladder.begin(); x != one.ladder.end(); x++) {
                if (playerPosition[0] == x->first) playerPosition[1] = x->second;
            }
        }
    }
}
