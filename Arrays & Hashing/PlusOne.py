def plusOne(digits: list[int]) -> list[int]:
    value = ""
    for i in range(0,len(digits)):
        value = value + str(digits[i])
    value = int(value) + 1
    value = str(value)
    digits.clear()
    for i in range(0, len(value)):
        digits.append(int(value[i]))
    del value
    return digits
digits = [1,2,3]
print(plusOne(digits))