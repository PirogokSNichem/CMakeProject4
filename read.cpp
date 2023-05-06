#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "inout.h"//��������� ����������


void read(std::vector<int>& v) {
    int size;
    std::cout << "Enter vector size: ";//������� ������������ ������� ������ �������
    std::cin >> size;

    v.clear();//������ ������

    std::cout << "Enter vector values separated by space: ";//��������� ������ �������, ���������� �������������
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
