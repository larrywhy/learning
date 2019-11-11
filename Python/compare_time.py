import datetime
time_now = datetime.datetime.now().time()
#time_now = datetime.datetime.now()+datetime.timedelta(hours=8)
print(time_now)
time_start = datetime.time(hour = 00, minute = 57)
print(time_start)
if time_now > time_start:
    print("time is pass!")
else:
    print("time is FAIL!")

