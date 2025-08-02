class vector:
    def __init__(self, i, j, k):
        self.i = i
        self.j = j
        self.k = k

    def __str__(self):
        return f" {self.i}i + {self.j}j + {self.k}k"

    def __add__(self, x):
        return vector(self.i + x.i, self.j + x.j, self.k + x.k)

v1 = vector(1, 2, 3)
v2 = vector(4, 5, 6)

print(v1)
print(v2)

# print(v1 + v2)      PYTHON IS'T SMART ENOUGH TO ADD TWO VECTORS( ADDING i's, j's, k's SEPERATELY ).

print(v1 + v2)