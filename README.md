# Test task

**Task description**:

Given two arrays with equal number of positive integers not exceeding 1000. Сome up with a criterion that shows how much these arrays are not similar to each other. Implement a function in C/C++ that takes two of these arrays as input and returns the coefficient (non negative real number) which represent criterion. The greater the coefficient, the greater the difference between the numbers. The criterion should not take the order of numbers in to the consideration.

Расчет критерия основан на значениях матожиданий рассматриваемых массивов.

$$M(X) = \sum_{i=1}^n x_i p_i, $$

где $x_i$ - значение элемента массива, $p_i$ - количество раз, которое элемент встречается в массиве.

Математиечские ожидания рассчитываются для каждого массива отдельно ($M_1$ и $M_2$).

Значение критерия (K) рассчитывается следующим образом:

$$K = \left|\frac{M1}{max(M1,M2)} - \frac{M2}{max(M1,M2)}\right|. $$

Так
