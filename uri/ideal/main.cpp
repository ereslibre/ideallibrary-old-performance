#include <core/application.h>
#include <core/uri.h>

using namespace IdealCore;

int main(int argc, char **argv)
{
    Application app(argc, argv);

    for (size_t i = 0; i < 100000; ++i) {
        Uri u("/home/ereslibre");
        u.isValid();
    }

    return 0;
}
