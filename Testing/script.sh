for((i = 1;i<100; ++i)); do
    echo $i
    ./a.out $i > int
    correct/./a.out < int >> out1
    wrong/./a.out < int >> out2
    diff -w out1 out2 || break
    rm out1
    rm out2
done