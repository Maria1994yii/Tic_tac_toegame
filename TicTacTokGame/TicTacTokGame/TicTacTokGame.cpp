// TicTacTokGame.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void board(char tic_tac_tok[3][3])
{
    std::cout << "     " << std::endl;
    std::cout << " " << tic_tac_tok[0][0] << "  |  " << tic_tac_tok[0][1] << "   |  " << tic_tac_tok[0][2] << std::endl;
    std::cout << " ---------------" << std::endl;
    std::cout << " "<< tic_tac_tok[1][0] << "  |  " << tic_tac_tok[1][1] << "   |  " << tic_tac_tok[1][2] << std::endl;
    std::cout << " ---------------" << std::endl;
    std::cout <<" "<< tic_tac_tok[2][0] << "  |  " << tic_tac_tok[2][1] << "   |  " << tic_tac_tok[2][2] << std::endl;
}


int main()
{
    char tic_tac_tok[3][3] = { {'0', '1', '2'},{'3', '4', '5'}, {'5', '6', '8'}};
    int row;
    int col;
    char choice_of_player1, choice_of_player2;
    board(tic_tac_tok);
    std::cout << "Player1 choose X or O\n";
    std::cin >> choice_of_player1;
    std::cout << "Player2 choose X or O\n";
    std::cin >> choice_of_player2;


    for (int i = 0; i < 9; ++i)
    {
        std::cout << "Player1 insert number where you want to write\n";
        std::cin >> row >> col;
       
        if (row >= 0 && col < 3 && col >= 0 && row < 3 && (tic_tac_tok[row][col]!='O' && tic_tac_tok[row][col]!='X'))
        {
            tic_tac_tok[row][col] = choice_of_player1;
        }
        else {
            std::cout << "error";
        }
       
        if (tic_tac_tok[0][0] == tic_tac_tok[0][1] && tic_tac_tok[0][1] == tic_tac_tok[0][2])
        {
            std::cout << " Player1 Win!!";
        }
        else if (tic_tac_tok[1][0] == tic_tac_tok[1][1] && tic_tac_tok[1][1] == tic_tac_tok[1][2])
        {
            std::cout << "Player1 Win!!";
        }
        else if (tic_tac_tok[2][0] == tic_tac_tok[2][1] && tic_tac_tok[2][1] == tic_tac_tok[2][2])
        {
            std::cout << "Player1 Win!!";
        }
        else if (tic_tac_tok[0][0] == tic_tac_tok[1][1] && tic_tac_tok[1][1] == tic_tac_tok[2][2])
        {
            std::cout << "Player1 Win!!";
        }
        else if (tic_tac_tok[0][2] == tic_tac_tok[1][1] && tic_tac_tok[1][1] == tic_tac_tok[2][0])
        {
            std::cout << "Player1 Win!!";
        }
        std::cout << "Player2 insert number where you want to write\n";
        std::cin >> row >> col;
       
        if (row >= 0 && col < 3 && col >= 0 && row < 3 && (tic_tac_tok[row][col] != 'O' && tic_tac_tok[row][col] != 'X'))
        {
            tic_tac_tok[row][col] = choice_of_player2;
        }
        else {
            std::cout << "error";
        }

        board(tic_tac_tok);

        if (tic_tac_tok[0][0] == tic_tac_tok[0][1] && tic_tac_tok[0][1] == tic_tac_tok[0][2])
        {
            std::cout << " Player2 Win!!";
        }
        else if (tic_tac_tok[1][0] == tic_tac_tok[1][1] && tic_tac_tok[1][1] == tic_tac_tok[1][2])
        {
            std::cout << "Player2 Win!!";
        }
        else if (tic_tac_tok[2][0] == tic_tac_tok[2][1] && tic_tac_tok[2][1] == tic_tac_tok[2][2])
        {
            std::cout << "Player2 Win!!";
        }
        else if (tic_tac_tok[0][0] == tic_tac_tok[1][1] && tic_tac_tok[1][1] == tic_tac_tok[2][2])
        {
            std::cout << "Player2 Win!!";
        }
        else if (tic_tac_tok[0][2] == tic_tac_tok[1][1] && tic_tac_tok[1][1] == tic_tac_tok[2][0])
        {
            std::cout << "Player2 Win!!";
        }

    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
