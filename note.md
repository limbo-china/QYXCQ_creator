Qt Creator调试器和编译器和qt版本需要对应，才能配置。例：Desktop Qt %{Qt:Version} MSVC2015_64bit + Microsoft Visual C++ Compiler 14.0 (amd64) (vs2015) + Program Files (x86)\Windows Kits\10\Debuggers\x64\cdb.exe

## 2018-01-16 ##

- GameCore::generatePlayerBoard

在QMainWindow动态创建widget，若使centralwidget成为其父widget，会出现各种奇怪问题。widget可能不显示。


## 2018-01-17 ##
vs qt调试时，选择release版本，debug版本调试可能出现各种问题。如控件不显示，Qt语言家无法使用等问题。

- Card::getName()

在代码里添加待翻译的字符串后，要在项目里更新.ts文件生成新qm文件，否则可能找不到类，无法正确翻译。
QCoreApplicaiton::translator()  和 tr()对此项目而言，效果是一样的，都能使用。

- QYXCQ::QYXCQ

控件隐式的链接signal和slot，若显性手动连接时也按照隐性的格式写slot，则会报no match错误。

- DashBoard:QGraphicsItem

在继承抽象类时，纯虚函数的重写的声明需要和原有的一模一样（包括参数，函数名），并且类中不能加Q_OBJECT

- DashBoard::boundingRect()

声明了一个const的成员函数，在cpp里面里面定义该成员函数时没有加上const就会报错，所以在定义const成员函数时，如果是const成员函数，在定义的时，是需要加上const的，否则就会编译出错。

- QYXCQ::QYXCQ

Rect的四个坐标，前两个设置左上角的位置坐标（本地坐标系），后两个设置大小。
w->setPos(x,y), 把w本地坐标系的原点放在父坐标系的x,y点。

## 2018-01-17 ##
信号只要声明不要设计其的实现函数
