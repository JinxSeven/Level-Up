#include <bits/stdc++.h>

class GameBoard {
    public:
    char tictactoe[3][3];
    std::unordered_map<int, std::string>players;
    int moves;

    GameBoard() {
        for (int i {0}; i < 3; i++) {
            for (int j {0}; j < 3; j++) {
                tictactoe[i][j] = '-';
            }
        }
        players[1] = "";
        players[2] = "";
        moves = 9;
    }

    void printBoard() {
        for (int i {0}; i < 3; i++) {
            for (int j {0}; j < 3; j++) {
                std::cout << tictactoe[i][j] << "\t";
            }
            std::cout << "\n";
        }
    }

    bool movesLeft() {
        if (moves != 0) return true;
        return false;
    }

    bool playTurns(int row, int column, int player) {
        try
        {
            if (tictactoe[row][column] == '-') {
                if (player == 1) tictactoe[row][column] = 'X';
                else tictactoe[row][column] = 'O';
                moves--;
                return true;
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return false;
        }
        return false;
    }

    bool winner() {
        for (int i {0}; i < 3; i++) {
            int countx {0}, counto {0};
            for (int j {0}; j < 3; j++) {
                if (tictactoe[i][j] == 'X') countx++;
                if (tictactoe[i][j] == 'O') counto++;
            }
            if (countx == 3 || counto == 3) {
                return true;
            }
        }
        for (int i {0}; i < 3; i++) {
            int countx {0}, counto {0};
            for (int j {0}; j < 3; j++) {
                if (tictactoe[j][i] == 'X') countx++;
                if (tictactoe[j][i] == 'O') counto++;
            }
            if (countx == 3 || counto == 3) {
                return true;
            }
        }
        int countx {0}, counto {0};
        for (int i {0}; i < 3; i++) {
            if (tictactoe[i][i] == 'X') countx++;
            if (tictactoe[i][i] == 'O') counto++;
            if (countx == 3 || counto == 3) {
                return true;
            }
        }
        counto = 0;
        countx = 0;
        for (int i {0}; i < 3; i++) {
            if (tictactoe[i][2-i] == 'X') countx++;
            if (tictactoe[i][2-i] == 'O') counto++;
            if (countx == 3 || counto == 3) {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cerr << "arguments useage order: <player_x_name> <player_o_name>" << std::endl;
    }

    GameBoard tictac;
    tictac.players[1] = argv[1];
    tictac.players[2] = argv[2];
    int row, col;
    int switcher {0};
    tictac.printBoard();
    while (!tictac.winner()) {
        if (!tictac.movesLeft()) {
            std::cout << "That was a tie! no'mo moves left\n";
            break;
        }

        std::cout << tictac.players[switcher+1] << "'s turn - enter row & col psoition\n";
        std::cin >> row >> col;
        if (!tictac.playTurns(row, col, switcher+1)) {
            std::cout << "Invalid Move\n";
        }

        tictac.printBoard();

        switcher = (switcher + 1) % 2; 
    }
    if (tictac.winner()) {
        std::cout << tictac.players[switcher] << " won the game!" << std::endl;
    }
}
