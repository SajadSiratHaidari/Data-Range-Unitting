#include <iostream>
#include <vector>

std::vector <char> rangeData(void * data, int size)
{
    std::vector <char> result;
    if (data == nullptr || size == 0) {
        return result;
    }

    char * ptr = static_cast <char *> (data);
    for (int i = 0; i < size; ++i) {
        result.push_back(*ptr);
        ptr++;
    }

    return result;
}

int main()
{
    int i = 10;
    std::vector <char> result = rangeData(&i, sizeof(i));
    std::cout << result.at(0) << std::endl;
    return 1;
}
