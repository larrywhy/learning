import sys # for error code
from stock import *
#
# global variable
# 
str_command = "delete rule1"
str_command2 = "set 2330 > 20"
#[sample]
list_db_data=['2330','<','50']

#list_sub_command=str_command.split(' ')
#print(list_sub_command[0])
#
# main function
#

if (EnvironmentError == function_check_command(str_command)):
  print("[ERR] command fail! , Do nothing.")
  sys.exit()
  # do error handling here


function_do_command(str_command2)
function_stock_value_alert(list_db_data)

