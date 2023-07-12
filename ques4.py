def find_solutions(n, C):
    solutions = []

    def generate_combinations(curr_sum, combination):
        if len(combination) == n:
            if curr_sum == C:
                solutions.append(combination)
            return

        for i in range(C - curr_sum + 1):
            generate_combinations(curr_sum + i, combination + [i])

    generate_combinations(0, [])

    return solutions


# Test the function
n = int(input("Enter the value of n: "))
C = int(input("Enter the value of C: "))

solutions = find_solutions(n, C)
print("Solutions:")
for solution in solutions:
    print(solution)
