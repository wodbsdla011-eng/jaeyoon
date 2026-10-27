def solution(a, b):
    answer = 0
    if(a>=10 and a*10**len(str(b))+b>=2*a*b):
        answer=a*10**len(str(b))+b
    elif(a<10 and a*10**(len(str(b))-1)+b>=2*a*b):
        answer=a*10**(len(str(b))-1)+b
    else:
        answer=2*a*b
    return answer