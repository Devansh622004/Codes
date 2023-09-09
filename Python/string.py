str="""meher baba ki jai
jai shree ram
jai bharat
jai maharashtra"""

name='devansh'

print("rohu," +name)

########### USING FOR LOOP ###########

# for chracter in name:
#     print(character)

############ TO PRINT STRING TO A DESIRED LIMIT ##########

print(name[0:4])
print(name[2:4])
print(name[1:4])

print(name[0:])
print(name[:5])

print(str[-4:-2])

########### IF YOU WANT TO SKIP ONE  or more CHARACTER ############

print(str[0:4:3])
print(str[::2])


print(name[::-1])

print(str[::])

print(str[::5000])

############## IF YOU ENTER A STRING LENGTH GREATER THAN ACTUAL LENGTH OF STRING ################

print(name[:390000])