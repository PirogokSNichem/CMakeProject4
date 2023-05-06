#include "inout.h"
#include <iostream>//добавляем библиотеки

void print(const std::vector<int>& vec) {
    for (int i : vec) {
        std::cout << i << " ";//сортируем вектор
    }
    std::cout << std::endl;
}
