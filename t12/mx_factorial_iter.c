int mx_factorial_iter(int n) {
    int i = 1;
    int fact = n;

    if (n < 0 || n > 12) {
        return 0;
    }
    if (!n) {
        return 1;
    }
    while (i < n) {
        fact *= i;
        i++;
    }
    return fact;
}

