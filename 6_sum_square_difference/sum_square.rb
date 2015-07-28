sum_square = 0
square_sum = 0

(1..100).each do |x|
	sum_square += x*x
end

puts "sum_square = #{sum_square}"

(1..100).each do |x|
	square_sum += x
end

square_sum = square_sum*square_sum

puts "square_sum = #{square_sum}"

puts square_sum - sum_square