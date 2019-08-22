def main():
    x = int(input())
    n = int(input())
    res = 0

    for i in range(n):
        p = int(input())
        res += x - p
    
    res += x
    print(res)

if __name__ == "__main__":
    main()