#include <QtCore/QCoreApplication>
#include <QtCore/QUrl>

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    for (size_t i = 0; i < 100000; ++i) {
        QUrl f("/home/ereslibre");
        f.isValid();
    }

    return 0;
}
