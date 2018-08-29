if [ -f ./a.out ]; then
    rm ./a.out
fi

g++ main.cpp --std=c++11 -fpermissive
./a.out
