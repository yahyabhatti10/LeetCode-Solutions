def romanToInt(s: str) -> int:
    numerals_value = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
    integer = 0
    check = True
    i=0
    while(i!=len(s)):
        if(s[i]=='I' and i!=(len(s)-1)):
            if(s[i+1]=='V'):
                integer = integer + 4
                check = False
            elif(s[i+1]=='X'):
                integer = integer + 9
                check = False
        elif(s[i]=='X'and i!=(len(s)-1)):
            if(s[i+1]=='L'):
                integer = integer + 40
                check = False
            elif(s[i+1]=='C'):
                integer = integer + 90
                check = False
        elif(s[i]=='C'and i!=(len(s)-1)):
            if(s[i+1]=='D'):
                integer = integer + 400
                check = False
            elif(s[i+1]=='M'):
                integer = integer + 900
                check = False
        if(check==True):
            integer = integer + numerals_value.get(s[i])
            i = i+1
        elif(check==False):
            check = True
            i = i+2               
    return integer
s = "MCMXCIV"
print(romanToInt(s))