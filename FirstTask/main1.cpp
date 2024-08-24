// Задание 1. Многоквартирный дом
// Что нужно сделать
// На вход программе поступают десять фамилий в формате строк. Это фамилии жильцов квартир с первой по десятую. 
// Необходимо прочитать эти фамилии и записать в одномерный массив. Далее пользователь вводит три номера квартир. 
// Необходимо вывести в консоль фамилию жильца, проживающего в этой квартире. 
// Если пользователь введёт некорректный номер квартиры, необходимо сообщить ему об этом.

#include <iostream>



int main() {
    std::string residents[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "Enter the last name of the " << 1+i << " resident:\n";
        std::getline(std::cin, residents[i]);
    }

    int numbers[3];
    for (int i = 0; i < 3; i++) {
        bool isCorrect;
        do{
            std::cout << "Enter the " << 1+i << " apartment number:\n";
            std::cin >> numbers[i];
            if (isCorrect = numbers[i] > 10 || numbers[i] < 1) std::cout << "Incorrect apartment number.\n";
        } while (isCorrect);
    }

    for (int number : numbers) {
        std::cout << "The resident of the apartment with the number " << number << " is " << residents[number-1] << std::endl;
    }
    return 0;
}