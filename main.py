from build import pycollatz

ans = 0

for i in range(1000000):
    ans += pycollatz.collatz(i)

print(ans)
