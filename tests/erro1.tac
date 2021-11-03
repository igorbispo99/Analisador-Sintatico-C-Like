.table
int n1_1
float n2_1
int n_2
int n_2[]={0}
int m_2[]={0}
int n_5
float n_5

.code
main:
add $1, 1.000000, 0
add $2, 1.000000, 0
add $3, $1, $2
mov n_2, $3
brz IF_END_1, $4
IF_END_1:
mov $5, n_2
sub $6, $5, $5
mov n_2, $6
println 
