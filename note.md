Qt Creator调试器和编译器和qt版本需要对应，才能配置。例：Desktop Qt %{Qt:Version} MSVC2015_64bit + Microsoft Visual C++ Compiler 14.0 (amd64) (vs2015) + Program Files (x86)\Windows Kits\10\Debuggers\x64\cdb.exe

## 2018-01-16 ##

在.pro文件有修改后(新建的新类，新cpp/h文件，新的资源文件),需要先执行qmake

- GameCore::generatePlayerBoard

在QMainWindow动态创建widget，若使centralwidget成为其父widget，会出现各种奇怪问题。widget可能不显示。


## 2018-01-17 ##
vs qt调试时，选择release版本，debug版本调试可能出现各种问题。如控件不显示，Qt语言家无法使用等问题。

- Card::getName()

在代码里添加待翻译的字符串后，要在项目里更新.ts文件生成新qm文件，否则可能找不到类，无法正确翻译。
QCoreApplicaiton::translator()  和 tr()对此项目而言，效果是一样的，都能使用。

- QYXCQ::QYXCQ

控件隐式的链接signal和slot，若显性手动连接时也按照隐性的格式写slot，则会报no match。

- DashBoard:QGraphicsItem

在继承抽象类时，纯虚函数的重写的声明需要和原有的一模一样（包括参数，函数名），并且类中不能加Q_OBJECT

- DashBoard::boundingRect()

声明了一个const的成员函数，在cpp里面里面定义该成员函数时没有加上const就会报错，所以在定义const成员函数时，如果是const成员函数，在定义的时，是需要加上const的，否则就会编译出错。

- QYXCQ::QYXCQ

Rect的四个坐标，前两个为左上角的位置坐标（本地坐标系），后两个设置大小。
w->setPos(x,y), 把w本地坐标系的原点放在父坐标系的x,y点。

## 2018-01-17 ##
信号只要声明不要设计其的实现函数

- CardItem.h

QGraphicsItem不能使用slot,signal机制，可以使用其子类QGraphicsObject, 几乎和QGraphicsItem一样，只是允许使用slot,signal机制

必须先重写mousePressEvent事件，mouseReleaseEvent事件（包括其他按下鼠标键后的事件，如松开鼠标，按着鼠标移动）才会响应

- CustomLabel::setText()

update(rect)函数用于重绘，此函数在被调用之后，会自动调用本类的paint()绘制函数

## 2018-01-22 ##

- gamecore.h gamescene.h

两个头文件（类）互相引用，会出现“缺少类型说明符”错误，需要加入前置声明

## 2018-01-23 ##

- CardItem::CardItem

QGraphicsItem在相应isSelected()和鼠标hover等事件前，要先打开开关。如setFlag(),setAcceptHoverEvents()等

QT不像MFC在什么时间都可以绘图，使用QPainter画图，要重写paint()虚函数，在里面进行绘图。如果要在其他地方绘制图形，可以绘制到QImage或者QPixmap上面，然后在其他地方调用update()函数（自动调用paint()函数）

slots和signals的声明和connect里的要完全一致对应（只写类型不写参数名），否则报no such signal错误

## 2018-01-24 ##

在tr()翻译的类里面需要加上Q_OBJECT

- carditem.h

QGraphicsItem自带的isSelected()方法，在点击本item外部的位置时，isSelected()会自动置false, 所以自定义了private变量selected并重写了isSelected()方法来控制

- GameScene::contextMenuEvent

static_cast和dynamic_cast: 在无法进行类转换时（两类完全不相关），static_cast转换结果依然为原类；而dynamic_cast的转换结果则为0(null)

- audio.cpp

QString 中包含中文时转化为const char *， 可以用iostream：
<code>
std::string str = filename.toStdString();

const char* ch = str.c_str();
<code>