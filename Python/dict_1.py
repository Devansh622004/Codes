dic = {2220038 : "devansh", 2220043 : "nature", 2220037 : "krishna"}

print(dic)
print(type(dic))

print("STUDENT NAME OF ROLL NO. 2220038 IS: ", dic[2220038])
# NOTE:-
# 1) IF WE PASS AN ELEMENT IN "dic[]", WHICH DOES NOT EXIST THEN :-

# OUTPUT:-
# ERROR


print("STUDENT NAME OF ROLL NO. 2220038 IS: ", dic.get(2220038))
# NOTE:-
# 1) IF WE PASS AN ELEMENT IN "dic.get()", WHICH DOES NOT EXIST THEN :-

# OUTPUT:-
# None (i.e. None WILL BE PRINTED ON THE SCREEN)