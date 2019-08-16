def main():
    num = int(input())

    for _ in range(num):
        x = int(input())
        
        if x & 1:
            print(x, " is odd")

        else:
            print(x, " is even")

if __name__ == "__main__":
    main()