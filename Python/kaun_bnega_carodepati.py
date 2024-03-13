lst = ["1)What is the highest mountain peak in the Indian subcontinent?",
       "2)What is the longest river in India?",
       "3)What is the largest lake in India?",
       "4)What is the most populous state in India?",
       "5)What is the least populous state in India?"]

cash = 50


def questions(n):
       match n:
              case 0:
                     print(lst[0])
                     print("A) MOUNT EVEREST                      B) GEORGE EVEREST")
                     print("C) KANGCHENJUNGA                      D) CHANDI DEVI")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "C" or answer == "c":
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash)
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: C) KANGCHENJUNGA")
                            print("YOU LOSE Rs.", cash)

              case 1:
                     print(lst[1])
                     print("A) INDUS                      B) GODAVARI")
                     print("C) GANGA                      D) SUTLEJ")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "A" or answer == "a":
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash + 10)
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: A) INDUS")
                            print("YOU LOSE Rs.", cash + 10)

              case 2:
                     print(lst[2])
                     print("A) VEMBAND                      B) CHILIKA")
                     print("C) SHIVSAGAR                    D) INDIRA")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "A" or answer == "a":
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash + 20)
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: A) VEMBAD")
                            print("YOU LOSE Rs.", cash + 20)

              case 3:
                     print(lst[3])
                     print("A) UTTARAKHAND                      B) BIHAR")
                     print("C) UTTAR PRADESH                    D) INDIRA")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "C" or answer == "c":
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash + 30)
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: C) UTTAR PRADESH")
                            print("YOU LOSE Rs.", cash + 30)

              case 4:
                     print(lst[4])
                     print("A) SIKKIM                           B) BIHAR")
                     print("C) UTTAR PRADESH                    D) INDIRA")
                     answer = input("YOUR ANSWER IS: ")
                     print(answer, "IS LOCKED")
                     if answer == "C" or answer == "c":
                            print("CORRECT ANSWER")
                            print("YOU WON Rs.", cash + 40)
                     else:
                            print("INCORRECT ANSWER")
                            print("CORRECT ANSWER IS: C) UTTAR PRADESH")
                            print("YOU LOSE Rs.", cash + 40)

              case _:
                     print("END OF THE GAME")

for q in range(5):
       questions(q)

