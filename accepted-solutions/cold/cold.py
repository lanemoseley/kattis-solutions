def main():
    n = int(input())
    temps = [int(i) for i in input().split()]

    sum = 0
    for temp in temps:
        if temp < 0:
            sum += 1

    print(sum)

if __name__ == "__main__":
    main()