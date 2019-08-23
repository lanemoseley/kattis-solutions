def main():
    hours, minutes = input().split(" ")
    hours = int(hours)
    minutes = int(minutes)
    minutes -= 45

    if minutes < 0:
        if hours == 0:
            hours = 23
        else:
            hours -= 1
        minutes += 60
    
    print(str(hours) + " " + str(minutes))

if __name__ == "__main__":
    main()