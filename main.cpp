#include <QCoreApplication>
#include <iostream>
#include <QTimer>
//using namespace std;
using std::cout, std::endl;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString str = "Hello";
    cout << "abc123" << endl;
    cout << str.toStdString().data() << endl;

    //Add this, otherwise the Qt console program will not end automatically
    QTimer t;
    t.connect(&t, SIGNAL(timeout()), &a, SLOT(quit()));
    t.start(20);

    return a.exec();
}
