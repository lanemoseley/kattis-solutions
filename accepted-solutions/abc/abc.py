def main():
    numbers = [int(i) for i in input().split()]    
    numbers.sort()

    order = list(input())
    output = []

    for i in range(len(order)):
        if order[i] == "A":
            output.append(numbers[0])
        elif order[i] == "B":
            output.append(numbers[1])
        else:
            output.append(numbers[2])

    print(*output)

if __name__ == "__main__":
    main()