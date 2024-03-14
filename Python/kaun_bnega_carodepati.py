lst = ["1)What is the highest mountain peak in the Indian subcontinent?",
       "2)What is the longest river in India?",
       "3)What is the largest lake in India?",
       "4)What is the most populous state in India?",
       "5)What is the least populous state in India?"]

cash = 0


def questions(n):
       global cash


       match n:
              case 0:
                     print(lst[0])
                     print("A) MOUNT EVEREST                      B) GEORGE EVEREST")
                     print("C) KANGCHENJUNGA                      D) CHANDI DEVI")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "C" or answer == "c":
                            cash += 50
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash)
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: C) KANGCHENJUNGA")
                            print("YOUR BALANCE IS Rs.", cash)

              case 1:
                     print(lst[1])
                     print("A) INDUS                      B) GODAVARI")
                     print("C) GANGA                      D) SUTLEJ")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "C" or answer == "c":
                            cash += 60
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash)
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: C) GANGA")
                            print("YOUR BALANCE IS Rs.", cash)

              case 2:
                     print(lst[2])
                     print("A) VEMBAND                      B) CHILIKA")
                     print("C) SHIVSAGAR                    D) INDIRA")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "A" or answer == "a":
                            cash += 70
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash)
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: A) VEMBAD")
                            print("YOUR BALANCE IS Rs.", cash)

              case 3:
                     print(lst[3])
                     print("A) UTTARAKHAND                      B) BIHAR")
                     print("C) UTTAR PRADESH                    D) INDIRA")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "C" or answer == "c":
                            cash += 80
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash)
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: C) UTTAR PRADESH")
                            print("YOUR BALANCE IS Rs.", cash)

              case 4:
                     print(lst[4])
                     print("A) SIKKIM                           B) BIHAR")
                     print("C) UTTAR PRADESH                    D) INDIRA")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "A" or answer == "a":
                            cash += 90
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash)
                            print("\nYOU WON TOTAL Rs.", cash, "FROM K.B.C")
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: A) SIKKIM")
                            print("YOUR BALANCE IS Rs.", cash)

              case _:
                     print("END OF THE GAME")

for q in range(5):
       questions(q)



print("\nYOU WON TOTAL Rs.",cash, "FROM K.B.C")