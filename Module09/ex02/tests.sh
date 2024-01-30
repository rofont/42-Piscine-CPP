
#!/bin/bash

# COLORS
YEL='\x1B[33m'
CYA='\x1B[36m'
WHT='\033[0m'

# GOOD TESTS
TEST1=("3" "5" "9" "7" "4")
TEST2=("5" "1" "56" "2")
TEST3=("818" "466" "211" "02" "953" "6" "57" "965" "127" "815" "123" "456")
# TEST3=($(seq 1 100000 | sort -R | head -n 3000))
# TEST4=($(jot -r 3000 1 100000 | tr '\n' ' '))
# WRONG TESTS
TEST5=("-1" "2")
TEST6=();
TEST7=("1" "2" "1" "2" "1" "2")
TEST8=("33a3" "2305")
TEST9=("1" "34" "2147483648")


# DISPLAY
for ((i = 1; i <= 9; i++)); do
    TITLE="${YEL}--------------------------
          ${CYA}TEST $i${YEL}
--------------------------${WHT}"

    echo "$TITLE"

    TEST_VAR="TEST$i[@]"
    CURRENT_TEST=("${!TEST_VAR}")

    ./PmergeMe "${CURRENT_TEST[@]}"
done
