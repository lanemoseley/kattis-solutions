def main():
    nums = [int(i) for i in input().split()]
    
    for i in range(nums[2]):
        if (i + 1) % nums[0] == 0:
            if (i + 1) % nums[1] == 0:
                print("Fizzbuzz")
            else:
                print("Fizz")
        
        elif (i + 1) % nums[1] == 0:
            print("Buzz")
        
        else:
            print(i + 1)

if __name__ == "__main__":
    main()