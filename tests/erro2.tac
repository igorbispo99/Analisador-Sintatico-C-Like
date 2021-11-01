.table
int i_1

.code
main:
add $1, 0.000000, 0
mov i_1, $1
FOR_1:
mov $3, i_1
print $3
brz FOR_END_2, $3
jump FOR_1
FOR_END_2:
