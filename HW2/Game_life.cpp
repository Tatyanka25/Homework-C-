#include <iostream>

char field[10][10]; // сщздаем глобальные массивы
char field_2[1000][10][10];

int the_living_neighbors_of_the_cell(int i, int j) { // функция, которая находит соседов клетки и проверяет их на жизнь
    int living_neighbors = 0;
    for (int m = i - 1; m <= i + 1; m++) {
        for (int n = j - 1; n <= j + 1; n++) {
            int n1 = n, m1 = m;
            if (m == i && n == j) { // если мы попали на саму клетку, то все остальное не делать
                continue;
            }
            if (m < 0) { // если выходим за пределы поля, то прибавлем 10 (чтобы взять кольцевой элемент)
                m += 10;
            }
            if (n < 0) { // если выходим за пределы поля, то прибавлем 10 (чтобы взять кольцевой элемент)
                n += 10;
            }
            if (m >= 10) { // если выходим за пределы поля, то вычитаем 10 (чтобы взять кольцевой элемент)
                m -= 10;
            }
            if (n >= 10) { // если выходим за пределы поля, то вычитаем 10 (чтобы взять кольцевой элемент)
                n -= 10;
            }
            if (field[m][n] == '@') { // если сосед живой, то прибавляем 1 к количеству живых соседов
                living_neighbors += 1;
            }
            n = n1;
            m = m1;
        }
    }
    return living_neighbors; // возвращаем количество живых соседов
}


int main() {
    srand(time(NULL));
    int m = 1;
    for (int i = 0; i < 10; ++i) { // заполняем массив рандомно от 1 до 2
        for (int j = 0; j < 10; ++j) {
            int a = rand() % 2 + 1;
            if (a == 2) { // заменяем 2 на '_' - мертвая клетка
                field[i][j] = '_';
                field_2[0][i][j] = '_';
            }
            if (a == 1) { // заменяем 1 на '@' - живая клетка
                field[i][j] = '@';
                field_2[0][i][j] = '@';
            }
            std::cout << field[i][j] << " "; // выводим элементы нашего поля
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
    for (m = 1; m < 1000; ++m) {
        int flag = 0; // флажок на существование живых клеток
        int flag_1 = 0; // флажок на смену клетки (живая в мертвую, мертвая в живую)
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                int living_neighbors = the_living_neighbors_of_the_cell(i, j);
                if ((field[i][j] == '_') && (living_neighbors == 3)) { // если клетка мертвая и имеет 3х живых соседов
                    field[i][j] = '@'; // делаем ее живой
                    flag = 1; // флаг на существование живых клеток меняется на 1 (значет, что живые клетки существуют)
                    flag_1 = 1; // флаг на смену клетки меняется на 1 (сделали мертвую клетку живой)
                }
                if ((field[i][j] == '@') && (living_neighbors == 3 || living_neighbors == 2)) { // если кдетка живая и имеет 3х или 2х живых соседов
                    flag = 1; // клетка остается живой и флаг на живые клетки меняется на 1
                }
                else { 
                    field[i][j] = '_'; // иначе делаем клетку мертвой
                    flag_1 = 1; // флаг на смену клетки становится 1 ( живую клетку сделали мертвой)
                }
                std::cout << field[i][j] << " "; // выводим элементы нашего поля (поэлементно)
                field_2[m][i][j] = field[i][j]; // в другой масив кладем этот вариант поля ( поэлементно)
            }
            std::cout << std::endl;
        }
        std::cout << std::endl << std::endl;
        int flag_2;
        for (int c = 0; c < m; c++) { 
            flag_2 = 0; // флаг на повторяющуюся конфигурацию
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    if (field_2[c][i][j] != field[i][j]) { // если хотя бы 1 элемент существующего поля неравен элементу нашего поля
                        flag_2 = 1; // меняем флаг на 1
                        break; // заканчиваем проверять элементы
                    }
                }
                if (flag_2 == 1) // если флаг на повторяющуюся конфигурацию равен 1
                    break; // заканчиваем выполнение цикла
            }
            if (flag_2 == 0) // если флаг на повторяющуюся конфигурацию равен 0
                break; // заканчиваем выполнение цикла
        }
        if (flag_2 == 0) { // еали флаг на повторяющуюся конфигурацию равен 0
            std::cout << "Repetitive configuration" << std::endl; // значит у нас встретилось поле, которое уже соответствует одному из существующих
            break; // заканчиваем выполнение цикла
        }
        if (flag == 0) { // если флаг на существование живых клеток равен 0
            std::cout << "There is no more life" << std::endl; // значит у нас закончились живые клетки на поле
            break; // заканчиваем выполнение цикла
        }
        if (flag_1 == 0) { // если флаг на смену клетки равен 0
            std::cout << "No changes have occurred" << std::endl; // значит мы ничего не поменяли на нашем поле
            break; // заканчиваем выполнение цикла
        }
    }
    std::cout << --m << " iterations"; // выводим количество произведенных итераций
    return 0;
}
