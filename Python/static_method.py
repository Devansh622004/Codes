class math:
    def __init__(self, num):
        self.num = num
    def addtonum(self, n):
        self.num = self.num + n
    @staticmethod
    def sum(a, b):
        return a + b

o1 = math(2)
print(o1.num)

o1.addtonum(3)
print(o1.num)

print(o1.sum(2, 3))