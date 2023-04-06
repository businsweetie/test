// Task13_HW.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <array> 

using namespace std;

double Criteria(int* arr1, int* arr2, int N) {
    int M1 = 0;
    int M2 = 0;
    double max_betw_M1_M2, criteria_value;

    for (int i = 0; i < N; i++)
    {
        M1 += arr1[i];
        M2 += arr2[i];
    }

    max_betw_M1_M2 = max(M1, M2);
    criteria_value = abs((M1 / max_betw_M1_M2) - (M2 / max_betw_M1_M2));

    return criteria_value;
}

int main()
{
    srand(time(NULL));

    int *array_1, *array_2, array_size;
    double criteria_value;

    cin >> array_size;
    array_1 = new int[array_size];
    array_2 = new int[array_size];

    for (int i = 0; i < array_size; i++) {
        array_1[i] = rand();
        array_2[i] = rand();
    }

    criteria_value = Criteria(array_1, array_2, array_size);

    std::cout << " " << criteria_value;

    return 0;
}
