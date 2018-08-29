if [ -f ./a.out ]; then
    rm ./a.out
fi

g++ main.cpp
./a.out
