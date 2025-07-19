names = []

# _ is a throwaway variable — it means you don’t care about the actual value (like 0, 1, 2),
# you're just repeating something 3 times.

for _ in range(3):
    names.append(input("WHAT'S YOUR NAME ?"))

for name in sorted(names):
    print(f"Hello {name}")

