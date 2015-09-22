#
# check whether the string have subString 
# you can use regular expression to do this. 
#
print "please enter string:"
user_input = gets.chomp
if user_input.include? "hello"
    print "yes"
end

