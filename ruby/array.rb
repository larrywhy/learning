#
# 2-D array
#
array = [[12,13],[14,21],[23,15],[26,25]]
# print array by using iterator
array.each do |sub_array|
	# print 1-D array
	p sub_array
	# pint 2-D array
	sub_array.each do |element|
    	p element
	end
end
p array[3][1]    # 25