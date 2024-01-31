
#!/bin/bash

# COLORS
YEL='\x1B[33m'
CYA='\x1B[36m'
WHT='\033[0m'

# GOOD TESTS
TEST1=("3" "5" "12" "123" "9" "7" "4")
TEST2=("5" "1" "56" "2")
TEST3=("818" "466" "211" "02" "953" "6" "57" "965" "127" "815" "123" "456" "42")
TEST4=($(seq 1 100000 | sort -R | head -n 3000))
TEST5=($(jot -r 3000 1 100000 | tr '\n' ' '))
# sorted_TEST5=($(echo "${TEST5[@]}" | tr ' ' '\n' | sort -n | uniq))

# WRONG TESTS
TEST6=("-1" "2")
TEST7=();
TEST8=("1" "2" "1" "2" "1" "2")
TEST9=("33a3" "2305")
TEST10=("1" "34" "2147483648")

#TEST IF A DOBLE IN TEST5
# if [ ${#TEST5[@]} -ne ${#sorted_TEST5[@]} ]; then
#     echo "Il y a des doublons dans la liste."
# else
#     echo "Pas de doublons dans la liste."
# fi


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
