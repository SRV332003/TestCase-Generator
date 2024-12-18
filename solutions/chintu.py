t = int(input())
for i in range(t):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    s = sum(a)
    m = s%k
    print(min(k-m, (m+1)//2))   