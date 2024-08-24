// Задание 3. Использование assert
// Что нужно сделать
// Создайте в своей программе функцию float travelTime(float distance, float speed). 
// Она будет находить время в пути и при этом использовать assert, чтобы отбросить нулевую и отрицательную скорость. 
// Вызовите эту функцию в main. 
// Убедитесь, что падение происходит за счёт assert. Не забудьте подключить заголовочный файл cassert.

#include <iostream>
#include <cassert>

float travelTime (float distance, float speed) {
    assert(speed > 0);
    return distance/speed;
}

int main() {
    float speed, distance;
    std::cout << "Enter the speed and distance:\n";
    std::cin >> speed >> distance;
    std::cout << "Time: " << travelTime(distance, speed) << std::endl;
    return 0;
}