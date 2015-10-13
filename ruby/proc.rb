ages = [23, 101, 7, 104, 11, 94, 100, 121, 101, 70, 44]

# 設定低於100的條件
under_100 = Proc.new{|x| x < 100}

# 挑出低於100的條件
youngsters = ages.select(&under_100)
#  [23, 7, 11, 94, 70, 44]

# 會顯示每一個是否合乎條件 ==> true/false
new_list = ages.map(&under_100)
# [true, false, true, false, true, true, false, false, false, true, true]