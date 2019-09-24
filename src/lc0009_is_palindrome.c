bool isPalindrome(int x) {
    int sum = 0;
    int x_copy = x;


    if (x < 0) {
        return false;
    }

    while (x > 0) {
        sum = sum * 10 + x % 10;
        x = x / 10;
    }

     return (x_copy == sum? true: false);
}
