# multiple parameter
def what_up(*bros)
  bros.each { |bro| puts "#{bro}!" }
end
 
what_up("What up", "Justin", "Ben", "Kevin Sorbo")

# multiple parameter with 1 fixed parameter
def what_up2(say, *bros)
  bros.each { |bro| puts "#{say}" + "! " + "#{bro}!" }
end

what_up2("hey","larry","merry")