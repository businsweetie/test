// Task13_HW.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <array> 

using namespace std;

int MathExp(int* arr, int N) {
    int M = 0;
    for (int i = 0; i < N; i++)
    {
        M += arr[i];
    }
    return M;
}

double Criteria(int* arr1, int* arr2, int N) {
    int M1, M2;
    double max_betw_M1_M2, criteria_value;

    M1 = MathExp(arr1, N);
    M2 = MathExp(arr2, N);

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
