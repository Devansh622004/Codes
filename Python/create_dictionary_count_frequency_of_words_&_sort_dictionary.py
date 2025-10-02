# create input of dict. from user
# a) count frequency of each words.
# b) print dict. in sorted order.
# Step 1: Create dictionary from user input
dict = {}

size = int(input("Enter the Size of the Dictionary: "))
for i in range(size):
    id = input("Enter Id: ")
    name = input("Enter Name: ")
    age = input("Enter Age: ")
    dict[id] = {"Name": name, "Age": age}

# Step 2: Count word frequency in all Names
freq = {}
for d in dict.values():           # go through each sub-dictionary
    for word in d["Name"].split():  # split the Name into words
        freq[word] = freq.get(word, 0) + 1

# Step 3: Print the frequency dictionary sorted by words
print("\nWord Frequency (sorted alphabetically):")
for word in sorted(freq):
    print(word, ":", freq[word])
