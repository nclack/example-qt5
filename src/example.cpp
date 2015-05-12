#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc,char* argv[]) {
    QApplication app(argc,argv);
    QMainWindow w;
    QPushButton b("Hello world");
    QObject::connect(&b,&QPushButton::clicked,&app,&QApplication::quit);
    w.setCentralWidget(&b);
    w.show();    
    return app.exec();
}