def str_to_list(stringVar1):
    listVar1 = stringVar1.split(" ")
    return listVar1

string = "set stock 2330 > 50"
listVar1 = str_to_list(string)
print listVar1[2]
