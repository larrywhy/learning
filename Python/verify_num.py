user_input = input("enter number:")
print(user_input)
try:
    isNum = int(user_input)
    print("yes, is number")
except ValueError:
    print("No, is string.")
