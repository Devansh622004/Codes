items = {}

while True:
       try:
            x = input().lower()    # TAKING INPUT (DICTIONARY ITEMS)
            if x in items:
                items[x] += 1       # STORING ITEMS ONE BY ONE IN THE DICTIONARY
            else:
                items[x] = 1
       except EOFError:
           for key in sorted(items.keys()):   # sorted() IS USED TO PRINT IN ALPHABETICAL ORDER
               print(items[key], key)
           break


