int print_last_digit(int n) {
    int last_digit;

    /* Take the absolute value of n to handle negative numbers */
    if (n < 0)
        n *= -1;

    /* Get the last digit by using the modulo operator */
    last_digit = n % 10;

    /* Print the last digit */
    _putchar('0' + last_digit);

    /* Return the last digit */
    return last_digit;
}
