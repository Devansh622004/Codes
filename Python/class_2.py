class person:
    def __init__(self, name, o):            #  LASO KNOWNS AS "Dunder init method".
        print("JAI MEHER BABA")
        self.name = name
        self.occ = o

    def info(self):
        print(f"{self.name} is a {self.occ}")

a = person("ANSH", "DATA SCIENTIST")
b = person("RUDRA", "BUSINESSMAN")
a.info()
b.info()