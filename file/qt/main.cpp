#include <QtCore/QCoreApplication>
#include <QtCore/QFile>

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    for (size_t i = 0; i < 100000; ++i) {
        QFile f("/home/ereslibre");
    }

    return 0;
}
