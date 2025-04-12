# Time complexity : O(Log(x))
# Space complexity : O(1)

def reverse(x):
    rev_num = 0
    is_neg = False

    if x < 0: #checking if its negative to also handle negative cases   
        is_neg = True
        x = -x

    while x != 0:
        rev_num = (rev_num * 10) + (x % 10) 
        x = x // 10

    if rev_num > 2**31 -1 or rev_num < -2**31:
        return 0
    
    return rev_num


print(reverse(102))