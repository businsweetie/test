# Test task

**Task description**:

Given two arrays with equal number of positive integers not exceeding 1000. Сome up with a criterion that shows how much these arrays are not similar to each other. Implement a function in C/C++ that takes two of these arrays as input and returns the coefficient (non negative real number) which represent criterion. The greater the coefficient, the greater the difference between the numbers. The criterion should not take the order of numbers in to the consideration.

## Сriterion description

Calculation of the criterion is based on the expectation values of the considered arrays.

$$M(X) = \sum_{i=1}^n x_i p_i, $$

where $x_i$ - array item value, $p_i$ - the number of times the element occurs in the array.

Mathematical expectations are calculated for each array separately ($M_1$ and $M_2$).

The criterion value (K):

$$K = \left|\frac{M_1-M_2}{max(M1,M2)}\right|. $$

Thus, the value of the criterion will be the greater the difference between the numbers in the arrays.

## Numerical experiments

<div align="center">
    
$№$  | $Array 1$   | $Array 2$        | $K$      |
:---:|:-----------:|:----------------:|:--------:|
1    | $1,1,1,1,1$ | $1,1,1,1,1$      | $0.0000$ |
2    | $1,1,1,1,1$ | $1,2,2,1,1$      | $0.2857$ |
3    | $1,1,1,1,1$ | $2,1,1,2,1$      | $0.2857$ |
4    | $1,1,1,1,1$ | $2,2,2,2,2$      | $0.5000$ |  
5    | $1,1,1,1,1$ | $20,20,20,20,20$ | $0.9500$ |
    
</div>

**Experiment №1**. Conclusion: with identical arrays the criterion value is 0.

**Experiment №2, №3**. Conclusion: Criterion value does not depend on the order of values in the array.

**Experiment №4, №5**. Conclusion: value of the criterion is the greater the difference between the values of the arrays.
