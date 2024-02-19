#include <iostream>
#include <ctime>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::tm date1 = {}; // »нициализаци€ структуры std::tm дл€ первой даты
    std::tm date2 = {}; // »нициализаци€ структуры std::tm дл€ второй даты
    int g1 = 0;
    int g2 = 0;
    int m1 = 0;
    int m2 = 0;
    int d1 = 0;
    int d2 = 0;
    // «аполнение date1 и date2 данными (например, с помощью std::cin или вручную)

    // ѕример инициализации дат (год, мес€ц, день)
    std::cout << " ¬вед≥ть р≥к початку";
    std::cin >> g1;
    date1.tm_year = g1 - 1900; // √од минус 1900
    std::cout << " ¬вед≥ть м≥с€ць початку";
    std::cin >> m1;
    date1.tm_mon = m1 - 1; // ћес€ц (от 0 до 11)
    std::cout << " ¬вед≥ть день початку";
    std::cin >> d1;
    date1.tm_mday = d1; // ƒень
    std::cout << " ¬вед≥ть р≥к к≥ньц€";
    std::cin >> g2;
    date2.tm_year = g2 - 1900;
    std::cout << " ¬вед≥ть р≥к к≥нц€";
    std::cin >> m2;
    date2.tm_mon = m2 - 1;
    std::cout << " ¬вед≥ть день к≥нц€";
    std::cin >> d2;
    date2.tm_mday = d2;

    std::time_t time1 = std::mktime(&date1);
    std::time_t time2 = std::mktime(&date2);

    if (time1 != -1 && time2 != -1) {
        double seconds_difference = std::difftime(time1, time2);
        double days_difference = seconds_difference / (60 * 60 * 24);

        std::cout << "–азница в дн€х: " << days_difference << std::endl;
    }
    else {
        std::cout << "ќшибка при вычислении разницы в дн€х." << std::endl;
    }

    return 0;
}
