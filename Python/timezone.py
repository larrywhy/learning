import datetime
import pytz
tz = pytz.timezone('US/Eastern')
#tz = pytz.timezone('Asia/Taipei')

time_now = datetime.datetime.now(tz).time()
print(time_now)

