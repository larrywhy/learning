movie_ratings = {
  memento: 3,
  primer: 3.5,
  the_matrix: 5,
  truman_show: 4,
  red_dawn: 1.5,
  skyfall: 4,
  alex_cross: 2,
  uhf: 1,
  lion_king: 3.5
}
# use iterator and conditional if-else
good_movie_if = Hash.new
movie_ratings.each do |movie,grade|
    p movie if grade > 3
    good_movie_if[movie] = grade if grade > 3
end
p good_movie_if

# use .select method
good_movie_select = movie_ratings.select {|movie,grade| grade > 3}
p good_movie_select


