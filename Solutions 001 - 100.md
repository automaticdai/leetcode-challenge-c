## 1. Two Sum
```c++
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i;
    int j;
    int *resultMatrix = malloc(sizeof(int[2]));
    
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                *resultMatrix = i;
                *(resultMatrix + 1) = j;
                return resultMatrix;
            }
        }
    }
    
    return resultMatrix;
}
```



## 7. Reverse Integer
```c++
int reverse(int x) {
    int x_rev = 0;
    int ans = 0;
    
    while (x != 0)
    {
        ans = x_rev;
        x_rev = x_rev * 10 + x % 10;
        
        if (x_rev / 10 != ans)
        {
            return 0;
        }
        
        x = x / 10;
        
    }
    
    return x_rev;
}
```



## 9. Palindrome Number
```c++
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
```

