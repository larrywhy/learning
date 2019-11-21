value="123s"
try:
    value = int(value)
    print("ok")
except ValueError:
    pass
    print("fail")
