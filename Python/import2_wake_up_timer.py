import time
timestamp = time.strftime('%H:%M:%S')

print(timestamp)
Hour = int(time.strftime('%H'))

print(Hour)
Minute = int(time.strftime('%M'))

print(Minute)
Second = int(time.strftime('%S'))

print(Second)
#
# am_pm = input('am/pm: ')

if 4 <= Hour <= 12:
    print('GOOD MORNING SIR')
elif 12 < Hour <= 17:
    print('GOOD AFTERNOON SIR')
elif 17 < Hour <= 21:
    print('GOOD EVENING SIR')
elif 21 < Hour <= 23:
    print('GOOD NIGHT SIR')

