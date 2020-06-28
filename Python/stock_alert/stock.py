stock_2330_value_now=100
#
# check_command
#
def function_check_command(str_input_command):
  list_sub_command = str_input_command.split(' ')

  # first command
  if (list_sub_command[0] != "set") & (list_sub_command[0] != "delete"):
    print("[ERR] command error !")
    return EnvironmentError

  if (list_sub_command[0] == "set"):
    if (len(list_sub_command) != 4):
      print("[ERR] command error ! set: must be 2 parameter")
      return EnvironmentError

    if (list_sub_command[1].isdigit() != True):
      print("[ERR] command 1 is not number !")
      return EnvironmentError

    # [todo] maybe use gt,ge,lt,le??
    if (list_sub_command[2] != ">") & (list_sub_command[2] != "<"):
      print("[ERR] command 2 is not > or < !")
      return EnvironmentError     

    if (list_sub_command[3].replace('.','',1).isdigit() != True):
      print("[ERR] command 3 is not number !")
      return EnvironmentError

  if (list_sub_command[0] == "delete"):
    if (len(list_sub_command) != 2):
      print("[ERR] command error !, delete: must be 2 parameter")
      return EnvironmentError
#
# do_command
#
def function_do_command(str_input_command):
  list_sub_command = str_input_command.split(' ')
  if (list_sub_command[0] == "set"):
    print("set command!")
    #[todo] 
    # insert command to db [stock.NO] [>|<] [stock.value] 
  else:
    print("delete command!")
#
# alert !!!
#
def function_stock_value_alert(list_input_db_data):
  stock_number = list_input_db_data[0]
  operator = list_input_db_data[1]
  stock_value = list_input_db_data[2]
  if (operator == ">"):
    if ((int(stock_value) - stock_2330_value_now) > 0):
      print("[WARN] NOW!!!! >>>")
      print("[WARN] NOW!!!! >>>")
      print("[WARN] NOW!!!! >>>")
  if (operator == "<"):
    if ((int(stock_value) - stock_2330_value_now) < 0):
      print("[WARN] NOW!!!! <<<")
      print("[WARN] NOW!!!! <<<")
      print("[WARN] NOW!!!! <<<")

