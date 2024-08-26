// Задание 2. Сортировка
// Что нужно сделать
// Пользователь вводит в консоль 15 дробных чисел. 
// Необходимо прочитать их и вывести в консоль в порядке от большего к меньшему. 
// По возможности используйте минимум дополнительной памяти и проходов по массиву.

#include <iostream>



void merge_sort(int numbers[], int size){
    int leftSize = size/2+size%2;
    int rightSize = size/2;
    int left[leftSize];
    int right[rightSize];  
    int result[size];
    for (int i = 0; i < size; i++){
        if (i < leftSize) {
            left[i] = numbers[i];
        } else {
            right[i - leftSize] = numbers[i];
        }
    }
    if (leftSize > 1) {
        merge_sort(left, leftSize);
    }
    if (rightSize > 1) {
        merge_sort(right, rightSize);
    }
    for (int i, j, k = 0; i < size; i++) {
        if (left[j] >= right[k]){
            result[i] = left[j];
            if (j < leftSize-1){
                j++;
            }
        } else {
            result[i] = right[k];
            if (k < rightSize-1){
                k++;
            }
        }
    }
}

int main() {
    int count;
    std::cin >> count;
    int numbers[count];
    int size = sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 0; i < size; i++) {
        std::cout << "Enter the " << 1+i <<  "number: ";
        std::cin >> numbers[i];
    }
    merge_sort(numbers, size);   
    return 0;
}