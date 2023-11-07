
//Az alábbi C++ program kéri a felhasználótól három pozitív egész számot, amelyek egy helyes dátum évet, hónapot és napot alkotnak. A program ellenőrzi, hogy az év, hónap és nap érvényes tartományban van-e, majd kiszámítja az adott dátum előtti és utáni dátumokat. Az eredményt egy sorban írja ki, pontokkal elválasztva.


#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int year, int month) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return days[month];
}

bool isValidDate(int year, int month, int day) {
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > daysInMonth(year, month)) {
        return false;
    }
    return true;
}

void getNextDate(int &year, int &month, int &day) {
    if (day < daysInMonth(year, month)) {
        day++;
    } else {
        day = 1;
        if (month < 12) {
            month++;
        } else {
            month = 1;
            year++;
        }
    }
}

void getPreviousDate(int &year, int &month, int &day) {
    if (day > 1) {
        day--;
    } else {
        if (month > 1) {
            month--;
            day = daysInMonth(year, month);
        } else {
            year--;
            month = 12;
            day = 31;
        }
    }
}

int main() {
    int year, month, day;

    std::cout << "Kerem adja meg az evet: ";
    std::cin >> year;
    std::cout << "Kerem adja meg a honapot: ";
    std::cin >> month;
    std::cout << "Kerem adja meg a napot: ";
    std::cin >> day;

    if (!isValidDate(year, month, day)) {
        std::cout << "Ervenytelen datum." << std::endl;
        return 1;
    }

    int nextYear = year, nextMonth = month, nextDay = day;
    getNextDate(nextYear, nextMonth, nextDay);

    int prevYear = year, prevMonth = month, prevDay = day;
    getPreviousDate(prevYear, prevMonth, prevDay);

    std::cout << "Kovetkezo datum: " << nextYear << "." << nextMonth << "." << nextDay << std::endl;
    std::cout << "Elozo datum: " << prevYear << "." << prevMonth << "." << prevDay << std::endl;

    return 0;
}
