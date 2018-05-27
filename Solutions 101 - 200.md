

## 165. Compare Version Numbers

```c++
int compareVersion(char* version1, char* version2) {
    char *ptr1 = version1, *ptr2 = version2;
    int num1 = 0, num2 = 0;
    
    while(*ptr1 != '\0' || *ptr2 != '\0')
    {
        num1 = 0;
        num2 = 0;
        
        while (*ptr1 != '\0' && *ptr1 != '.')
        {
            num1 = num1 * 10 + (*ptr1 - '0');
            ptr1++;
        }

        while (*ptr2 != '\0' && *ptr2 != '.')
        {
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
```



## 168. Excel Sheet Column Title

```c++
char* convertToTitle(int n) {
    int str_size = 10;
    char *str = malloc(sizeof(char) * str_size);
    char *pstr = str;
    char *sstr = malloc(sizeof(char) * str_size);
    char *ppstr = sstr;
    int i = 0;
    int n_mod;
    
    while (n)
    {
        int m;
        m = (n - 1) % 26;
        n = (n - 1) / 26;
        
        *pstr = 'A' + m; 
        pstr++;
    }
    
    *pstr = '\0';
      
    /* revert string */
    pstr = str;    
    while (*pstr != '\0')
    {
        pstr++;
    }
        
    pstr--;
    
    
    while (pstr !=  str)
    {
        *ppstr++ = *pstr--;
    }
    
    *ppstr++ = *pstr--;
    *ppstr = '\0';
    
    
    return sstr;
    
}
```


