#include <core/application.h>
#include <core/file.h>

using namespace IdealCore;

int main(int argc, char **argv)
{
    Application app(argc, argv);

    for (size_t i = 0; i < 100000; ++i) {
        File f("/home/ereslibre", &app);
    }

    return 0;
}
