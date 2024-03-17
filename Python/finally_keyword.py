#  THE CONTENT OF   finally  KEYWORD WILL ALWAYS BE EXECUTED.

#  IT IS MAINLY USED IN A FUNCTION DEFINITION TO EXECUTE THE CONTENT IN THE finally KEYWORD IN ALL CASES.

def call():
    try:
        lst = [1, 12, 8, 20, 5]
        inp = int(input("ENTER AN INDEX"))
        print(lst[inp])
        return 1
    except:
        print("SOME ERROR OCCURRED")
        return 0

    finally:
        print("IT'S COMPULSORY TO EXECUTE THIS STATEMENT")


x = call()
print(x)
# call()



