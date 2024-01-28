
#!/bin/bash

# COLORS
YEL='\x1B[33m'
CYA='\x1B[36m'
WHT='\033[0m'

# GOOD TESTS
TEST1="8 9 * 9 - 9 - 9 - 4 - 1 +"
TEST2="7 7 * 7 -"
TEST3="3 5 * 2 * 6 2 * +"
TEST4="1 2 * 2 / 2 * 2 4 - +"

# WRONG TESTS
TEST5="5 / 4 5 + 2 * +"
TEST6="1 1 * + 4"
TEST7="1 a * + c"
TEST8="(1 + 1)"
TEST9="123 23 +"
TEST10="4 + 5 -1 +"


# DISPLAY
for ((i = 1; i <= 10; i ++)); do
	TITLE="${YEL}--------------------------
          ${CYA}TEST $i${YEL}
--------------------------${WHT}"

echo "$TITLE"

TEST_VAR="TEST$i"
eval "CURRENT_TEST=\$$TEST_VAR"

./RPN "$CURRENT_TEST"

done

