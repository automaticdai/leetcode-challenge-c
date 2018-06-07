int reverse(int x) {
    int x_rev = 0;
    int ans = 0;

    while (x != 0) {
        ans = x_rev;
        x_rev = x_rev * 10 + x % 10;

        if (x_rev / 10 != ans) {
            return 0;
        }

        x = x / 10;

    }

    return x_rev;
}
