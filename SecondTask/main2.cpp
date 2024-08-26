// Задание 2. Сортировка
// Что нужно сделать
// Пользователь вводит в консоль 15 дробных чисел. 
// Необходимо прочитать их и вывести в консоль в порядке от большего к меньшему. 
// По возможности используйте минимум дополнительной памяти и проходов по массиву.

#include <iostream>



void merge_sort(float numbers[], float result[], int size, float min){

    int leftSize = size/2+size%2;
    int rightSize = size/2;
    float left[leftSize];
    float right[rightSize];  

    for (int i = 0; i < size; i++){
        if (i < leftSize) {
            left[i] = numbers[i];
        } else {
            right[i - leftSize] = numbers[i];
        }
    }

    if (leftSize > 1) {
        merge_sort(left, left, leftSize, min);
    }
    if (rightSize > 1) {
        merge_sort(right, right, rightSize, min);
    }

    for (int i = 0, j = 0, k = 0; i < size; i++) {
        if (left[j] >= right[k]){
            result[i] = left[j];
            if (j < leftSize-1){
                j++;
            } else {
                left[j] = min;
            }
        } else {
            result[i] = right[k];
            if (k < rightSize-1){
                k++;
            } else {
                right[k] = min;
            }
        }
    }
}

int main() {
    int count;
    bool isCorrect;
    do{
        std::cout << "Enter the size of the array: "; 
        std::cin >> count;
        if(isCorrect = count <= 0) std::cout << "Incorrect input. Try again";
    } while (isCorrect);

    float numbers[count];
    int size = sizeof(numbers)/sizeof(numbers[0]);
    float result[size];
    float min = 0;

    for (int i = 0; i < size; i++) {
        std::cout << "\nEnter the " << 1+i <<  " number: ";
        std::cin >> numbers[i];
        if (min > numbers[i]) min = numbers[i];    
    }

    merge_sort(numbers, result, size, min);
    
    for (int i = 0; i < size-1; i++) {
        std::cout << result[i] << ", ";
    }
    std::cout << result[size-1] << std::endl;   
    return 0;
}