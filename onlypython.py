def collatz(n: int) -> int:
    c = 0
    x = n
    while x > 1:
        if x % 2 == 0:
            x = x / 2
        else:
            x = 3 * x + 1
        c += 1
    return c


ans = 0

for i in range(1000000):
    ans += collatz(i)

print(ans)
