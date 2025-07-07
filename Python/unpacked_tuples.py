info = ("Marcus", 20, "MIT")
(name, age, university) = info                            # UNPACKING TUPLES
print("Name:", name)
print("Age:", age)
print("Studies at:", university)
print()
# But what if we have more number of items than the variables?

fauna = ("cat", "dog", "horse", "pig", "parrot", "salmon")
(*animals, bird, fish) = fauna
print("Animals:", animals)
print("Bird:", bird)
print("Fish:", fish)


