# base class
class Creature
  def initialize(name="why")
    @name = name
  end
  
  def fight
    return "Punch to the chops!"
  end
end

# derived class
class Dragon < Creature
  # override
  def fight
    return "Breathes fire!"
  end 
  # new method
  def rname
      return @name
  end
end

# derived class with no argument
d1 = Dragon.new
puts d1.rname
# derived class with initialization
d2 = Dragon.new("sam")
puts d2.rname
puts d2.fight # call overrided method
# based class
d3 = Creature.new
puts d3.fight