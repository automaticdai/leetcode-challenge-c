char* convertToTitle(int n) {
    int str_size = 10;
    char *str = malloc(sizeof(char) * str_size);
    char *pstr = str;
    char *sstr = malloc(sizeof(char) * str_size);
    char *ppstr = sstr;
    int i = 0;
    int n_mod;

    while (n) {
        int m;
        m = (n - 1) % 26;
        n = (n - 1) / 26;

        *pstr = 'A' + m;
        pstr++;
    }

    *pstr = '\0';

    /* revert string */
    pstr = str;
    while (*pstr != '\0') {
        pstr++;
    }

    pstr--;


    while (pstr !=  str) {
        *ppstr++ = *pstr--;
    }

    *ppstr++ = *pstr--;
    *ppstr = '\0';


    return sstr;

}
