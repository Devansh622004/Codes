import time
timestamp = time.strftime('%H:%M:%S')

print(timestamp)
Hour = int(time.strftime('%H'))

print(Hour)
Minute = int(time.strftime('%M'))

print(Minute)
Second = int(time.strftime('%S'))

print(Second)

am_pm = input('am/pm: ')

if 6 <= Hour <= 12 and am_pm == 'am':
    print('GOOD MORNING SIR')
elif 1 <= Hour <= 5 and am_pm == 'pm':
    print('GOOD AFTERNOON SIR')
elif 5 < Hour <= 7 and am_pm == 'pm':
    print('GOOD EVENING SIR')
elif 7 < Hour <= 12 and am_pm == 'pm':
    print('GOOD NIGHT SIR')

