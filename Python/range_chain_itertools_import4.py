from itertools import chain

print('CONCATENATING THE STRINGS')

str = chain(range(5), range(10, 20, 2))  # USING CHAIN METHOD.

for i in str:
    print(i, end=" ")