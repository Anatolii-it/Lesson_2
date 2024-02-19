#include <iostream>
#include <ctime>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::tm date1 = {}; // ������������� ��������� std::tm ��� ������ ����
    std::tm date2 = {}; // ������������� ��������� std::tm ��� ������ ����
    int g1 = 0;
    int g2 = 0;
    int m1 = 0;
    int m2 = 0;
    int d1 = 0;
    int d2 = 0;
    // ���������� date1 � date2 ������� (��������, � ������� std::cin ��� �������)

    // ������ ������������� ��� (���, �����, ����)
    std::cout << " ������ �� �������";
    std::cin >> g1;
    date1.tm_year = g1 - 1900; // ��� ����� 1900
    std::cout << " ������ ����� �������";
    std::cin >> m1;
    date1.tm_mon = m1 - 1; // ����� (�� 0 �� 11)
    std::cout << " ������ ���� �������";
    std::cin >> d1;
    date1.tm_mday = d1; // ����
    std::cout << " ������ �� �����";
    std::cin >> g2;
    date2.tm_year = g2 - 1900;
    std::cout << " ������ �� ����";
    std::cin >> m2;
    date2.tm_mon = m2 - 1;
    std::cout << " ������ ���� ����";
    std::cin >> d2;
    date2.tm_mday = d2;

    std::time_t time1 = std::mktime(&date1);
    std::time_t time2 = std::mktime(&date2);

    if (time1 != -1 && time2 != -1) {
        double seconds_difference = std::difftime(time1, time2);
        double days_difference = seconds_difference / (60 * 60 * 24);

        std::cout << "������� � ����: " << days_difference << std::endl;
    }
    else {
        std::cout << "������ ��� ���������� ������� � ����." << std::endl;
    }

    return 0;
}
