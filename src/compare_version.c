int compareVersion(char* version1, char* version2) {
    char *ptr1 = version1, *ptr2 = version2;
    int num1 = 0, num2 = 0;

    while(*ptr1 != '\0' || *ptr2 != '\0') {
        num1 = 0;
        num2 = 0;

        while (*ptr1 != '\0' && *ptr1 != '.') {
            num1 = num1 * 10 + (*ptr1 - '0');
            ptr1++;
        }

        while (*ptr2 != '\0' && *ptr2 != '.') {
            num2 = num2 * 10 + (*ptr2 - '0');
            ptr2++;
        }

        printf("%d, %d \n", num1, num2);

        if (num1 > num2) {return 1;}
        else if (num1 < num2) {return -1;}

        if (*ptr1 == '.') {ptr1++;}
        if (*ptr2 == '.') {ptr2++;}

    }

    return 0;
}
