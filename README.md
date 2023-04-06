# Test task

**Task description**:

Given two arrays with equal number of positive integers not exceeding 1000. Сome up with a criterion that shows how much these arrays are not similar to each other. Implement a function in C/C++ that takes two of these arrays as input and returns the coefficient (non negative real number) which represent criterion. The greater the coefficient, the greater the difference between the numbers. The criterion should not take the order of numbers in to the consideration.

Calculation of the criterion is based on the expectation values of the considered arrays.

$$M(X) = \sum_{i=1}^n x_i p_i, $$

where $x_i$ - array item value, $p_i$ - the number of times the element occurs in the array.

Mathematical expectations are calculated for each array separately ($M_1$ and $M_2$).

The criterion value (K):

$$K = \left|\frac{M1}{max(M1,M2)} - \frac{M2}{max(M1,M2)}\right|. $$

Таким образом
