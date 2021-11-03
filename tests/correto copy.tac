.table
int b_1
int i_1
float a_1
int n_5
int i_6
float n_6
int a_6
int b_6

.code

teste:
mov $1, i_1
print $1
mov $2, i_1
add $3, 1.000000, 0.0
inttofl $4, $2
sub $5, $4, $3
not $5, $5
brz IF_ELSE_1, $5
print 'i'
print ' '
print 'e'
print 'h'
print ' '
print '1'
print '\n'
mov $6, i_1
add $7, 1.000000, 0.0
inttofl $8, $6
add $9, $8, $7
return $9
jump END_IF_ELSE_2
IF_ELSE_1:
mov $1, a_1
add $2, 0.000000, 0.0
sub $3, $1, $2
return $3
END_IF_ELSE_2:
return 0

hello_world:
print 'H'
print 'e'
print 'l'
print 'l'
print 'o'
print ' '
print 'W'
print 'o'
print 'r'
print 'l'
print 'd'
print '!'
print '\n'
return 0

hello_world_n:
print 'H'
print 'e'
print 'l'
print 'l'
print 'o'
print ' '
print 'W'
print 'o'
print 'r'
print 'l'
print 'd'
print ' '
mov $1, n_5
println $1
mov $2, n_5
return $2
return 0

main:
add $1, 10.000000, 0.0
fltoint $2, $1
mov i_6, $2
add $3, 3.500000, 0.0
mov n_6, $3
call hello_world
mov $4, #0
mov $5, n_6
add $6, 2.000000, 0.0
mul $7, $5, $6
add $8, 5.000000, 0.0
sub $9, $7, $8
push $9
pop $10
fltoint $11, $10
mov n_5, $11
call hello_world_n
mov $12, #0
mov $13, i_6
brz IF_END_3, $13
add $14, 5.000000, 0.0
fltoint $15, $14
mov i_6, $15
FOR_4:
mov $16, i_6
add $17, 0.000000, 0.0
inttofl $18, $16
sleq $19, $17, $18
brz FOR_END_5, $19
mov $20, i_6
add $21, 2.000000, 0.0
inttofl $22, $20
slt $23, $21, $22
brz IF_ELSE_6, $23
print 'a'
print '\n'
jump END_IF_ELSE_7
IF_ELSE_6:
print 'b'
print '\n'
END_IF_ELSE_7:
mov $24, i_6
add $25, 1.000000, 0.0
inttofl $26, $24
sub $27, $26, $25
fltoint $28, $27
mov i_6, $28
jump FOR_4
FOR_END_5:
IF_END_3:
add $29, 3.500000, 0.0
add $30, 2.000000, 0.0
add $31, $29, $30
add $32, 7.000000, 0.0
mul $33, $31, $32
add $34, 4.000000, 0.0
div $35, $33, $34
add $36, 2.000000, 0.0
sub $37, $35, $36
fltoint $38, $37
mov a_6, $38
scani b_6
mov $39, a_6
mov $40, b_6
and $41, $39, $40
brz IF_END_9, $41
print 'A'
print ' '
print 'a'
print 'n'
print 'd'
print ' '
print 'B'
print '\n'
mov $42, a_6
println $42
mov $43, b_6
println $43
IF_END_9:
mov $44, a_6
mov $45, b_6
or $46, $44, $45
brz IF_END_11, $46
print 'A'
print ' '
print 'o'
print 'r'
print ' '
print 'B'
print '\n'
print 'a'
print '='
mov $47, a_6
println $47
print 'b'
print '='
mov $48, b_6
println $48
IF_END_11:
add $49, 0.000000, 0.0
fltoint $50, $49
mov a_6, $50
mov $51, a_6
mov $52, b_6
and $53, $51, $52
brz IF_END_13, $53
print 'A'
print ' '
print 'a'
print 'n'
print 'd'
print ' '
print 'B'
print ','
print ' '
print 'a'
print '='
print '0'
print '\n'
print 'a'
print '='
mov $54, a_6
println $54
print 'b'
print '='
mov $55, b_6
println $55
IF_END_13:
mov $56, a_6
mov $57, b_6
or $58, $56, $57
mov $59, a_6
and $60, $58, $59
brz IF_END_15, $60
print '('
print 'A'
print ' '
print 'o'
print 'r'
print ' '
print 'B'
print ')'
print ' '
print 'a'
print 'n'
print 'd'
print ' '
print 'A'
print ','
print ' '
print 'a'
print '='
print '0'
print '\n'
print 'a'
print '='
mov $61, a_6
println $61
print 'b'
print '='
mov $62, b_6
println $62
IF_END_15:
mov $63, a_6
mov $64, a_6
sub $65, $63, $64
not $65, $65
brz IF_END_17, $65
print '('
print 'A'
print ' '
print '='
print '='
print ' '
print 'A'
print ')'
print ' '
print 'a'
print 'n'
print 'd'
print ' '
print 'A'
print ','
print ' '
print 'a'
print '='
print '0'
print '\n'
print 'a'
print '='
mov $66, a_6
println $66
print 'b'
print '='
mov $67, b_6
println $67
IF_END_17:
mov $68, a_6
mov $69, b_6
sub $70, $68, $69
brz IF_ELSE_19, $70
print '('
print 'A'
print ' '
print '!'
print '='
print ' '
print 'B'
print ')'
print ' '
print 'a'
print 'n'
print 'd'
print ' '
print 'A'
print ','
print ' '
print 'a'
print '='
print '0'
print '\n'
print 'a'
print '='
mov $71, a_6
println $71
print 'b'
print '='
mov $72, b_6
println $72
jump END_IF_ELSE_20
IF_ELSE_19:
print '('
print 'A'
print ' '
print '='
print '='
print ' '
print 'B'
print ')'
print ' '
print 'a'
print 'n'
print 'd'
print ' '
print 'A'
print ','
print ' '
print 'a'
print '='
print '0'
print '\n'
print 'a'
print '='
mov $73, a_6
println $73
print 'b'
print '='
mov $74, b_6
println $74
END_IF_ELSE_20:
mov $75, i_6
push $75
mov $76, a_6
push $76
add $77, 10.000000, 0.0
add $78, 3.000000, 0.0
div $79, $77, $78
push $79
pop $80
mov b_1, $80
pop $81
inttofl $82, $81
mov i_1, $82
pop $83
fltoint $84, $83
mov a_1, $84
call teste
mov $85, #0
mov i_6, $85
print 'R'
print 'e'
print 't'
print 'o'
print 'r'
print 'n'
print 'o'
print ' '
print 'd'
print 'a'
print ' '
print 'f'
print 'u'
print 'n'
print 'c'
print 'a'
print 'o'
print ' '
print 'c'
print 'o'
print 'm'
print ' '
print 'i'
print ' '
print 'e'
print ' '
print 'a'
print ':'
mov $86, i_6
print $86
println 
