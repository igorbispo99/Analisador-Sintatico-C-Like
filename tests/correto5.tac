.table
float i_1

.code

main:
add $1, 1.000000, 0.0
add $2, 3.400000, 0.0
add $3, $1, $2
add $4, 3.000000, 0.0
mul $5, $3, $4
mov i_1, $5
mov $6, i_1
println $6
add $7, 1.000000, 0.0
add $8, 3.400000, 0.0
add $9, 3.000000, 0.0
mul $10, $8, $9
add $11, $7, $10
mov i_1, $11
mov $12, i_1
println $12
