#include "QYXCQ.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// initialize random seed for later use

	QTranslator qt_translator;
    qt_translator.load("qyxcq_zh.qm");
	a.installTranslator(&qt_translator);

	//QString s = qt_translator.translate("ɱ", "slash");


    QYXCQWindow = new QYXCQ();

    QYXCQWindow->show();

	return a.exec();
}
