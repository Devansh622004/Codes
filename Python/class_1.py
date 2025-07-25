class person:
    name = "MEHER"
    occupation = "SPREADING LOVE"
    networth = 7
    def info(self):
        print(f"{self.name} is {self.occupation}")

a = person()
a.name = "DEVANSH"
a.occupation = "engineer"
a.info()