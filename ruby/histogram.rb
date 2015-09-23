text = gets.chomp
puts text
words = text.split

frequencies = Hash.new(0)
words.each do |word|
    frequencies[word] += 1
end

# print frequencies hash
p frequencies

#sort
frequencies = frequencies.sort_by do |sub_word, count|
    count
end
# print sorted frequencies hash
p frequencies

# reverse from high to low
frequencies.reverse!
# print sorted and reversed frequencies hash
p frequencies