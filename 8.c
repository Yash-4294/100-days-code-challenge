n = int(input("Enter a positive integer N: "))

if n < 1:
    print("Please enter a natural number (N >= 1).")
else:
    total_sum = n * (n + 1) // 2
    print(f"Sum of first {n} natural numbers: {total_sum}")
