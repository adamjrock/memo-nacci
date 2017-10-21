#!/usr/bin/env python3
#
# Using memoization to turn O(phi ^ n/2) calculation
# of Fibonnaci sequence into an efficient algorithm
# concept and algorithm theory from MIT OpenCourseWare
#
# 10/20/2017
# Adam J. Rock

memo = {}

def fib(n):
    if n in memo:
        return memo[n]
    if n<=2:
        f=1
    else:
        f=fib(n-1)+fib(n-2)
    memo[n]=f
    return f
def main():
    n = int(input("Find the nth Fibonacci number: "))
    k = fib(n)
    print("The {}th Fibonacci number is: {}".format(n, k))

if __name__ == "__main__":
    main()
