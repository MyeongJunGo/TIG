
def fibo(inputNum) :
    if inputNum == 1:
        return 1
    elif inputNum == 2 :
        return 2

    return fibo(inputNum-2)+fibo(inputNum-1)

for i in range(1, 30) :
    print(fibo(i));
