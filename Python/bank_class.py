class bank:
    def __init__(self):
        self.acc_no = None
        self.name = None
        self.balance = None
        self.std = {}  # moved std here so it is available in all methods

    def add_acc(self):
        size = int(input("Enter No. of Account You Want To Create: "))
        for i in range(size):
            self.acc_no = int(input("Enter Your Account No.: "))
            self.name = input("Enter Your Name: ")
            self.balance = int(input("Enter Your Balance: "))
            self.std[self.acc_no] = {"Name": self.name, "Balance": self.balance}

    def display_acc(self):
        print("\n********** DISPLAYING INFORMATION OF ALL USERS **********")
        for acc_no, details in self.std.items():
            print("Account No.:", acc_no)
            print("Name:", details["Name"])
            print("Balance:", details["Balance"])
            print("-----------------------------")

    def search(self):
        s = int(input("Enter the Account No. of the User You Wants to Search For: "))
        if s in self.std:
            print("\n********** ACCOUNT FOUND **********")
            print("Account No.:", s)
            print("Name:", self.std[s]["Name"])
            print("Balance:", self.std[s]["Balance"])
        else:
            print("\n Account not found!")



customer = bank()

customer.add_acc()
customer.display_acc()

customer.search()

wants = input("Say 'YES' If You Want To Add a New Account And 'NO' for Vice-Versa: ")

if wants == "YES":
    customer.add_acc()
    customer.display_acc()
else:
    print("THANKS FOR GIVING US CHANCE.")
