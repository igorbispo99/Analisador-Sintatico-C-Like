.table
int t[] = {0, 1}

int t2[]= {3,4}
.code
mov t2,&t
mov $1, &t
mov $2, &t2

mov $3, $1[0]
println $3

mov $3, $1[1]
println $3

mov $3, $2[0]
println $3

mov $3, $2[1]
println $3
