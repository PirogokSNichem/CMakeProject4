#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "inout.h"//добовляем библеотеки


void read(std::vector<int>& v) {
    int size;
    std::cout << "Enter vector size: ";//говорим пользователю указать размер вектора
    std::cin >> size;

    v.clear();//чистим вектор

    std::cout << "Enter vector values separated by space: ";//заполняем вектор числами, введенными пользователем
    std::cin.ignore();
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int num;
    while (ss >> num) {
        v.push_back(num);
    }

    std::cout << std::endl;

}
