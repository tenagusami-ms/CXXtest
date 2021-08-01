#include <cstdio>
#include <string>

void a(const std::string &);

int main() {
    const std::string str{"test"};
    a(str);

    return 0;
}

void a(const std::string &x) {
    printf("test word is %s.\n", x.c_str());
}
