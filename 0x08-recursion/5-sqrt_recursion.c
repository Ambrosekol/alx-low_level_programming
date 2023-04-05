#include "main.h"
/**
 * _sqrt_recursion - a function that returns the square
 * @n: input
 * Return: int
 */
int sqrt_helper(int n, int low, int high) {
    if (low > high) {
        return (-1);
    }
    int mid = low + high / 2;
    int sq = mid * mid;
    if (sq == n) {
        return (mid);
    }
    else if (sq < n) {
        return (sqrt_helper(n, mid + 1, high));
    }
    else {
        return (sqrt_helper(n, low, mid - 1));
    }
}

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0, n));
}
