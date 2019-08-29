def main():
    num_cases = int(input())
    while num_cases:
        student_grades = [int(i) for i in input().split()]
        
        average = 0
        for i in student_grades[1:]:
            average += i
        average /= student_grades[0]

        Sum = 0
        for i in range(1, len(student_grades)):
            if student_grades[i] > average:
                Sum += 1

        print("{:.3f}".format((Sum / student_grades[0]) * 100.0) + "%")

        num_cases -= 1

if __name__ == "__main__":
    main()