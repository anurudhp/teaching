def fib(n):
    if n == 0 or n == 1:
        return 1
    return fib(n - 1) + fib(n - 2)

def main():
    value = 0
    while True:
        line = input()
        if line == "inc":
            value += 1
            print("> OK")
        if line == "print":
            print("> VALUE = " + str(value))
        if line[0:3] == "fib":
            # "fib n"
            n = int(line[4:])
            print("> FIB = " + str(fib(n)))

main()

